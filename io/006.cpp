#include<iostream>
#include<iomanip> // include function setprecision / fixed

using namespace std;

int main(){

    system("clear");
    int id, qty;
    string name;
    double price, total_price, total_amount;

    
    cout << "Input Product Id : "; cin >> id;
    // cout << "Input Product Name : "; cin >> name;
    cout << "Input Product Name : "; cin.ignore(); getline(cin,name);
    cout << "Input Product Qty : "; cin >> qty;
    cout << "Input Product Price : "; cin >> price;

    total_price = qty * price;

    // + - * / %
    // > < >= <= == !=
    // && ||

    cout << "======= Product Information =====" << endl;
    cout << "Id : " << id << endl;
    cout << "Name : " << name << endl;
    cout << "Qty : " << qty << endl;
    cout << "Price : " << price << endl;
    cout << setprecision(2); cout << fixed; // format .2
    cout << "Total Price : " << total_price << "$" << endl;

    cout << "____________ Product information style row ___________" << endl;
    cout << id << "\t" ;
    cout << name << "\t" ;
    cout << qty << "\t" ;
    cout << price << "\t" ;
    cout << total_price << "$" << "\n" ; 


    return 0;
}