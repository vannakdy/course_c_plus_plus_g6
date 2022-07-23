#include<iostream>
using namespace std;

int main(){
    system("clear");
    int choice , n = 0 , i;
    int id_to_search, is_search;
    int id[100];
    string name[100], gender[100] ;
    do{
        cout << "\n1. Input Person" << endl;
        cout << "2. Output Person" << endl;
        cout << "3. Search Person" << endl;
        cout << "4. Exit" << endl;
        cout << "Input choice (1-4) : "; cin >> choice;
        switch(choice){
            case 1: 
                cout << "======== Input Person info ======" << endl;
                cout << "\nInput person id : "; cin >> id[n];
                cout << "Input person name : "; cin >> name[n];
                cout << "Input person gender :" ; cin >> gender[n];
                n++;
                break;
            case 2:
                cout << "======== Output Person info ======" << endl;
                for(i = 0 ; i < n ; i++ ){
                    cout << id[i] << "\t" << name[i] << "\t" << gender[i] << endl;
                }
                break;
            case 3:
                cout << "========= Search Person by id info =======" << endl;
                cout << "Input person id to search : "; cin >> id_to_search;
                is_search = 0;
                for(i = 0; i < n ; i++){
                    if(id_to_search == id[i]){
                        cout << "+++++++ Search Found ++++++++" << endl;
                        cout << id[i] << "\t" << name[i] << "\t" << gender[i] << endl;
                        is_search  = 1;
                        break;
                    }
                    // else{
                    //     cout << "Search not found!" << endl;
                    // }
                }
                if(is_search == 0){
                    cout << "Search not found!" << endl;
                }
                break;
            case 4:
                exit(0);
            default :
                cout << "Incorrect choice " << endl;
        }
    }while(choice != 4);
    
    return 0;
}