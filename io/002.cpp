#include<iostream>
using namespace std;
int main(){
    system("clear");
    // Person // id name gender age
    int id;
    string name, gender;
    int age;
    cout << "Input person id : "; cin >> id;
    cout << "Input person name : "; cin >> name;
    cout << "Input person gender : "; cin >> gender;
    cout << "Input person age : "; cin >> age;

    cout << "========= Person information ========= " << endl;
    cout << "Id : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Gender : " << gender << endl;
    cout << "Age : " << age << endl;
    return 0;
}
 