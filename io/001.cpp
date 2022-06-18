#include<iostream>
using namespace std;

int main(){
    system("clear");
    //declare variable
    int a  , b;
    // int c prgramming printf and scanf
    // int c++ prgramming cout and cin
    // input dat from keyboard
    cout << "Input value a : "; cin >> a; // cin >> a read data from keyboard assign to a variable
    cout << "Input value b : "; cin >> b;
    // output data
    cout << "========== Display ===========" << endl;
    cout << "Value a = " << a << endl;
    cout << "Value b = " << b << endl;
    cout << "Value a + b = " << (a + b) << endl;
    cout << "Value a - b = " << (a - b) << endl;
    cout << "Value a * b = " << (a * b) << endl;
    cout << "Value a / b = " << (a / b) << endl;
    cout << "Value a % b = " << (a % b) << endl;
    cout << "Value a + b + 1000 = " << (a + b + 1000) << endl;

    return 0;
}