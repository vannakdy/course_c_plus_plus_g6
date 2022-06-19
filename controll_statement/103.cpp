#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    system("clear");
    int id;
    string name, gender, grade , result ;
    double average , total_score  , math , khmer , physic;
    cout << "_______Input Student______" << endl;
    cout << "Input student id : "; cin >> id;
    cout << "Input studetn name : "; cin >> name;
    cout << "Input studetn gender : "; cin >> gender;
    cout << "Input studetn math : "; cin >> math;
    cout << "Input studetn khmer : "; cin >> khmer;
    cout << "Input studetn physic : "; cin >> physic;

    total_score = (math + khmer + physic);
    average = total_score / 3;

    if(average >= 90  && average <= 100){
        grade = "A";
    }else if(average >= 80 && average < 90){
        grade = "B";
    }else if(average >= 70 && average < 80){
        grade = "C";
    }else if(average >= 60 && average < 70){
        grade = "D";
    }else if(average >= 50 && average < 60){
        grade = "E";
    }else if(average >= 0 && average < 50){
        grade = "F";
    }

    if(average >= 50){
        result = "Pass";
    }else{
        result = "Fail";
    }

    cout << setprecision(2) << fixed ;
    cout << "_______Output Data________" << endl;
    cout << id << "\t";
    cout << name << "\t" ;
    cout << gender << "\t" ;
    cout << math << "\t" ;
    cout << khmer << "\t" ;
    cout << physic << "\t" ;
    cout << total_score << "\t" ;
    cout <<average << "\t";
    cout << grade << "\t" ;
    cout << result << endl;
    return 0;
}