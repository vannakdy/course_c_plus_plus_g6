
#include<iostream>
#include<iomanip>
using namespace std;
class Category{
    private:
        int id;
        string name;
        string status;
        string create_at;
    public:
        Category(){
            id = 0;
            name = "";
            status = "Disabled";
        }

        int getId(){
            return id;
        }

        string getName(){
            return name;
        }

        string getStatus(){
            return status;
        }

        void setId(int id){
            this->id = id;
        }

        void setName(string name){
            this->name = name;
        }

        void setStatus(string status){
            this->status = status;
        }

        void input(){
            cout << "Input category id : "; cin >> id;
            cout << "Input category name : "; cin >> name;
            cout << "Input category status : "; cin >> status;
        }

        void output(){
            cout << setw(10) << id;
            cout << setw(10) << name;
            cout << setw(10) << status << endl;
        }

};

int main(){
    system("clear");
    Category objCat[100],objCat1;

    objCat1.setId(101);
    objCat1.setName("MacBook");
    objCat1.setStatus("Actived");

    cout << "Id : " << objCat1.getId() << endl;
    cout << "Name : " << objCat1.getName() << endl;
    cout << "Status : " << objCat1.getStatus() << endl;

    // int n;
    // cout << "Input n category : "; cin >> n;
    // for(int i = 0 ; i < n ; i++){
    //     objCat[i].input();
    // }
    // cout << "====== List Category ======" << endl;
    // for(int i = 0 ; i < n ; i++){
    //     objCat[i].output();
    // } 
    // cout << "====== List After Sort Category ======" << endl; 


    return 0;
}