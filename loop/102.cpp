#include<iostream>
using namespace std;

int main(){
    system("clear");
    int i = 8;
    while (i <= 20)
    {
        cout << i << "\t";
        i++;
    }

    // 90 => 55
    cout << "\n";
    i = 90;
    while (i >= 55)
    {
        cout << i << "\t";
        i--;
    }

    cout << "\n\n========While=======\n";
    i = 1;
    while (i < 1) // 1 < 1
    {
        cout << i  << "\t";
        i++;
    }

    i = 1;
    do{
        cout << "\n do while \n";
        cout << i  << "\t";
        i++;
    }while(i < 1); // 1 > 1
    return 0;
}