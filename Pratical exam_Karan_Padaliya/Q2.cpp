// 2. Array Of Object (Bank Management System) Requirements(A/C Number , A/C Name , A/C Type , A/C Branch , A/C Balance ) Search Record By A/C Number.*

#include <iostream>
#include <string>
using namespace std;
class Account
{
public:
    int Account_Number, Account_Balance;
    char Account_name[20], Account_Type[20], Account_Branch[20];

    // string Account_name;
    void enterAccountData()
    {
        cout << "\n------------------------------------------------------" << endl;
        cout << "Enter Account Number: ";
        cin >> Account_Number;
        cout << "Enter Account Name: ";
        cin >> Account_name;
        cout << "Enter Account Type: ";
        cin >> Account_Type;
        cout << "Enter Account Branch: ";
        cin >> Account_Branch;
        cout << "Enter Account Balance: ";
        cin >> Account_Balance;
        cout << "------------------------------------------------------\n"
             << endl;
    }
    void getAccountData()
    {
        cout << "\n\t\tDetails of this Account Number: " << Account_Number << " is " << endl;
        cout << "\t------------------------------------------------------" << endl;
        cout << "Account Number: " << Account_Number << endl
             << "Account Name: " << Account_name << endl
             << "Account Type: " << Account_Type << endl
             << "Account Branch: " << Account_Branch << endl
             << "Account Balance: " << Account_Balance << endl;
    }
};
int main()
{
    char copyright[20] = "@Karan_Padaliya\n";
    Account a[3];
    int choice;
    int Account_Number;

    do
    {
        cout << "\n\t-: Welcome to the Bank Management System :-\n";
        cout << "\t-----------------------------------------------\n";
        cout << "Enter 1 - Add Account" << endl;
        cout << "Enter 2 - Search Account" << endl;
        cout << "Enter 3 - Exit" << endl;
        cout << "Press (1/2/3): ";
        cin >> choice;

        if (choice == 1)
        {
            for (int i = 0; i < 1; i++)
            {
                a[i].enterAccountData();
            }
        }
        else if (choice == 2)
        {
            cout << "Search Account No: ";
            cin >> Account_Number;

            for (int i = 0; i < 1; i++)
            {
                if (Account_Number == a[i].Account_Number)
                {
                    a[i].getAccountData();
                }
            }
        }
        else if (choice >= 3)
        {
            cout << "\nExit...." << endl;
        }

    } while (choice < 3 && choice > 0);

    cout << "\n-----------------------------------------------\n";
    cout << "| Copyrights Recivied by: " << copyright;
    cout << "-----------------------------------------------\n";

    return 0;
}