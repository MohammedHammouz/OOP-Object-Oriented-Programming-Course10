// AccessSpecifiersOrModifiers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsPerson {
    private:
        //only accessable inside this class
        int Variable1 = 5;
        int Function1() {
            return 40;
        }
    protected:
        //only accessable inside this class and only classes inherits this class
        int Variable2 = 100;
        int Function2() {
            return 100;
        }
    public:
        string FirstName;
        string LastName;
        string FullName() {
            return FirstName + "  " + LastName;
        }
        float Function3() {
            return Variable1 * Variable2 * Function1();
        }
};
int main()
{
    clsPerson Person1;
    Person1.FirstName = "Mohammed";
    Person1.LastName = "Hammouz";
    string S1;//this object type from string class
    cout << "Person name: " << Person1.FullName() << endl;
    cout << Person1.Function3() << endl;
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
