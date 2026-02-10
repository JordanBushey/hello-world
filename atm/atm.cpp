#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Account.h"

class Menu
{
public:
    Menu( int newMenuState )
    {
        menuState = newMenuState;
    }
    void displayMenu()
    {
        if ( menuState == 0 )
        {
            cout << "Welcome to the ATM" << endl;
            cout << "Please enter an account number: " << endl;
        }
        else if ( menuState == 5 )
            cout << "1. View my balance \n2. Withdraw Cash\n3. Deposit Cash\n4. Exit" << endl;
        else if ( menuState == 1 )
            cout << "Account Balance: " << endl;
        else if ( menuState == 2 )
            cout << "Withdraw Cash\n Please enter an amount to withdraw: " << endl;
        else if ( menuState == 3 )
            cout << "Deposit Cash\n Pleaste enter an amount to deposit: " << endl;
        else if ( menuState == 4 )
            cout << "Exit" << endl;
    }

    void setMenuState( int newState )
    {
        menuState = newState;
    }
private:
    int menuState;
};



int main()
{
    Menu myMenu(1);
    Account myAccount(1, 0);
    myMenu.displayMenu();
    int x;
    cout << "\nSelect a menu option: ";
    cin >> x;

    myMenu.setMenuState(x);
    myMenu.displayMenu();
    return 0;
}
