#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    system("clear");
    // product info
    int n , i;
    int id[100] , qty[100];
    string name[100], categroy[100];
    double price[100], total_price[100] , total = 0;

    cout << "Input N product : "; cin >> n;

    for(i = 0 ; i < n ; i++){
        cout << "\nInput product id : "; cin >> id[i];
        cout << "Input product name : "; cin >> name[i];
        cout << "Input product category : "; cin >> categroy[i];
        cout << "Input product qty : "; cin >> qty[i];
        cout << "Input product price : "; cin >> price[i];
        total_price[i] = qty[i] * price[i];
        total = total + total_price[i];
    }

    cout << "======= List all prodcut =======" << endl;

    cout << setprecision(2) << fixed << endl;
    for(i = 0 ; i  < n ; i++){
        cout << id[i] << "\t";
        cout << name[i] << "\t";
        cout << categroy[i] << "\t";
        cout << qty[i] << "\t";
        cout << price[i] << "$\t"; 
        cout << total_price[i] << "$\t"<< endl;
    }
    cout << "\n____________________________________\n";
    cout << "Product " << n << " Iitem and total  " << total << "$" << endl;

    return 0;
}



