#include <iostream>

int main()
{
    // std::cout << "Operator: ||" << std::endl;
    // std::cout << "true     true     true" << std::endl;
    // std::cout << "false    true     true" << std::endl;
    // std::cout << "true     false    true" << std::endl;
    // std::cout << "false    false    false" << std::endl;
    // std::cout << " " << std::endl;
    // std::cout << "Operator: &&" << std::endl;
    // std::cout << "true     true     true" << std::endl;
    // std::cout << "false    true     false" << std::endl;
    // std::cout << "true     false    false" << std::endl;
    // std::cout << "false    false    false" << std::endl;
    // std::cout << " " << std::endl;

    int a, b, c;

    std::cout << "Input a first number: " << std::endl;
    std::cin >> a;
    std::cout << "Input a second number: " << std::endl;
    std::cin >> b;
    std::cout << "Input a third number: " << std::endl;
    std::cin >> c;

    if ((a <= b) && (a <= c)) {
        std::cout << a << std::endl;
        if (b <= c) {
            std::cout << b << std::endl;
            std::cout << c << std::endl;
        } else {
            std::cout << c << std::endl;
            std::cout << b << std::endl;
        }
    } else if ((b <= c) && (b <= a)) {
        std::cout << b << std::endl;
        if (a <= c) {
            std::cout << a << std::endl;
            std::cout << c << std::endl;
        } else {
            std::cout << c << std::endl;
            std::cout << a << std::endl;
        }
    } else {
       std::cout << c << std::endl;
        if (a <= b) {
            std::cout << a << std::endl;
            std::cout << b << std::endl;
        } else {
            std::cout << b << std::endl;
            std::cout << a << std::endl;
        } 
    }

}