
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
class Derver1 : Base {
    private:
        int c,d;
    public :
        Derver1(){
            c = 10;
            d = 10;
        }
        Derver1(int c,int d){
            this->c = c;
            this->d = d;
        }
};

class Derver2 : Base {
    private:
        int c,d;
    public :
        Derver2(){
            c = 10;
            d = 10;
        }
        Derver2(int c,int d){
            this->c = c;
            this->d = d;
        }
};


int main(){

    return 0;
}
    