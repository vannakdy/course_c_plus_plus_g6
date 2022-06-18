#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    system("clear");
    float avg1 = 19.333333;
    double avg2 = 200000.222222;
    cout << setprecision(1);
    cout << fixed;
    cout << "Avg1 = " << avg1 << endl;
    // cout << setprecision(4);
    // cout << fixed;
    cout << "Avg2 = " << avg2 << endl;
    return 0;
}