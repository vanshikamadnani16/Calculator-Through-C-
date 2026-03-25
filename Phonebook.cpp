#include <iostream>
using namespace std;

struct Contact
{
    string name;
    string phone;
};

Contact contacts[100];
int totalContacts = 0;

// Add Contact
void addContact()
{
    cin.ignore();

    cout << "\nEnter Name: ";
    getline(cin, contacts[totalContacts].name);

    cout << "Enter Phone Number: ";
    getline(cin, contacts[totalContacts].phone);

    totalContacts++;

    cout << "Contact Added Successfully!\n";
}

// Display Contacts
void displayContacts()
{
    if(totalContacts == 0)
    {
        cout << "No contacts found.\n";
        return;
    }

    for(int i = 0; i < totalContacts; i++)
    {
        cout << "\nContact " << i+1;
        cout << "\nName: " << contacts[i].name;
        cout << "\nPhone: " << contacts[i].phone << "\n";
    }
}

// Search Contact
void searchContact()
{
    string name;
    cin.ignore();

    cout << "Enter Name to Search: ";
    getline(cin, name);

    for(int i = 0; i < totalContacts; i++)
    {
        if(contacts[i].name == name)
        {
            cout << "\nContact Found!";
            cout << "\nName: " << contacts[i].name;
            cout << "\nPhone: " << contacts[i].phone << "\n";
            return;
        }
    }

    cout << "Contact Not Found.\n";
}

// Delete Contact
void deleteContact()
{
    string name;
    cin.ignore();

    cout << "Enter Name to Delete: ";
    getline(cin, name);

    for(int i = 0; i < totalContacts; i++)
    {
        if(contacts[i].name == name)
        {
            // shift elements left
            for(int j = i; j < totalContacts - 1; j++)
            {
                contacts[j] = contacts[j + 1];
            }

            totalContacts--;

            cout << "Contact Deleted Successfully!\n";
            return;
        }
    }

    cout << "Contact Not Found.\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== CONTACT BOOK =====";
        cout << "\n1. Add Contact";
        cout << "\n2. Display Contacts";
        cout << "\n3. Search Contact";
        cout << "\n4. Delete Contact";
        cout << "\n5. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: deleteContact(); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid Choice!\n";
        }

    } while(choice != 5);

    return 0;
}