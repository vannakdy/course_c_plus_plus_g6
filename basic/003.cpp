#include<iostream>
using namespace std;

int main(){
    system("clear");
    // variable x, y, id, name  = អថេរ ឬ អញ្ញាត ? ផ្ទុក data in memory
    // data type  ប្រភេទទិន្នន័យ // 
        // - ចំនួនគត់ //(int,long) 0 1 2 .... , -1 -2 -3 ....
        // - ចំនួនគត់ទសភាគ //(float,double) 0.00 1.23 2.45 .... , -1.5 -2.6 -3.6 , 5/7 ....
        // - អក្សរ //(char,string) សំ  សុខា សាលា
        // - កត្ត //(bool) true false 1 0

    // declare variable ការប្រកាសអញ្ញាត 
        // syntax : datatype variable_name;
        // syntax : datatype variable_name = value;
        // ex: 
            // int x; 
            // int z = 100; 
            // float y;
            // string student_name;
            // bool status
    int x = 10; // declare variable and assign it's value
    int y = 200.80; //
    float z = 300.22;
    bool status;
    string student_name = "Sokha";
    
    cout << "=========Test Variable============\n";
    cout << "value x = " << x << endl;
    cout << "value y = " << y << endl;
    cout << "value x + y = " << x+y << endl; // (x+y) = x + y
    cout << "value y + z + 10 = " << y+z+10 << endl; // (x+y) = x + y
    cout << "value z = " << z << endl;
    cout << "Student name = " << student_name << endl;
    cout << "Status = " << status << endl; 
    cout << "===================================" << endl;
    return 0;
}