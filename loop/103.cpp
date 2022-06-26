#include<iostream>
using namespace std;

int main(){
    system("clear");
    // 10 - 20;
    int x = 10;
    do{
        cout << x << "\t";
        x++;
    }while(x < 21);

    // 10, 20, 30, ... 100
    cout << "\n\n";
    int i = 10;
    do{
        cout << i << '\t';
        i = i + 10;
    }while(i <= 100);


    return 0;
}