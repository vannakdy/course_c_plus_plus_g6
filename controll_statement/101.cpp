#include<iostream>
using namespace std;
int main(){
    system("clear");
    int average;
    
    cout << "Input your average : "; cin >> average;
    if(average >= 50){
        cout << "You pass exam " << endl;
        cout << "So. You can continue to university" << endl;
        // ...
    }else{
        cout << "You fail exam!";
        cout << "Om. You learn agin";
        // ...
    }
    return 0;
}