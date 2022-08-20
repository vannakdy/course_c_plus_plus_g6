#include<iostream>
using namespace std;

class MyClass{ 
    public:
        int a, b; // properties or data members class
};
class Demo{
    public:
        int x , y , z;
};
int main(){
    system("clear");

    MyClass obj1; // 
    obj1.a = 10; // assign value properties or data members of class
    obj1.b = 20;

    cout << "a = " << obj1.a << endl;
    cout << "b = " << obj1.b << endl;

    Demo obj2;
    obj2.x = 100;
    obj2.y = 200;
    obj2.z = 300;
    cout << "x = " << obj2.x << endl;
    cout << "y = " << obj2.y << endl;
    cout << "z = " << obj2.z << endl;
    
    return 0;
}