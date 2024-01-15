// 4. Write a Program which illustrates Method Overriding by using three classes

#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "\nAnimal makes a sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "\nDog: \tbarks....barks....barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void sound()
    {
        cout << "\nCat: \tmeows....meows....meows" << endl;
    }
};
// override a Duck class
class Duck : public Animal
{
};

int main()
{
    char copyright[20] = "@Karan_Padaliya\n";

    cout << "\n\n\t\t-::Method Overriding by using three classes::-\n\n";

    Animal animal;
    Dog dog;
    Cat cat;
    Duck duck;

    animal.sound();
    dog.sound();
    cat.sound();
    duck.sound();

    cout << "\n-----------------------------------------------\n";
    cout << "| Copyrights Recivied by: " << copyright;
    cout << "-----------------------------------------------\n";
    return 0;
}
