// Friend-Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsA {
    private:
        int _Var1;
    protected:
        int _Var2;
    public:
        int Var3;
        clsA() {
            _Var1 = 10;
            _Var2 = 20;
            Var3 = 30;
        }
    friend class clsB;
};
class clsB {
public:
    void display(clsA A1) {
        cout << endl << "The value of Var1=" << A1._Var1;
        cout << endl << "The value of Var2=" << A1._Var2;
        cout << endl << "The value of Var3=" << A1.Var3;
    }
};
class clsC {
public:
    void display(clsA A1) {
        cout << endl << "The value of Var3=" << A1.Var3;
    }
};

int main()
{
    clsA A1;
    clsB B1;
    clsC C1;
    B1.display(A1);
    C1.display(A1);
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
