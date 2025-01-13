// Copy-Constructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsAddress {
private:
    string _AddressLine1;
    string _AddressLine2;
    string _POBox;
    string _ZipCode;
public:
    clsAddress(string AddressLine1, string AddressLine2, string POBox, string ZipCode) {
        _AddressLine1 = AddressLine1;
        _AddressLine2 = AddressLine2;
        _POBox = POBox;
        _ZipCode = ZipCode;
    }
    
    void Print() {
        cout << "AddressLine1: " << _AddressLine1 << endl;
        cout << "AddressLin2: " << _AddressLine2 << endl;
        cout << "POBox: " << _POBox << endl;
        cout << "ZipCode: " << _ZipCode << endl;
    }
};
int main()
{
    clsAddress Address1("aaaa", "bbbbb", "11", "c222");
    Address1.Print();
    clsAddress Address2 = Address1;
    Address2.Print();
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
