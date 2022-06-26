#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    system("clear");
    // declare variable
    int id,qty;
    string name;
    double price;
    double total_price = 0, dicount = 0, amout_topay=0;

    // input data
    cout << "Input product id : "; cin >> id;
    cout << "Input product name : "; cin >> name;
    cout << "Input product qty : "; cin >> qty;
    cout << "Input product price : "; cin >> price;

    total_price = qty * price;

    if(total_price >= 100){
        dicount = 12;
    }else if(total_price >= 90 && total_price < 100){
        dicount = 10;
    }else if(total_price >= 80 && total_price < 90){
        dicount = 8;
    }else if(total_price >= 70 && total_price < 80){
        dicount = 6;
    }else if(total_price >= 60 && total_price < 70){
        dicount = 4;
    }else if(total_price >= 50 && total_price < 60){
        dicount = 2;
    }
    double amount_discount = (total_price * dicount / 100);
    amout_topay = total_price - amount_discount;
    //output
    cout << setprecision(2) << fixed;
    cout << id << "\t";
    cout << name << "\t";
    cout << qty << "\t";
    cout << price << "$\t";
    cout << total_price << "$\t";
    cout << dicount << "%\t";
    cout << "Save( " << amount_discount << "$ )\t";
    cout << amout_topay << "$\t";

    return 0;
}