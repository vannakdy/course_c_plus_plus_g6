#include<iostream>
using namespace std;

int main(){
    system("clear");
    // int arr_name[size_off_array];
    int x[5]; // declare array x that size 10
    string course[6];

    x[0] = 10;
    x[1] = 20;
    x[2] = 30;
    x[3] = 200; // asign value to array x at index 3
    x[4] = 400;

    course[0] = "C";
    course[1] = "C++";
    course[2] = "Java";
    course[3] = "C#";
    course[4] = "PHP";
    course[5] = "Python";

    // cout << "x[3] = " << x[3] << endl; // cout << x[3] // get element of array at index3
    // cout << "x[2] = " << x[2] << endl; 

    // cout << "course[1] = " << course[1] << endl;
    // cout << "course[4] = " << course[4] << endl;

    cout << "Array x: ";
    for(int i = 0 ; i < 5 ; i++){
        cout << x[i] << "\t";
    }

    cout << "\nArray course : ";
    for(int i = 0 ; i < 6 ; i++){
        cout << course[i] << "\t";
    }

    return 0;
}


