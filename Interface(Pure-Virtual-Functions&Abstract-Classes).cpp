// Interface(Pure-Virtual-Functions&Abstract-Classes).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
//Abstract class/Interface contract
class clsMobile {
public:
    virtual void Dial(string PhoneNumber) = 0;
    virtual void SendSMS(string PhoneNumber, string Text) = 0;
    virtual void TakePicture() = 0;
};
class clsiPhone:public clsMobile {
    //This class signed a contract with clsMobile abstract class therefore it should implement everything in the abstract class
public:
    void Dial(string PhoneNumber) {
        
    };
    void SendSMS(string PhoneNumber, string Text) {

    }
    void TakePicture() {

    }
    
};
class clsSamsungNote10 :public clsMobile {
    //This class signed a contract with clsMobile abstract class therefore it should implement everything in the abstract class
public:
    void Dial(string PhoneNumber) {

    };
    void SendSMS(string PhoneNumber, string Text) {

    }
    void TakePicture() {

    }
    
};
int main()
{
    clsiPhone iPhone1;
    clsSamsungNote10 Note10;
    system("pause>0");
    return 0;
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
