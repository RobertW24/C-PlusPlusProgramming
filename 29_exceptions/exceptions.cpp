
#include <iostream>
#include <stdexcept>
#include <string>

class MyException : std::logic_error {
public:
    MyException(int code, const std::string& msg)
        : std::logic_error(msg), err_code(code) {}

        int getCode() const {
            return err_code;
        }

        const char* what() const noexcept override {
            std::string out("The exception code is ");
            out += std::to_string(getCode());
            out += '\n';

            out += std::logic_error::what();

            return out.c_str();
        }

private:
    int err_code;


};

class Fraction {
public:
    Fraction(int n, int d) : num(n), den(d) {

    }

    int quotient() const {
        if (den == 0) {
            throw std::runtime_error("Denominator cannot be zero.");
        }
        // if fraction is negative, throw logic_error
        if ((num < 0 && den > 0) || (num > 0 && den < 0)) {
            throw std::logic_error("Result cannot be negative.");
        }
        // if quotient is greater than 100 thrwo MyEception with code 11
        if (num / den > 100) {
            throw MyException(11, "Quotient cannot be greater than 100"); // he said this execption should work but its not
        }

        return num / den;
    }

private:
    int num, den;
};

int main(void) {
    int n1, n2;
    std::cout << "Enter two integers: ";
    std::cin >> n1 >> n2;

    Fraction f1(n1, n2);

    try {
        std::cout << f1.quotient() << std::endl;
        std::cout << "End of try block" << std::endl;
    }
    catch (const MyException& ex) {
        std::cout << "MyException exception was caught: " << ex.what() << std::endl;
    }
    catch (const std::runtime_error& ex) {
        std::cout << "Runtime error exception was caught: " << ex.what() << std::endl;
    }
    catch (const std::exception& ex) {
        std::cout << "Base class exception exception was caught: " << ex.what() << std::endl;
    }
    // catch (const char* ex) {
    //     std::cout << "Char pointer exception was caught: " << ex << std::endl;
    // }
    
    
    std::cout << "End of program" << std::endl;
    return 0;
}