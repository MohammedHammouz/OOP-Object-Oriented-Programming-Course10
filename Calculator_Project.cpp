// Calculator_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class clsCalculator {
    private :
        float _Result = 0;
        float _LastNumber = 0;
        float _PreviousResult = 0;
        string _LastOperation = "Clear";
        bool _IsZero(float number) {
            return number == 0.0;
        }
    public:
        void Clear() {
            _Result = 0;
            _LastNumber = 0;
            _PreviousResult = 0;
            _LastOperation = "Clear";
        }

        void AddNumber(float numberAdd) {
            
            _LastNumber = numberAdd;
            _PreviousResult = _Result;
            _LastOperation = "Add";
            _Result += numberAdd;
        }
       
        void SubNumber(float numberSub) {
            _LastNumber = numberSub;
            _PreviousResult = _Result;
            _LastOperation = "Sub";
            _Result -= numberSub;
        }
        
        void MultiplyNumber(float numberMul) {
            _LastNumber = numberMul;
            _PreviousResult = _Result;
            _LastOperation = "Mul";
            _Result *= numberMul;
        }
        
        void DivideNumber(float numberDiv) {
            if (_IsZero(numberDiv)) {
                numberDiv++;
            }
            _LastNumber = numberDiv;
            _PreviousResult = _Result;
            _LastOperation = "Div";
            _Result /= numberDiv;
        }
        void CancelLastOperation() {
            _LastNumber = 0;
            _LastOperation = "CancelOperation";
            _Result = _PreviousResult;
          
        }
        void PrintResult() {
            cout << "Result After: " << _LastOperation << " " << _LastNumber << " " << _Result << endl;
        }
        
        __declspec(property(get = Result, put = AddNumber))float numberAdd;
        __declspec(property(get = Result, put = SubNumber))float numberSub;
        __declspec(property(get = Result, put = MultiplyNumber))float numberMul;
        __declspec(property(get = Result, put = DivideNumber))float numberDiv;
};
int main()
{
    clsCalculator Calculator1;
    Calculator1.Clear();
    Calculator1.numberAdd=20;
    Calculator1.PrintResult();
    Calculator1.numberSub=200;
    Calculator1.PrintResult();
    Calculator1.numberMul=44;
    Calculator1.PrintResult();
    Calculator1.Clear();
    Calculator1.numberSub = 15;
    Calculator1.PrintResult();
    Calculator1.numberDiv = 30;
    Calculator1.PrintResult();
    Calculator1.numberSub = 2;
    Calculator1.PrintResult();
    Calculator1.numberAdd = 200;
    Calculator1.PrintResult();
    Calculator1.numberAdd = 200;
    Calculator1.PrintResult();
    Calculator1.CancelLastOperation();
    Calculator1.PrintResult();
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
