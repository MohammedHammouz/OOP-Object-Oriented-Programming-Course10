// UpCasting&LowerCasting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsA {
public:
    int Var1=44;
    int Fun1() {
        return 1;
    }

};
class clsB :public clsA {
public:
    int Var2 = 55;
    int Fun2() {
        return 2;
    }
};
int main()
{
    clsB B1;
    clsA* A1 = &B1;
    cout << A1->Var1;
    
    clsB B2;
    cout << B2.Var1;
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
