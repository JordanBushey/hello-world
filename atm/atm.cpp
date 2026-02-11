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
    void displayMenu( Account& userAccount )
    {
        if ( menuState == 0 )
        {
            cout << "Welcome to the ATM" << endl;
            cout << "Please enter an account number: " << endl;
            // cin >> accountNumber;
        }
        else if ( menuState == 5 )
            cout << "1. View my balance \n2. Withdraw Cash\n3. Deposit Cash\n4. Exit" << endl;

        else if ( menuState == 1 )
            cout << "Account Balance: " << userAccount.getAccountBalance() << endl;

        else if ( menuState == 2 )
        {
            cout << "Withdraw Cash\nPlease enter an amount to withdraw: " << endl;
            cin >> x;
            cout << "\nWithdrawing " << x << endl;
            if( userAccount.getAccountBalance() < x)
                cout << "You do not have enough in your account to make this withdrawl" << endl;
            else
                userAccount.withdraw(x);
        }
        else if ( menuState == 3 )
        {
            cout << "Deposit Cash\nPlease enter an amount to deposit: " << endl;
            cin >> x;
            cout << "Depositing " << x << endl;
            userAccount.deposit(x);
        }
        else if ( menuState == 4 )
            cout << "Exit" << endl;
    }

    void setMenuState( int newState )
    {
        menuState = newState;
    }
private:
    int menuState;
    int x;
};



int main()
{
    bool running = true;
    int x;

    Menu myMenu(5);
    Account myAccount(1, 0);

    while(running == true)
    {
        myMenu.displayMenu( myAccount );
        cout << "\nSelect a menu option: ";
        cin >> x;
        if(x == 4)
            break;
        myMenu.setMenuState(x);
    }
    return 0;
}
