#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    system("clear");
    int id;
    string name , gender;
    // char name[30] , gender[30];
    double score1, score2, score3;
    double total_score, average;

    cout << "Input student id : " ; cin >> id;
    cout << "Input student name : "; cin >> name;
    cout << "Input student gender : "; cin >> gender;
    cout << "Input student score1 : "; cin >> score1;
    cout << "Input student score2 : "; cin >> score2;
    cout << "Input student score3 : "; cin >> score3;

    total_score = score1 + score2 + score3;
    average = total_score / 3;

    cout << "========== Student Information =====" << endl;
    // cout << "Id"
    cout << id << "\t";
    cout << name << "\t";
    cout << gender << "\t";
    cout << score1 << "\t";
    cout << score2 << "\t";
    cout << score3 << "\t";
    cout << total_score << "\t";
    // use cout<<setprecision(number); cout << fixed 
    cout << setprecision(2);
    cout << fixed;
    cout << average << endl;
    return 0;
}

// Student 
//     id 
//     name 
//     gender
//     score1
//     score2
//     score3

//     total_score ? 
//     average ?

