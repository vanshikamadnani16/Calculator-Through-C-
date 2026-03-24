#include <iostream>
using namespace std;

struct Account
{
    long accNo;
    string name;
    float balance;
};

Account bank[100];
int totalAccounts = 0;

// Create Account
void createAccount()
{
    cout << "\nEnter Account Number: ";
    cin >> bank[totalAccounts].accNo;

    cin.ignore();
    cout << "Enter Account Holder Name: ";
    getline(cin, bank[totalAccounts].name);

    bank[totalAccounts].balance = 0;

    totalAccounts++;

    cout << "Account Created Successfully!\n";
}

// Display Accounts
void initialdetails()
{
    if(totalAccounts == 0)
    {
        cout << "No accounts found.\n";
        return;
    }

    for(int i = 0; i < totalAccounts; i++)
    {
        cout << "\nAccount No: " << bank[i].accNo;
        cout << "\nName: " << bank[i].name;
        cout << "\nBalance: Rs. " << bank[i].balance << "\n";
    }
}

// Search Account (returns index)
int searchAccount(int accNo)
{
    for(int i = 0; i < totalAccounts; i++)
    {
        if(bank[i].accNo == accNo)
            return i;
    }
    return -1;
}

// Deposit Money
void deposit()
{
    int accNo;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    int index = searchAccount(accNo);

    if(index == -1)
    {
        cout << "Account Not Found.\n";
        return;
    }

    cout << "Enter Amount to Deposit: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "Invalid Amount!\n";
        return;
    }

    bank[index].balance += amount;

    cout << "Deposit Successful!\n";
    cout << "Updated Balance: Rs. " << bank[index].balance << "\n";
}

// Withdraw Money
void withdraw()
{
    int accNo;
    float amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    int index = searchAccount(accNo);

    if(index == -1)
    {
        cout << "Account Not Found.\n";
        return;
    }

    cout << "Enter Amount to Withdraw: ";
    cin >> amount;

    if(amount <= 0)
    {
        cout << "Invalid Amount!\n";
        return;
    }

    if(amount > bank[index].balance)
    {
        cout << "Insufficient Balance!\n";
    }
    else
    {
        bank[index].balance -= amount;

        cout << "Withdrawal Successful!\n";
        cout << "Remaining Balance: Rs. " << bank[index].balance << "\n";
    }
}

// Search and Display One Account
void searchAndDisplay()
{
    int accNo;
    cout << "Enter Account Number: ";
    cin >> accNo;

    int index = searchAccount(accNo);

    if(index != -1)
    {
        cout << "\nAccount Found!";
        cout << "\nName: " << bank[index].name;
        cout << "\nAvailableBalance: Rs. " << bank[index].balance << "\n";
    }
    else
    {
        cout << "Account Not Found.\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== BANKING SYSTEM =====";
        cout << "\n1. Create Account";
        cout << "\n2. Initial Details of Accounts";
        cout << "\n3. Deposit Money";
        cout << "\n4. Withdraw Money";
        cout << "\n5. Search Account";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: createAccount(); break;
            case 2: initialdetails(); break;
            case 3: deposit(); break;
            case 4: withdraw(); break;
            case 5: searchAndDisplay(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while(choice != 6);

    return 0;
}