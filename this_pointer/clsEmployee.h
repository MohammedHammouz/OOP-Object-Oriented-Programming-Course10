#pragma once
#include <iostream>
using namespace std;
class clsEmployee
{
public:
	int ID;
	string Name;
	float Salary;
	clsEmployee(int ID, string Name, float Salary) {
		this->ID = ID;
		this->Name = Name;
		this->Salary = Salary;
	}
	static void Function1(clsEmployee Employee) {
		Employee.Print();
	}
	void Function2() {
		Function1(*this);
	}
	void Print() {
		cout << this->ID << " " << this->Name << " " << this->Salary << endl;
		cout << ID << " " << Name << " " << Salary << endl;
	}
};

