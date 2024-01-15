// 1. Write a C++ program to print factorial series using recursion.

#include <iostream>
using namespace std;

// Recursion
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Factorial series up to a given number
void printFact(int n)
{
    cout << "\n\nFactorial Series up to " << n << ":\n\n";
    for (int i = 0; i <= n; ++i)
    {
        cout << "Factorial of " << i << " is: " << factorial(i) << endl;
    }
}

int main()
{
    char copyright[20] = "@Karan_Padaliya\n";

    int n;
    cout << "\n\n\t\t(:Factorial series using recursion :)" << endl
         << endl;
    // Input from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Print factorial series
    printFact(n);

    cout << "\n-----------------------------------------------\n";
    cout << "| Copyrights Recivied by: " << copyright;
    cout << "-----------------------------------------------\n";

    return 0;
}
