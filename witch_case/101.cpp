#include<iostream>
using namespace std;
int main(){
    system("clear");
    int operation;
    int id[100], n = 0, i , idSearch , isSearch , intTmp;
    string name[100], gender[100] , nameSearch ,textYesNo , stringTmp;
    double salary[100] , salaryTmp;
    
    do{
        cout << "\n1. Input staff" << endl;
        cout << "2. Output staff" << endl;
        cout << "3. Search staff by id" << endl;
        cout << "4. Search staff by name" << endl;
        cout << "5. Update staff " << endl;
        cout << "6. Delete staff " << endl;
        cout << "7. Sort staff salary DESC" << endl;
        cout << "8. Exit" << endl;
        cout << "Input your choice: "; cin >> operation; 
        switch(operation){
            case  1: 
                cout << "======= Input Staff Information =======" << endl;
                cout << "Input staff id : "; cin >> id[n];
                cout << "Input staff name : "; cin >> name[n];
                cout << "Input staff gender : "; cin >> gender[n];
                cout << "Input staff salary : "; cin >> salary[n];
                n++;
            break;
            case  2: 
                cout << "======= List Staff ========" << endl;
                for(i = 0 ; i < n ; i++){
                    cout << id[i] << "\t";
                    cout << name[i] << "\t";
                    cout << gender[i] << "\t";
                    cout << salary[i] << endl;
                }
            break;
            case  3: 
                cout << "====== Search Staff by id ======" << endl;
                cout << "Please input staff id to search : "; cin >> idSearch;
                isSearch = 0;
                for(i = 0 ; i < n ; i++){
                    if(idSearch == id[i]){
                        cout << "<<<<<<< Search Found >>>>>>>" << endl;
                        cout << id[i] << "\t";
                        cout << name[i] << "\t";
                        cout << gender[i] << "\t";
                        cout << salary[i] << endl;
                        isSearch = 1;
                        break;
                    }
                }
                if(isSearch == 0){
                    cout << idSearch << " not found in list. Please try agian " << endl;
                }
            break;
            case 4 : 
                cout << "====== Search Staff by name ======" << endl;
                cout << "Please input staff name to search : "; cin >> nameSearch;
                isSearch = 0;
                for(i = 0 ; i < n ; i++){
                    if(nameSearch == name[i]){
                        cout << "<<<<<<< Search Found >>>>>>>" << endl;
                        cout << id[i] << "\t";
                        cout << name[i] << "\t";
                        cout << gender[i] << "\t";
                        cout << salary[i] << endl;
                        isSearch = 1;
                        break;
                    }
                }
                if(isSearch == 0){
                    cout << idSearch << " not found in list. Please try agian " << endl;
                }
            break;
            case 5 :
                cout << "========= Update staff information =========" << endl;
                cout << "Input staff id to update : "; cin >> idSearch;
                isSearch = 0;
                for(i = 0 ; i < n ; i++) {
                    if(idSearch == id[i]){
                        // show staff info that want update
                        cout << "<<<<<<< Search Found >>>>>>>" << endl;
                        cout << id[i] << "\t";
                        cout << name[i] << "\t";
                        cout << gender[i] << "\t";
                        cout << salary[i] << endl << endl;
                        // update new data
                        cout << "Input new name :"; cin >> name[i];
                        cout << "Input new gender :"; cin >> gender[i];
                        cout << "Input new salary :"; cin >> salary[i];
                        cout << "<<<<<<<<< Update information success >>>>>>>>>>" << endl;
                        isSearch = 1;
                        break;
                    }
                }
                if(isSearch == 0){
                    cout << "Id to update not found in list. Please try agian!" << endl;
                }
            break;
            case 6:
                cout << "======= Delete staff by id ==============" << endl;
                cout << "Please input staff id to delete : "; cin >> idSearch;
                isSearch = 0;
                for(i = 0 ; i < n ; i++){
                    if(idSearch == id[i]){
                        isSearch = 1;
                        // show staff info that want update
                        cout << "<<<<<<< Search Found >>>>>>>" << endl;
                        cout << id[i] << "\t";
                        cout << name[i] << "\t";
                        cout << gender[i] << "\t";
                        cout << salary[i] << endl << endl;

                        cout << "Are you sure to delete this staff ? (yes/no): "; cin >> textYesNo;
                        if(textYesNo == "yes"){
                            // process code delete
                            //(0) [101,102,103,104,105 .....1000.1000 ] (1000) 
                            // i = 2
                            for(int j = i ; j < n ; j++){
                                id[j] = id[j+1];
                                name[j] = name[j+1];
                                gender[j] = gender[j+1];
                                salary[j] = salary[j+1];
                            }
                            n--; // remove one record
                            cout << "<<<<<Delete Successfully! >>>>>>>";
                        }
                        break;
                    }
                }
                if(isSearch == 0){
                    cout << ".....Id not found in list. Could not remove. Please try again ......" << endl;
                }
            break;
            case 7:
                for(i = 0 ; i < n ;i++){
                    for(int j = i + 1 ; j < n ; j++){
                        if(salary[i] < salary[j]){

                            intTmp = id[i];
                            id[i] = id[j];
                            id[j] = intTmp;

                            stringTmp = name[i];
                            name[i] = name[j];
                            name[j] = stringTmp;

                            stringTmp = gender[i];
                            gender[i] = gender[j];
                            gender[j] = stringTmp;

                            salaryTmp = salary[i];
                            salary[i] = salary[j];
                            salary[j] = salaryTmp;
                        }
                    }
                }
                cout << ">>>>>>> Sort DESC Success <<<<<<<" << endl;
                break;
            case 8: exit(0); break;

        }
    }while(operation != 8);
    return 0;
}