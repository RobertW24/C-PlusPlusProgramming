
#include "Point.hpp"
#include <iostream>

int main(void) {
    Point p1(3, 4, "my point");

    Point p2(p1);
    Point p3;

    Point p4(1, 1, "p4");

    p3 = p1 = p4;

    std::cout << p1.toString() << std::endl;
    std::cout << p2.toString() << std::endl;
    std::cout << p3.toString() << std::endl;
    std::cout << p4.toString() << std::endl;
    
    std::cout << "---" << p1 << std::endl;

    std::cin >> p4;
    std::cout << p4;


    //delete [] p1;
    //Point p2(5, 4);
    //Point p3(82, 70);

    // Compare two points
    // if (p1 != p2) {
    //     std::cout << (char) p3[0];
    // }
    // else {
    //     std::cout << (char) p3[1];
    // }

    // p1[0] = 52 + 33;

    // std::cout << (char) p1[0];

    // std::cout << "FB7\n";



    // std::cout << "p3 = " << p3.toString() << std::endl;
    
    // Point p4 = p1 + p2;
    // std::cout << "p4 = " << p4.toString() << std::endl;

    // Point p5 = p1 * p2;
    // std::cout << "p5 = " << p5.toString() << std::endl;

    // Point p6 = p1 - p2;
    // std::cout << "p6 = " << p6.toString() << std::endl;

    // int x = 1;
    // (x += 2) += 5;

    // TDOO
    // test all operators

    return 0;
}
