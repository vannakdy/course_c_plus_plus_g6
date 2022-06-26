#include<iostream>
using namespace std;

int main(){
    system("clear");
    int id[200], n, i;
    string name[200], gender[200], grade[200] , result[200];
    float math[200] , khmer[200], physic[200];
    float total_score[200], average[200];

    cout << "Input N studetn : "; cin >> n;
    cout << "====Input " << n << " Student Information====="<<endl;
    for(i = 0 ; i < n ; i++){
        cout << "=====================" << endl;
        cout << "Input student id : "; cin >> id[i];
        cout << "Input student name : "; cin >> name[i];
        cout << "Input student gender :"; cin >> gender[i];
        cout << "Input student math :"; cin >> math[i];
        cout << "Input student khmer :"; cin >> khmer[i];
        cout << "Input student physic :"; cin >> physic[i];
        // find tolat score
        total_score[i] = math[i] + khmer[i] + physic[i];
        average[i] = total_score[i] / 3;
        if(average[i] >=90 && average[i] <=100){
            grade[i] = "A";
        }else if(average[i] >=80 && average[i] < 90){
            grade[i] = "B";
        }else if(average[i] >=70 && average[i] < 80){
            grade[i] = "C";
        }else if(average[i] >=60 && average[i] < 70){
            grade[i] = "D";
        }else if(average[i] >=50 && average[i] < 60){
            grade[i] = "E";
        }else if(average[i] >=0 && average[i] < 50){
            grade[i] = "F";
        }

        if(average[i] < 50){
            result[i] = "Fail";
        }else{
            result[i] = "Pass";
        }

    }
    cout << "===== List student =====" << endl;
    for(i = 0 ; i < n ; i++){
        cout << id[i] << "\t";
        cout << name[i] << "\t";
        cout << gender[i] << "\t";
        cout << math[i] << "\t";
        cout << khmer[i] << "\t";
        cout << physic[i] << "\t";
        cout << total_score[i] << "\t";
        cout << average[i] << "\t";
        cout << grade[i] << "\t";
        cout << result[i] << endl;
    }
    
    return 0;
}



