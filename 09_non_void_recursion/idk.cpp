
#include <iostream>

int power(int base, int exp);

int main(void) {

    std::cout << power(2, 4) << std::endl;
    
    
    
    return 0;
}

int power(int base, int exp) {
    if (exp == 0) {
        printf("I am power(%d, %d). I know the answer is 1!\n\n", base, exp);
        return 1;
    }
    printf("I am power(%d, %d).\n", base, exp);
    printf("I remember %d and ask power(%d, %d) for help!\n\n", base, base, exp - 1);
    int help = power(base, exp - 1);
    printf("I am power(%d, %d).\n", base, exp);
    printf("power(%d, %d) returned me %d. I will muliply it by %d and return", base, exp - 1, help, base);
    return base + help;
}