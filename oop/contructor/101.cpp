
#include<iostream>
using namespace std;
class Person{
    private:
        int id;
        string name, gender, dob;
    public:
        // constructor
        Person(){ // we call default constructor or constructor no parameter
            this->id = 0;
            this->name = "NULL";
            this->gender = "Male";
            this->dob = "00/00/0000";
        }

        Person(int id, string name, string gender, string dob ){ // we call default constructor or constructor no parameter
            this->id = id;
            this->name = name;
            this->gender = gender;
            this->dob = dob;
        }

        Person(Person &obj){
            this->id = obj.id;
            this->name = obj.name;
            this->gender = obj.gender;
            this->dob = obj.dob;
        }
        
        void input(){
            cout << "Input person id : "; cin >> id;
            cout << "Input person name : "; cin >> name;
            cout << "Input person gender : "; cin >> gender;
            cout << "Input person dob : "; cin >> dob;
        }

        void output(){
            cout << id << "\t" << name << "\t" << gender << "\t" << dob << endl;
        }
        void printHeader(){
            cout << "ID\tName\tGender\tDOB" << endl;
        }
};

int main(){
    system("clear");
    int x = 10;
    float y = 200;
    Person objP;
    
    Person objPerson1; // will call default constructor
    cout << "===== Person1 ======" << endl;
    objPerson1.output();

    cout << "===== Person2 ======" << endl;
    Person objPerson2(102,"Jon","Male","12/01/1888");
    objPerson2.output();

    cout << "===== Person3 ======" << endl;
    Person objPerson3(objPerson1);
    objPerson3.output();

    Person objPerson4;
    objPerson4.input();
    cout << "======= Person4 =====" << endl;
    objPerson4.output();
    return 0;
}