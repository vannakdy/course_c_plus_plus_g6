
#include<iostream>
using namespace std;
class Base {
    protected:
        int a;
};
class Deride1 : Base {
    private:
        int c;
};

class Deride2 : Base {
    private:
        int d;
};

class Deride3 : public Deride1, public Deride2 {

};

class Deride4 : public Deride3 {

};


int main(){

    return 0;
}
    