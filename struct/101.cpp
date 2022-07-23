
#include<iostream>
using namespace std;
struct User
{
    int id;
    string name;
    string gender;
    string position;
};

int main(){
    system("clear");
    User s_user1,s_user2;

    s_user1.id = 101;
    s_user1.name = "Sok";
    s_user1.gender = "Male";
    s_user1.position = "Manager";

    s_user2.id = 102;
    s_user2.name = "Som";
    s_user2.gender = "Male";
    s_user2.position = "IT";

    cout << s_user1.id << "\t";
    cout << s_user1.name << "\t";
    cout << s_user1.gender << "\t";
    cout << s_user1.position << "\t";

    cout << s_user2.id << "\t";
    cout << s_user2.name << "\t";
    cout << s_user2.gender << "\t";
    cout << s_user2.position << "\t";

    return 0;
}





// sale product 
//      - product 
//      - customer
//      - order 
//      - user 
