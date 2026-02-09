#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class mainMenu
{
public:
    void displayMenu()
    {
        cout << "Heres the menu" << endl;
    }
};

class Account
{
public:
    int getAccountBalance()
    {
        return accountBalance;
    }

    void deposit( int value )
    {
        accountBalance += value;
    }

    void withdraw( int value )
    {
        accountBalance -= value;
    }
private:
    int accountBalance;
};


int main()
{
    cout << "Welcome to my atm!" << endl;
    mainMenu myMainMenu;
    myMainMenu.displayMenu();
    return 0;
}
