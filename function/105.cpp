#include<iostream>
using namespace std;

int sum1(int x, int y){
    return x + y;
}
int mul1(int x , int y){
    return x * y;
}
int sub1(int x , int y){
    return x - y;
}
double dev1(int x , int y){
    return x / y;
}
int reminder(int x , int y){
    return x % y;
}
int main(){
    system("clear");
    cout << "======= Funtion sum1 ====" << endl;
    int a = 10 ,b = 10;
    cout << "sum = " << sum1(a,b) << endl;
    cout << "sub = " << sub1(a,b) << endl;
    cout << "mul = " << mul1(a,b) << endl;
    cout << "dev = " << dev1(a,b) << endl;
    cout << "get reminder  = " << reminder(a,b);
    return 0;
}