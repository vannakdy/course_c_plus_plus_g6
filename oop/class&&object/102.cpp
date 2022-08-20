#include<iostream>
using namespace std;
class DemoClass{
    private:
        int value1, value2; // propterties or data members of class "DemoClass"
    public:
        // block method or function members of class
        void input(){
            cout << "Input value1 :"; cin >> value1;
            cout << "Input value2 :"; cin >> value2;
        }
        void output(){
            cout << "value1= " << value1 << endl;
            cout << "value2= " << value2 << endl;
        } 
};
int main(){
    system("clear");
    DemoClass objDemo1;
    objDemo1.input();
    objDemo1.output();
    return 0;
}