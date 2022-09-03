
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
class Derive : public Base{
    private:
        int c,d;
    public :
        Derive(){
            c = 10;
            d = 10;
        }
        Derive(int c,int d){
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
            cout << "Input value a: "; cin >> a;
            cout << "Input value b: "; cin >> b;
            cout << "Input value c: "; cin >> c;
            cout << "Input value d: "; cin >> d;
        }
        void output(){
            // Base::output();
            cout << a << "\t";
            cout << b << "\t";
            cout << c << "\t";
            cout << d << "\n";
        }
};

class Darive1 : public Derive{
    
};


int main(){
    system("clear");


    // Base objB;
    // Derive objD[200];
    // int n = 3;
    // for(int i = 0 ; i < n ; i++){
    //     objD[i].input();
    // }
    // for(int i = 0 ; i < n ; i++){
    //     objD[i].output();
    // }

    Derive objd;
    objd.output();
    
    objd.setA(4);
    objd.setB(5);
    objd.setC(6);
    objd.setD(7);
    objd.output();

    objd.setA(41);
    objd.setB(51);
    objd.setC(61);
    objd.setD(71);
    objd.output();

    Darive1 objd1;
    objd1.input();
    objd1.output();

    return 0;
}

// assign 
//     constructor 
//     encapsulation
//         -set
//     input
// get 
//     encapsulation
//         -get
//     output
    