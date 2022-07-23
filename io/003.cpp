
#include<iostream>
using namespace std;

int main(){
    system("clear");
    int id;
    string name , gender , position;
    double salary;
    cout << "Input staff id : "; cin >> id;
    cout << "Input staff name : "; cin >> name;
    cout << "Input staff gender : " ; cin >> gender;
    cout << "Input staff position : "; cin >> position;
    cout << "Input staff salary : "; cin >> salary;

    cout << "======= Display1 =========" << endl;
    cout << "Id = " << id << endl;
    cout << "Name = " << name << endl;
    cout << "Gender = " << gender << endl;
    cout << "Position = " << position << endl;
    cout << "Salary = " << salary << endl;

    cout << "======= Display2 =========" << endl;
    cout << "ID\tName\tGender\tPosition\tSalary" << endl;
    cout << id << "\t" << name << "\t" << gender << "\t" << position << "\t" << salary << endl;
    return 0;
}