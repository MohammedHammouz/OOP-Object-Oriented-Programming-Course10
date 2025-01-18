// EmployeeExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include<string>
class clsPerson {
    private:
        short _ID;
        string _FirstName;
        string _LastName;
        string _Email;
        string _PhoneNumber;
    public:
        clsPerson(short ID, string FirstName, string LastName, string Email, string PhoneNumber) {
            _ID = ID;
            _FirstName = FirstName;
            _LastName = LastName;
            _Email = Email;
            _PhoneNumber = PhoneNumber;
        }
        short ID() {
            return _ID;
        }
        void setFirstName(string FirstName) {
            _FirstName = FirstName;
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
            cout << "\nID: " << _ID;
            cout << "\nFirstName: " << _FirstName;
            cout << "\nLastName: " << _LastName;
            cout << "\nFull name: " << FullName();
            cout << "\nEmail: " << _Email << endl;
            cout << "PhoneNumber: " << _PhoneNumber;
            cout << "\n_______________________________________\n";

        }
};
class clsEmployee:public clsPerson {
private:
    
    string _Title;
    int _Salary;
    string _Department;
public:
    clsEmployee(short ID, string FirstName, string LastName, string Email, string PhoneNumber, string Title,int Salary,string Department):
        clsPerson(ID,FirstName,LastName,Email,PhoneNumber){
        _Title = Title;
        _Salary = Salary;
        _Department = Department;
    }
    
    void setTitle(string Title) {
        _Title = Title;
    }
    string Title() {
        return _Title;
    }
    void setSalary(int Salary) {
        _Salary = Salary;
    }
    int Salary() {
        return _Salary;
    }
    void setDepartment(string Department) {
        _Department = Department;
    }
    string Department() {
        return _Department;
    }
    
    void Print() {
        cout << "\nInfo:";
        cout << "\n______________________________________";
        cout << "\nID: " << ID();
        cout << "\nFirstName: " << FirstName();
        cout << "\nLastName: " << LastName();
        cout << "\nFull name: " << FullName();
        cout << "\nEmail: " << Email() << endl;
        cout << "PhoneNumber: " << PhoneNumber();
        cout << "\nTitle: " << _Title;
        cout << "\nSalary: " << _Salary;
        cout << "\nDepartment: " << _Department;
        cout << "\n_______________________________________\n";

    }
    void SendEmail(string Subject, string Body) {
        cout << "\nThe following message sent succesfully to email: " << Email();
        cout << "\nSubject: " << Subject;
        cout << "\nBody: " << Body << endl;
    }
    void SendSMS(string TextMessage) {
        cout << "\nThe following SMS sent succesfully to email: " << PhoneNumber();
        cout << "\n" << TextMessage << endl;
    }
};
class clsDeveloper :public clsEmployee{
    private:
        string _MainProgrammingLanguage;
        
    public:
        clsDeveloper(short ID, string FirstName, string LastName, string Email, string PhoneNumber, string Title, int Salary, string Department, string MainProgrammingLanguage) :
            clsEmployee(ID, FirstName, LastName, Email, PhoneNumber, Title, Salary, Department) {
            _MainProgrammingLanguage = MainProgrammingLanguage;
        }
        void setMainProgrammingLanguage(string MainProgrammingLanguage) {
            _MainProgrammingLanguage = MainProgrammingLanguage;
        }
        string MainProgrammingLanguage() {
            return _MainProgrammingLanguage;
        }
        void Print() {
            cout << "\nInfo:";
            cout << "\n______________________________________";
            cout << "\nID: " << ID();
            cout << "\nFirstName: " << FirstName();
            cout << "\nLastName: " << LastName();
            cout << "\nFull name: " << FullName();
            cout << "\nEmail: " << Email() << endl;
            cout << "PhoneNumber: " << PhoneNumber();
            cout << "\nTitle: " << Title();
            cout << "\nSalary: " << Salary();
            cout << "\nDepartment: " << Department();
            cout << "\nMainProgrammingLanguage: " << _MainProgrammingLanguage;
            cout << "\n_______________________________________\n";

        }
};
int main()
{
    clsDeveloper Developer1(10, "Mohammed", "Hammouz", "mm@gmail.com", "030303030303030","Software developer",2000,"IT","C++");
    Developer1.Print();
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
