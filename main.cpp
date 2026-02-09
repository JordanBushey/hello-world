#include <iostream>

using std::cout;
using std::cin;
using std::endl;
// function main begins program execution
int main()
{
    cout << "This program calculates the product of 3 integers";

    int x;
    int y;
    int z;

    cout << "\nEnter three integers: ";
    cin >> x >> y >> z;

    int result;
    result = x * y * z;

    cout << "The product is " << result << endl;

    /*
    int c, thisIsAVariable, q76354, number, age;

    std::cout << "Input an integer: ";
    std::cin >> age;

    if (age != 7)
        std::cout << "The variable number is not equal to 7";

    std::cout << "\nThis is a C++ program";
    std::cout << "\nThis is a C++\n program";
    std::cout << "\nThis \nis \na \nC++\n program";
    std::cout << "\tThis \tis \ta \tC++\t program";
    */

    return 0;


}
