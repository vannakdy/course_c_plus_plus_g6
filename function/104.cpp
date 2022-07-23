#include<iostream>
using namespace std;
void sum(){
    int x,y;
    cout << "Input x :"; cin >> x;
    cout << "Input y :"; cin >> y;
    int sum = x + y;
    cout << "Value x = " << x << endl;
    cout << "Value y = " << y << endl;
    cout << "Sum (x + y) = " << sum << endl;
}
void sum1(int x, int y){
    cout << "Value x = " << x << endl;
    cout << "Value y = " << y << endl;
    cout << "Sum (x + y) = " << (x+y) << endl;
}
int main(){
    system("clear");
    sum();
    cout << "======= Funtion sum1 ====" << endl;
    int a,b;
    cout << "Input a : "; cin >> a;
    cout << "Input b : "; cin >> b;
    sum1(a,b);
    return 0;
}