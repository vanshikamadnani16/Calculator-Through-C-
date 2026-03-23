#include <iostream>
using namespace std;

struct Expense
{
    string title;
    float amount;
    string category;
};

Expense expenses[100];
int totalExpenses = 0;

// Add Expense
void addExpense()
{
    cout << "\nEnter Expense Title: ";
    cin.ignore();
    getline(cin, expenses[totalExpenses].title);

    cout << "Enter Amount: ";
    cin >> expenses[totalExpenses].amount;

    cout << "Enter Category (Food/Travel/Shopping/etc): ";
    cin.ignore();
    getline(cin, expenses[totalExpenses].category);

    totalExpenses++;

    cout << "Expense Added Successfully!\n";
}

// Display Expenses
void displayExpenses()
{
    if(totalExpenses == 0)
    {
        cout << "No expenses found.\n";
        return;
    }

    for(int i = 0; i < totalExpenses; i++)
    {
        cout << "\nExpense " << i + 1;
        cout << "\nTitle: " << expenses[i].title;
        cout << "\nAmount: Rs. " << expenses[i].amount;
        cout << "\nCategory: " << expenses[i].category << "\n";
    }
}

// Total Expense
void totalExpense()
{
    float total = 0;

    for(int i = 0; i < totalExpenses; i++)
    {
        total += expenses[i].amount;
    }

    cout << "Total Expense: Rs. " << total << "\n";
}

// Highest Expense
void highestExpense()
{
    if(totalExpenses == 0)
    {
        cout << "No expenses found.\n";
        return;
    }

    float max = expenses[0].amount;
    int index = 0;

    for(int i = 1; i < totalExpenses; i++)
    {
        if(expenses[i].amount > max)
        {
            max = expenses[i].amount;
            index = i;
        }
    }

    cout << "\nHighest Expense:";
    cout << "\nTitle: " << expenses[index].title;
    cout << "\nAmount: Rs. " << expenses[index].amount;
    cout << "\nCategory: " << expenses[index].category << "\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== EXPENSE TRACKER =====";
        cout << "\n1. Add Expense";
        cout << "\n2. View Expenses";
        cout << "\n3. Total Expense";
        cout << "\n4. Highest Expense";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: addExpense(); break;
            case 2: displayExpenses(); break;
            case 3: totalExpense(); break;
            case 4: highestExpense(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}