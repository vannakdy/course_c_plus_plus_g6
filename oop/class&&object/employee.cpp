#include<iostream>
#include<iomanip>
using namespace std;
class Employee{
    private:
        int id;
        string name,gender,position;
        double salary;
    public:
        Employee(){ // constructor
            id = 0;
            name = "Unknow";
            gender = "Unknow";
            position = "Unknow";
            salary = 0;
        }
        int getId(){
            return id;
        }
        string getName(){
            return name;
        }
        string getGender(){
            return gender;
        }
        string getPosition(){
            return position;
        }
        double getSalary(){
            return salary;
        }
        void setId(int id){
            this->id = id;
        }
        void setName(string name){
            this->name = name;
        }
        void setGender(string gender){
            this->gender = gender;
        }
        void setPosition(string position){
            this->position = position;
        }
        void setSalary(double salary){
            this->salary = salary;
        }
        void input(){
            cout << "Input Employee id          : "; cin >> id;
            cout << "Input Employee name        : "; cin.clear(); cin.ignore(); getline(cin,name); // cin >> name
            cout << "Input Employee gender      : "; cin >> gender;
            cout << "Input Employee position    : "; cin >> position;
            cout << "Input Employee salary      : "; cin >> salary;
        }
        void output(){
            cout << setw(10) << id;
            cout << setw(15) << name;
            cout << setw(10) << gender;
            cout << setw(15) << position;
            cout << setw(10) << salary << endl;
        }
        void printHeader(){
            cout << setw(10) << "ID";
            cout << setw(15) << "NAME";
            cout << setw(10) << "GENDER";
            cout << setw(15) << "POSITION";
            cout << setw(10) << "SALARY" << endl;
        }
        void getList(Employee obj[], int n){
            printHeader(); // objE[0].printHeader() // objE->printHeader()
            for(int i = 0 ; i < n ; i++){
                obj[i].output();
            }
        }

        void searchById(Employee obj[], int n){
            int idSearch , isFound;
            cout << "Input Employee id to search : "; cin >> idSearch;
                isFound = 0;
                for(int i = 0 ; i < n ; i++){
                    if(idSearch == obj[i].getId()){
                        printHeader();
                        obj[i].output();
                        isFound = 1;
                        break;
                    }
                }
                if(isFound == 0){
                    cout << "Message >>> (Id " << idSearch << " not found in list!)" << endl;
                }
        }

        void searchByName(Employee obj[], int n){
            int  isFound;
            string textSearch;
            cout << "Input Employee name to search : "; cin >> textSearch;
                isFound = 0;
                for(int i = 0 ; i < n ; i++){
                    if(textSearch == obj[i].getName()){
                        printHeader();
                        obj[i].output();
                        isFound = 1;
                        break;
                    }
                }
                if(isFound == 0){
                    cout << "Message >>> (Name " << textSearch << " not found in list!)" << endl;
                }
        }

        void searchByPosition(Employee obj[], int n){
            int  isFound;
            string textSearch;
            cout << "Input Employee position to search : "; cin >> textSearch;
                isFound = 0;
                printHeader();
                for(int i = 0 ; i < n ; i++){
                    if(textSearch == obj[i].getPosition()){
                        obj[i].output();
                        isFound = 1;
                    }
                }
                if(isFound == 0){
                    cout << "Message >>> (Position " << textSearch << " not found in list!)" << endl;
                }
        }

};

int main(){
    system("clear");

    Employee objE[1000] ,objETmp;
    int option,optionLevel1 , n = 0 , i, idSearch , isFound;
    do{
        cout << "\n1. Input Employee " << endl;
        cout << "2. List All Employee " << endl;
        cout << "3. Search Employee " << endl;
        cout << "4. Exit Program" << endl;
        cout << "Input Choice (1-4) : "; cin >> option;
        switch(option){
            case 1 :
                objE[n].input();
                n++;
            break;
            case 2 : 
                objE->getList(objE,n);
            break;
            case 3 :
                do{
                    cout << "==== Search Employee ===" << endl;
                    cout << "1. Search by Id " << endl;
                    cout << "2. Search by Name " << endl;
                    cout << "3. Search by Position" << endl;
                    cout << "4. Back" << endl;
                    cout << "Input Choice (1-4) : "; cin >> optionLevel1;
                    switch(optionLevel1){
                        case 1 : objE->searchById(objE,n); break;
                        case 2 : objE->searchByName(objE,n); break;
                        case 3 : objE->searchByPosition(objE,n); break;
                    }
                }while(optionLevel1 != 4);
                
            break;
            case 4 : exit(0); break;
        }
    }while (option != 4);
    


    return 0;
}
