#include<iostream>
#include<iomanip>
using namespace std;
string getStaffInfo(string firstname, string lastname, string gender , double salary){
    return firstname + "\t" + lastname + "\t" + gender + "\t";
}
int sumData(int x ,int y){
    return x + y;
}
int sumData1(int x ,int y,int z){
    return x + y + z;
}
int MulData(int x , int y){
    return x * y;
}
double getAverage(double totalScore,int numberScore){
    return totalScore/numberScore;
}

string getGrade(double avg){
    string grade = "";
    if(avg >= 90 && avg <= 100){
        grade = "A";
    }else if(avg >= 80 && avg < 90){
        grade = "B";
    }else if(avg >= 70 && avg < 80){
        grade = "C";
    }else if(avg >= 60 && avg < 70){
        grade = "D";
    }else if(avg >= 50 && avg < 60){
        grade = "E";
    }else if(avg >= 0 && avg < 50){
        grade = "F";
    }
    return grade;
}



int main(){
    system("clear");
    cout << getStaffInfo("Jon","Sok","Male",1000) << endl;
    cout << "Sum(10,20) = " << sumData(10,20) << endl;
    cout << "Sum1(10+20+30) =" << sumData1(10,20,30) << endl;
    cout << "Sum1(100+200+300) =" << sumData1(100,200,300) << endl;
    cout << "Mul(100 * 10) =" << MulData(100,10) << endl;

    cout << setprecision(2) << fixed << endl;
    double avg = getAverage((40+99+88),3);
    cout << "Avg = " << avg << endl;
    cout << "Grade = " << getGrade(avg) << endl;
    return 0;
}