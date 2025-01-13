// Static-Members.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

class clsA {
    public:
        int var;
        static int counter;
        clsA() {
            counter++;
        }
        void Print() {
            cout << "\nvar     = " << var << endl;
            cout << "counter = " << counter << endl;
        }
};
int clsA::counter = 0;
int main()
{
    clsA A1, A2, A3;
    A1.var = 10;
    A2.var = 20;
    A3.var = 30;
    A1.Print();
    A2.Print();
    A3.Print();
    A1.counter = 500;
    A1.Print();
    A2.Print();
    A3.Print();
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
