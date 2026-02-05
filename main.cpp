#include <iostream>

using std::cout
using std::cin
// function main begins program execution
int main()
{
    int number1;
    int number2;
    int output;

    std::cout << "Input first number: ";
    std::cin >> number1;
    std::cout << "\nInput second number: ";
    std::cin >> number2;

    output = number1 + number2;

    std::cout << "\nSum is: " << output << std::endl;

    int c, thisIsAVariable, q76354, number, age;

    std::cout << "Input an integer: ";
    std::cin >> age;

    if (age != 7)
        std::cout << "The variable number is not equal to 7";

    std::cout << "\nThis is a C++ program";
    std::cout << "\nThis is a C++\n program";
    std::cout << "\nThis \nis \na \nC++\n program";
    std::cout << "\tThis \tis \ta \tC++\t program";

    return 0;

}
