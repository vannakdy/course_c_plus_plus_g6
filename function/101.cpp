#include<iostream>
using namespace std;
void MyFunction(){ // declare function
    cout << "Hello Welcome My Function" << endl;
}
void FunParam(string name ){
    cout << "My name is : " << name << endl;
}
void header(){
    cout << "Name\tGender\tSalay\tTel" << endl;
}
void getUserInfo(string name , string gender, double salary , string tel ){
    cout << name << "\t" << gender << "\t" << salary << "\t" << tel << endl;
}
int main(){
    system("clear");
    MyFunction(); // call function
    FunParam("Jon");
    FunParam("Sok");

    getUserInfo("Jon","Male",1000,"0988887766");
    getUserInfo("Jon","Male",1000,"0988887766");

    for(int i = 0 ; i < 10 ; i++){
        getUserInfo("Jon","Male",1000,"0988887766");
    }
    return 0;
}