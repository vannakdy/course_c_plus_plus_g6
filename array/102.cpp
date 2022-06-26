#include<iostream>
using namespace std;

int main(){
    system("clear");
    string name[5];
    int i;
    name[0] = "Sok";
    name[1] = "Jon";
    name[2] = "Messi";
    name[3] = "Dara";
    name[4] = "Som";

    cout << name[2] << "\t " << name[3] << endl;
    // using loop display all elements in array
    cout << "==== Using for loop =====" << endl;
    for( i = 0; i < 5 ; i++){
        cout << name[i] << "\t";
    }
    cout << "\n==== Using while loop ===" << endl;
    i = 0;
    while (i < 5)
    {
        cout << name[i] << "\t";
        i++;
    }

    cout << "\n==== Using do while loop ===" << endl;
    i = 0;
    do {
        cout << name[i] << "\t";
        i++;
    }while(i < 5);

    cout << "\n=== Display reverse array ====" << endl;
    for( i = 4; i >= 0 ; i--){
        cout << name[i] << "\t";
    }
    
    return 0;
}


