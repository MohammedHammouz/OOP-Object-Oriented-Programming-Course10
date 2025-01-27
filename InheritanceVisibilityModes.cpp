// InheritanceVisibilityModes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class clsA {
private:
    int _V1;
    int Fun1() {
        return 1;
    }
protected:
    int V2;
    int Function2() {
        return 2;
    }
public:
    int V3;
    int Function3() {
        return 3;
    }
};
class clsB :private clsA {
public:
    int Function4() {
        return 4;
    }
};
class clsC :protected clsA {
public:
    int Function5() {
        return 5;
    }
};
class clsD :public clsA {
    int Function6() {
        return 6;
    }
};
int main()
{
    clsB B1;
    cout << B1.Function4() << "\n";
    clsC C1;
    cout << C1.Function5()<<"\n";
    clsD D1;
    cout << D1.Function3() << "\n";
    D1.V3 = 55;
    cout << D1.V3 << endl;
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
