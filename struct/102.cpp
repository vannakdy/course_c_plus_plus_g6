
#include<iostream>
using namespace std;
struct User
{
    int id;
    string name;
    string gender;
    string position;
};

User user[1000], userTmp;
int n , intTmp,isSearch,op;

void listUserAll(){
    for(int i = 0 ; i < n ; i++){
        cout << user[i].id << "\t";
        cout << user[i].name << "\t";
        cout << user[i].gender << "\t";
        cout << user[i].position << "\n";
    }
}

void listUserOne(int index){
    cout << user[index].id << "\t";
    cout << user[index].name << "\t";
    cout << user[index].gender << "\t";
    cout << user[index].position << "\n";
}

int main(){
    system("clear");
    // input
    cout << "============= Input ==========" << endl;
    cout << "Input n user : "; cin >> n;
    for(int i = 0 ; i < n ; i++){
        cout << "Input user id : "; cin >> user[i].id;
        cout << "Input user name : "; cin >> user[i].name;
        cout << "Input user gender : "; cin >> user[i].gender;
        cout << "Input user position : "; cin >> user[i].position;
    }

    // output
    cout << "============= Output ==========" << endl;
    listUserAll();

    // search
    cout << "============= Search ==========" << endl; 
    cout << "Input user id to search : "; cin >> intTmp;
    isSearch = 0;
    for(int i = 0 ; i < n ; i++){
        if(intTmp == user[i].id){
            cout << "<<<<< Here is user id " << intTmp << " >>>>>>>" << endl;
            listUserOne(i);
            isSearch = 1;
            break;
        }
    }
    if(isSearch == 0){
        cout << "<<<<< user id " << intTmp << " not found in list >>>>>>" << endl;
    }

    // delete
    cout << "============= Delete ==========" << endl; 
    cout << "Input user id to delete : "; cin >> intTmp;
    isSearch = 0;
    for(int i = 0 ; i < n ; i++){
        if(intTmp == user[i].id){
            // procee delete user from struct
            for(int j = i; j < n ; j++){
                user[j] = user[j+1];
            }
            n--;
            cout << "<<<<< Delete completed >>>>>>>" << endl;
            isSearch = 1; break;
        }
    }
    if(isSearch == 0){
        cout << "<<<<< user id " << intTmp << " not found in list >>>>>>" << endl;
    }
    
    cout << " ====== After delete ======" << endl;
    listUserAll();
    
    return 0;
    // upate
    cout << "============= Update ==========" << endl; 
    cout << "Input user id to update : "; cin >> intTmp;
    isSearch = 0;
    for(int i = 0 ; i < n ; i++){
        if(intTmp == user[i].id){
            listUserOne(i);
            cout << "\n+++ Which is you want update:+++++\n";
            cout << "1. name" << endl;
            cout << "2. gender" << endl;
            cout << "3. position" << endl;
            cout << "Input option (1-3): "; cin >> op;
            switch(op){
                case 1: 
                    cout << "Upate name " << user[i].name << " to : "; cin >> user[i].name;
                    break;
                case 2:
                    cout << "Upate gender " << user[i].gender << " to : "; cin >> user[i].gender;
                    break;
                case 3:
                    cout << "Upate position " << user[i].position << " to : "; cin >> user[i].position;
                    break;
                default:
                    cout << "Invalid option. User update not complete. Try agina!!" << endl;
            }
            isSearch = 1;
            break;
        }
    }
    if(isSearch == 0){
        cout << "<<<<< user id " << intTmp << " not found in list >>>>>>" << endl;
    }

    cout << "=========== Ofter update ===========" << endl;
    listUserAll();


    cout << "=========== After Sort ===========" << endl;
    for(int i ; i < n ; i ++){
        for(int j = i + 1; j < n; j++){
            if(user[i].name > user[j].name ){
                userTmp = user[i];
                user[i] = user[j];
                user[j] = userTmp;
            }
        }
    }
    listUserAll();



    return 0;
}





// sale product 
//      - product 
//      - customer
//      - order 
//      - user 
