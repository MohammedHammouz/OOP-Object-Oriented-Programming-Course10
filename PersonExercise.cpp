// PersonExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class clsAddress {
    private:
        short _ID;
        string _FirstName;
        string _LastName;
        string _Email;
        string _PhoneNumber;
    public:
        clsAddress(short ID,string FirstName, string LastName, string Email, string PhoneNumber) {
            _ID = ID;
            _FirstName = FirstName;
            _LastName = LastName;
            _Email = Email;
            _PhoneNumber = PhoneNumber;
        }
        int ID() {
            return _ID;
        }
        void setFirstName(string FirstName) {
            _FirstName=FirstName;
        }
        string FirstName() {
            return _FirstName;
        }
        void setLastName(string LastName) {
            _LastName = LastName;
        }
        string LastName() {
            return _LastName;
        }
        void setEmail(string Email) {
            _Email = Email;
        }
        string Email() {
            return _Email;
        }
        void setPhoneNumber(string PhoneNumber) {
            _PhoneNumber = PhoneNumber;
        }
        string PhoneNumber() {
            return _PhoneNumber;
        }
        
        string FullName() {
            return _FirstName + " " + _LastName;
        }
        void Print() {
            cout << "\nInfo:";
            cout << "\n______________________________________";
            cout << "\nID: " << _ID ;
            cout << "\nFirstName: " << _FirstName;
            cout << "\nLastName: " << _LastName;
            cout << "\nFull name: " << FullName() ;
            cout << "\nEmail: " << _Email;
            cout << "\nPhoneNumber: " << _PhoneNumber;
            cout << "\n_______________________________________\n";
        
        }
        void SendEmail(string Subject, string Body) {
            cout << "\nThe following message sent succesfully to email: " << _Email;
            cout << "\nSubject: " << Subject;
            cout << "\nBody: " << Body << endl;
        }
        void SendSMS(string TextMessage) {
            cout << "\nThe following SMS sent succesfully to email: " << _PhoneNumber;
            cout << "\n" << TextMessage << endl;
        }
};

int main()
{
    clsAddress Address1(10,"Mohammed", "Hammouz", "mm@gmail.com", "030303030303030");
    Address1.Print();
    Address1.SendEmail("Hi", "How are you?");
    Address1.SendSMS("How are you?");
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
