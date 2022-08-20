
#include<iostream>
using namespace std;
class Person{
    private:
        int id;
        string name, gender, dob;
    public:
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
    Person objP[1000] ,objTmp; // array object;

    int n;
    cout << "Input n person: "; cin >> n;
    cout << "\n======== INPUT PERSON =======" << endl;
    for(int i = 0 ; i < n ; i++){
       objP[i].input(); 
    }
    
    objP[0].printHeader();
    cout << "\n======== OUTPUT PERSON =======" << endl;
     for(int i = 0 ; i < n ; i++){
       objP[i].output(); 
    }

    // Person objPerson1,objPerson2;
    // cout << "===== Person1 ======" << endl;
    // objPerson1.input();
    // objPerson1.output();
    // cout << "===== Person2 ======" << endl;
    // objPerson2.input();
    // objPerson2.output();

    return 0;
}