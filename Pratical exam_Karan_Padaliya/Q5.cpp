// 5. Write a Program to handle ambiguity error permanently in Hybrid inheritance.

#include <iostream>
using namespace std;

// Base class A

class A
{
public:
    void func()
    {
        cout << " I am in class A" << endl;
    }
};

// Base class B

class B
{
public:
    void func()
    {
        cout << " I am in class B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    char copyright[20] = "@Karan_Padaliya\n";

    cout << "\n\n\t\t-::Handle ambiguity error permanently in Hybrid inheritance::-\n\n";

    C obj;
    
    //Ambiguity error solution
    obj.A::func();

    obj.B::func();
    
    cout << "\n-----------------------------------------------\n";
    cout << "| Copyrights Recivied by: " << copyright;
    cout << "-----------------------------------------------\n";

    return 0;
}
