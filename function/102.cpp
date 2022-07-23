#include<iostream>
using namespace std;
int getTotalScore(){
    // return 1000; // eror
    return 1000; 
}
int main(){
    system("clear");
    // getTotalScore(); // call = 1000
    // cout << getTotalScore() << endl;
    int total = getTotalScore();
    // string total = getTotalScore(); // case error : function is return int type 
    cout << total << endl;
    return 0;
}