// StaticOrEarlyBindingVSDynamicOrLateBinding.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsPerson {
public:
    virtual void Print() {
        cout << "Hi,I'm a person\n";
    }
};
class clsEmployee:public clsPerson {
public:
    void Print() {
        cout << "Hi,I'm an employee\n";
    }
};
class clsDeveloper :public clsPerson {
public:
    void Print() {
        cout << "Hi,I'm a developer\n";
    }
};
int main()
{
    clsEmployee Employee1;
    clsDeveloper Developer1;
    //Early-Static binding
    Employee1.Print();
    Developer1.Print();
    //Dynamic-Late binding
    clsPerson* Person1 = &Employee1;
    clsPerson* Person2 = &Developer1;
    Person1->Print();
    Person2->Print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
