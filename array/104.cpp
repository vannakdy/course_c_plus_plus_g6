#include<iostream>
using namespace std;

int main(){
    system("clear");
    // person information
    int id[200], n, i;
    string name[200], gender[200], tel[200];

    cout << "Input N person : "; cin >> n;
    cout << "====Input " << n << " Person Information====="<<endl;
    for(i = 0 ; i < n ; i++){
        cout << "Input person id : "; cin >> id[i];
        cout << "Input person name : "; cin >> name[i];
        cout << "Input person gender :"; cin >> gender[i];
        cout << "Input person tel :"; cin >> tel[i];
    }
    cout << "===== List person =====" << endl;
    for(i = 0 ; i < n ; i++){
        cout << id[i] << "\t" << name[i] << "\t" << gender[i] << "\t" << tel[i] << endl;
    }
    
    return 0;
}



// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999
// 101 Sok Male 099999999


