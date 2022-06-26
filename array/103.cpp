#include<iostream>
using namespace std;

int main(){
    system("clear");
    int n = 0, i;
    cout << "Input N name : "; cin >> n;
    string name[n];
    // input n element to array
    for(i = 0 ; i < n ; i++){
        // asign item to array
        cout << "Input name["<< i <<"]="; cin >> name[i];
    }
   
   // output all element in array
    cout << "All elements in array name : ";
    for(i = 0 ; i < n ; i++){
        cout << name[i] << "\t";
    }

    // output all element in array by revers
    cout << "\nAll elements in array name revers : ";
    for(i = n - 1 ; i >= 0 ; i--){
        cout << name[i] << "\t";
    }

    cout << "\n === Use while loop=== : ";
    i = 0;
    while(i < n){
        cout << name[i] << "\t";
        i++;
    }

    
    
    return 0;
}


