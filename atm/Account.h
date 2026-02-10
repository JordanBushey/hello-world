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
