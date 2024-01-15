// 3.  Give an example which shows Exception handling of division by zero exception.

#include <iostream>
using namespace std;

int main()
{
    char copyright[20] = "@Karan_Padaliya\n";
    try
    {
        int num1, num2, result;
        char z[40] = "!! Division by zero is not allowed !!\n\n";

        cout << "\n\n\t\t --: Exception handling of division by zero exception :--\n";
        cout << "\t----------------------------------------------------------------------";

        cout << "\n----------------------\n";
        cout << "Enter num1\t: ";
        cin >> num1;

        cout << "Enter num2\t: ";
        cin >> num2;
        cout << "----------------------\n";

        if (num2 == 0)
        {
            throw z;
        }

        result = num1 / num2;
        cout << "\n\nResult of division: " << result << endl;
    }
    catch (char z[])
    {
        cout << "\n\nError: " << z << endl;
    }
    catch (...)
    {
        cout << "An unknown error occurred." << endl;
    }
    cout << "\n-----------------------------------------------\n";
    cout << "| Copyrights Recivied by: " << copyright;
    cout << "-----------------------------------------------\n";
    return 0;
}
