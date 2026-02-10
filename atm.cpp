#include <iostream>
using std::cout;
using std::cin;
using std::endl;

class mainMenu
{
public:
    void displayMenu()
    {
        if ( menuState == 0 )
            cout << "Welcome to the ATM" << endl;
            cout << "Please enter an account number: " << endl;

        if ( menuState == 1 )
            cout << "1. View my balance \n2. Withdraw Cash\n3. Deposit Cash\n4. Exit" << endl;
    }

    void setMenuState( int newState )
    {
        menuState = newState;
    }
private:
    int menuState;
};

class Account
{
public:
    Account( int newAccountNumber, int newAccountBalance )
    {
        setAccountBalance(newAccountBalance);
        setAccountNumber(newAccountNumber);
    }

    int getAccountBalance()
    {
        return accountBalance;
    }

    void setAccountBalance( int newAccountBalance )
    {
        accountBalance = newAccountBalance;
    }

    void setAccountNumber( int newAccountNumber )
    {
        accountNumber = newAccountNumber;
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
    int accountNumber;
};


int main()
{
    mainMenu myMainMenu;
    Account myAccount(1, 0);
    myMainMenu.displayMenu();
    myMainMenu.setMenuState(1);
    myMainMenu.displayMenu();
    return 0;
}
