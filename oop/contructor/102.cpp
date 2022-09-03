#include <iostream>
using namespace std;

class Test{
    // data or propteries member;
    private:
        int a , b , c;
    public:
        Test(){ // default constructor
            a = 10;
            b = 10;
            c = 10;
        }
        Test(int paramA , int paramB, int paramC ){ // parameter contructor
            a = paramA;
            b = paramB;
            c = paramC;
        }
        Test(Test &obj){ // copy contructor
            a = obj.a;
            b = obj.b;
            c = obj.c;
        }
        void displayData(){
            a = 100;
            b = 200;
            c = 300;
            cout << a << "\t" << b << "\t" << c << endl;
        }
        void inputData(){
            cout << "Input a : "; cin >> a;
            cout << "Input b : "; cin >> b;
            cout << "Input c : "; cin >> c;
        }
        void outData(){
            cout << a << "\t" << b << "\t" << c << endl;
        }
};

int main(){
    
    system("clear");
    Test obj1(14,15,16),obj2,obj3(obj2);
    obj1.outData();
    obj2.outData();
    obj3.outData();

    // 4 6 random
    // 4 5 random
    // 4 5 6 
    // 4 5 random
    // 4 5 random
    // 4 5 6




    // obj1.displayData();

    // obj1.inputData();
    // obj1.outData();

    // obj1.inputData();
    // obj1.outData();

    // for(int i = 0 ; i < 4; i++){
    //     cout << "\n======" << i + 1 << " ======" << endl;
    //     obj1.inputData();
    //     obj1.outData();
    // }

    return 0;
}


