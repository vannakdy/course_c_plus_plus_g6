#include<iostream>
using namespace std;

int main(){
    system("clear");

    for(int i = 1 ; i <= 10 ; i++){
        cout << i << ". Hello world" << endl;
    }

    for(int i = 1 ; i <= 10 ; i ++){
        cout << i << endl;
    }

    for(int i = 10 ; i <= 100 ; i++){ // i = i + 1
        cout << i;
    }

    for(int i = 10 ; i >= 1 ; i--){ // i = i - 1
        cout << i << endl;
    }
    // 2 4 6 .... 10
    for(int i = 2 ; i <= 10 ; i = i + 2 ){
        cout << i << "\t";
    }





    return 0;
}