// PropertySetAndGetthrough=.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsPerson {
    private:
        //only accessable inside this class
        string _FirstName;
        string _LastName;
        int Variable1 = 5;
        int _ID = 10;
    protected:
        //only accessable inside this class and only classes inherits this class
        int Variable2 = 100;
        int Function2() {
            return 100;
        }
    public:
        string ReadString(string sentence) {
            string word;
            cout << sentence << endl;
            cin >> word;
            return word;
        }
        //property set
        void setFirstName(string FirstName) {
            _FirstName = FirstName;
        }
        //property get
        string getFirstName() {
            return  _FirstName;
        }
        //property set
        void setLastName(string LastName) {
            _LastName = LastName;
        }
        //property get
        string getLastName() {
            return  _LastName;
        }
        string FullName() {
            return _FirstName + " " + _LastName;
        }
        //Property Get,this is aread only property,because we don't have a set
        int ID() {
            return _ID;
        }
        __declspec(property(get = getFirstName, put = setFirstName))string FirstName;
        __declspec(property(get = getLastName, put = setLastName))string LastName;
};
int main()
{
    clsPerson Person1;

    cout << "ID: " << Person1.ID() << endl;
    Person1.setFirstName("Mohammed");
    Person1.setLastName("Hammouz");
    cout << "First name: " << Person1.getFirstName() << endl;
    cout << "Last name: " << Person1.getLastName() << endl;
    cout << "Person name: " << Person1.FullName() << endl;

    //Instead of the above we only write this
    Person1.FirstName = "Mohammed";
    cout << Person1.FirstName << endl;
    Person1.LastName = "Hammouz";
    cout << Person1.LastName << endl;

    Person1.setFirstName(Person1.ReadString("Enter First Name:"));
    Person1.setLastName(Person1.ReadString("Enter Last Name:"));
    cout << "First name: " << Person1.getFirstName() << endl;
    cout << "Last name: " << Person1.getLastName() << endl;
    cout << "Person name: " << Person1.FullName() << endl;

    //Instead of the above we only write this
    Person1.FirstName = Person1.ReadString("Enter First Name:");
    Person1.LastName = Person1.ReadString("Enter Last Name:");
    cout<<"First name: " << Person1.FirstName << endl;
    cout<<"Last name: " << Person1.LastName << endl;
    cout << "Person name: " << Person1.FullName() << endl;

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
