#include<iostream>
using namespace std;
int main(){
    system("clear");
    int money;
    
    cout << "Input your money : "; cin >> money;

    if(money < 50){
        cout << "I will stay at home" << endl;
    }else if(money >= 50 && money <= 100){
        cout << "I will by some books" << endl;
    }else if(money > 100 && money <= 200){
        cout << "I will to Kompot" << endl;
    }else if(money > 200 && money <= 500){
        cout << "I will buy a phone" << endl;
    }else if(money > 500 && money <= 1000){
        cout << "I will buy a computer" << endl;
    }else{
        cout << "I will buy a moto" << endl;
    }
    
    return 0;
}