
#include<iostream>
using namespace std;
class Base {
    protected:
        int a,b;
    public:
        Base(){
            a = 100;
            b = 100;
        }
        Base(int a,int b){
            this->a = a;
            this->b = b;
        }
        int getA(){
            return a;
        }
        int getB(){
            return b;
        }
        int setA(int a){
            this->a = a;
        }
        int setB(int b){
            this->b = b;
        }
        void input(){
            cout << "Input value a : "; cin >> a;
            cout << "Input value b : "; cin >> b;
        }
        void output(){
            cout << "Value a : " << a << endl;
            cout << "Value b : " << b << endl;
        }
};
class Base1 {
    private:
        int c,d;
    public :
        Base1(){
            c = 10;
            d = 10;
        }
        Base1(int c,int d){
            this->c = c;
            this->d = d;
        }
        int getC(){
            return c;
        }
        int getD(){
            return d;
        }
        int setC(int c){
            this->c = c;
        }
        int setD(int d){
            this->d = d;
        }
        void input(){
            // Base::input();
            cout << "Input value c: "; cin >> c;
            cout << "Input value d: "; cin >> d;
        }
        void output(){
            // Base::output();
            cout << c << "\t";
            cout << d << "\n";
        }
};

class Last : public Base, public Base1 { //// multiple inheritance

};


int main(){
    system("clear");
    Last objl;
    objl.getA();
    objl.getC();

    return 0;
}
    