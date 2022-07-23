#include<iostream>
#include<iomanip>
using namespace std;
// declare variables
int id[100],status[100] , i , n = 0 , op , op1, intTmp ,  isSearch;
string name[100], email[100], role[100] ,stringTmp;
void menu(){
    cout << "\n===== MENU =====" << endl;
    cout << "1. Input user " << endl;
    cout << "2. Output user " << endl;
    cout << "3. Search user " << endl;
    cout << "4. Update user " << endl;
    cout << "5. Delete user " << endl;
    cout << "6. Sort user " << endl;
    cout << "7. Exit program " << endl;
    cout << "==================== " << endl;
    cout << "Input action optoin : "; cin >> op;
}
void input(){
    cout << "+++++++ Input User +++++++" << endl;
    cout << "Input id : "; cin >> id[n];
    cout << "Input name : "; cin >> name[n];
    cout << "Input email : "; cin >> email[n];
    cout << "Input role : "; cin >> role[n];
    cout << "Input status : "; cin >> status[n];
    // n = n + 1;
    n++;
}
void printHeader(){
    cout << setw(10) << "ID";
    cout << setw(15) << "Name" ;
    cout << setw(20) << "Email" ;
    cout << setw(15) << "Role"  ;
    cout << setw(8)  << "Status" << endl;
}
void printData(int index){
    cout << setw(10) << id[index];
    cout << setw(15) << name[index];
    cout << setw(20) << email[index];
    cout << setw(15) << role[index];
    cout << setw(8)  << (status[index] == 1 ? "Actived" : "Disabled") <<  endl;
}
void seachSearchByid(){
    cout << "Input user id to search : " ; cin >> intTmp;
    isSearch = 0;
    for(i = 0 ; i < n ; i++){
        if(intTmp == id[i]){
            printHeader();
            printData(i);
            isSearch = 1;
            break;
        }
    }
    if(isSearch == 0){
        cout << "Search not found" << endl;
    }
}

void seachSearchByName(){
    cout << "Input user name to search : " ; cin >> stringTmp;
    isSearch = 0;
    for(i = 0 ; i < n ; i++){
        if(stringTmp == name[i]){
            printHeader();
            printData(i);
            isSearch = 1;
            break;
        }
    }
    if(isSearch == 0){
        cout << "Search not found" << endl;
    }
}

void seachSearchByStatus(){
    cout << "Input user status (1/0) to search : " ; cin >> intTmp;
    isSearch = 0;
    printHeader();
    for(i = 0 ; i < n ; i++){
        if(intTmp == status[i]){
            printData(i);
            isSearch = 1;
        }
    }
    if(isSearch == 0){
        cout << "Search not found" << endl;
    }
}

void seachSearchByRole(){
    cout << "Input user role to search : " ; cin >> stringTmp;
    isSearch = 0;
    printHeader();
    for(i = 0 ; i < n ; i++){
        if(stringTmp == role[i]){
            printData(i);
            isSearch = 1;
        }
    }
    if(isSearch == 0){
        cout << "Search not found" << endl;
    }
}



int main(){
    system("clear");
    do{
        menu();
        switch(op){
            case 1 : 
                input(); break;
            case 2 :
                printHeader();
                for(i = 0; i < n ; i++){
                    printData(i);
                };
                break;
            case 3 : 
                do{
                  cout << "=== Menu Searh ====" << endl;
                  cout << "1. Search by id " << endl;      
                  cout << "2. Search by name " << endl;      
                  cout << "3. Search by status " << endl;       
                  cout << "4. Search by role " << endl;       
                  cout << "5. Back" << endl; 
                  cout << "Input opton : " ; cin >> op1;
                  switch(op1){
                    case 1: seachSearchByid(); break;
                    case 2: seachSearchByName(); break;
                    case 3: seachSearchByStatus(); break;
                    case 4: seachSearchByRole(); break;
                  }      
                }while(op1 != 5);
                break;
            case 7 : exit(0);
        }
    }while(op != 7);
    return 0;
}


// user 
    // id
    // name 
    // email
    // role 
    // status

    // optoin 
    //     1. input 
    //     2. output 
    //     3. search 
    //     4. update
    //     5. delete 
    //     6. sort 
    //     7. eixt