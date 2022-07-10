#include <iostream>
using namespace std;
int main()
{
    system("clear");
    // student score
    int id[100], option, n = 0, i, j;
    string name[100], gender[100];
    double score1[100], score2[100], score3[100];

    double total_score[100], average[100];
    string grade[100], result[100] ;

    int idTmp, isSearch;
    string tmpStringType;
    double tmpDoubleType;


    do
    {
        cout << "\n1. Input Student" << endl;
        cout << "2. Ouput Student" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Update Student" << endl;
        cout << "6. Sort Student" << endl;
        cout << "7. Exit" << endl;
        cout << "Input your option: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "______INPUT STUDENT______" << endl;
            cout << "Input student id :";
            cin >> id[n];
            cout << "Input student name :";
            cin >> name[n];
            cout << "Input student gender :";
            cin >> gender[n];
            cout << "Input student score1 :";
            cin >> score1[n];
            cout << "Input student score2 :";
            cin >> score2[n];
            cout << "Input student score3 :";
            cin >> score3[n];
            total_score[n] = score1[n] + score2[n] + score3[n];
            average[n] = total_score[n] / 3;
            if (average[n] >= 90 && average[n] <= 100)
            {
                grade[n] = "A";
            }
            else if (average[n] >= 80 && average[n] < 90)
            {
                grade[n] = "B";
            }
            else if (average[n] >= 70 && average[n] < 80)
            {
                grade[n] = "C";
            }
            else if (average[n] >= 60 && average[n] < 70)
            {
                grade[n] = "D";
            }
            else if (average[n] >= 50 && average[n] < 60)
            {
                grade[n] = "E";
            }
            else if (average[n] >= 0 && average[n] < 50)
            {
                grade[n] = "E";
            }
            if (average[n] < 50)
            {
                result[n] = "Fail";
            }
            else
            {
                result[n] = "Pass";
            }
            n++;
            break;
        case 2:
            cout << "_______STUDET LIST_______" << endl;
            for (i = 0; i < n; i++)
            {
                cout << id[i] << "\t";
                cout << name[i] << "\t";
                cout << gender[i] << "\t";
                cout << score1[i] << "\t";
                cout << score2[i] << "\t";
                cout << score3[i] << "\t";
                cout << total_score[i] << "\t";
                cout << average[i] << "\t";
                cout << grade[i] << "\t";
                cout << result[i] << endl;
            }
            break;
        case 3:
            cout << "_________ SEARCH STUDENT BY ID ______" << endl;
            cout << "INPUT STUDENT ID TO SEARCH : ";
            cin >> idTmp;
            isSearch = 0;
            for (i = 0; i < n; i++)
            {
                if (idTmp == id[i])
                {
                    cout << "<<<< Search Found! >>>>" << endl;

                    isSearch = 1;
                    break;
                }
            }
            if (isSearch == 0)
            {
                cout << "<<<< Search not Found >>>>" << endl;
            }
            break;
        case 4:
            cout << "_____ DELETE STUDENT BY ID ______";
            cout << "INPUT STUDENT ID TO DELETE :";
            cin >> idTmp;
            isSearch = 0;
            for (i = 0; i < n; i++)
            {
                if (idTmp == id[i])
                {
                    for (int j = i; j < n; j++)
                    {
                        id[j] = id[j + 1];
                        name[j] = name[j + 1];
                        gender[j] = gender[j + 1];
                        score1[j] = score1[j + 1];
                        score2[j] = score2[j + 1];
                        score3[j] = score3[j + 1];
                        total_score[j] = total_score[j + 1];
                        average[j] = average[j + 1];
                        grade[j] = grade[j + 1];
                        result[j] = result[j + 1];
                    }
                    n--;
                    isSearch = 1;
                    cout << "<<<< DELETE COMPLETED >>>>>>" << endl;
                    break;
                }
            }
            if (isSearch == 0)
            {
                cout << "<<<<<< DELETE NOT COMPLETE >>>>>" << endl;
            }
            break;
        case 5:
            cout << "_____ UPDATE STUDENT BY ID ______";
            cout << "INPUT STUDENT ID TO UPDATE :";
            cin >> idTmp;
            isSearch = 0;
            for (i = 0; i < n; i++)
            {
                if (idTmp == id[i])
                {
                    cout << "______UPDATE  STUDENT______" << endl;
                    cout << "Input new student id :";
                    cin >> id[i];
                    cout << "Input new student name :";
                    cin >> name[i];
                    cout << "Input new student gender :";
                    cin >> gender[i];
                    cout << "Input new student score1 :";
                    cin >> score1[i];
                    cout << "Input new student score2 :";
                    cin >> score2[i];
                    cout << "Input new student score3 :";
                    cin >> score3[i];
                    total_score[i] = score1[i] + score2[i] + score3[i];
                    average[i] = total_score[i] / 3;
                    if (average[i] >= 90 && average[i] <= 100)
                    {
                        grade[i] = "A";
                    }
                    else if (average[i] >= 80 && average[i] < 90)
                    {
                        grade[i] = "B";
                    }
                    else if (average[i] >= 70 && average[i] < 80)
                    {
                        grade[i] = "C";
                    }
                    else if (average[i] >= 60 && average[i] < 70)
                    {
                        grade[i] = "D";
                    }
                    else if (average[i] >= 50 && average[i] < 60)
                    {
                        grade[i] = "E";
                    }
                    else if (average[i] >= 0 && average[i] < 50)
                    {
                        grade[i] = "E";
                    }
                    if (average[i] < 50)
                    {
                        result[i] = "Fail";
                    }
                    else
                    {
                        result[i] = "Pass";
                    }
                    isSearch = 1;
                    cout << "<<<< UPDATE COMPLETED >>>>>>" << endl;
                    break;
                }
            }
            if (isSearch == 0)
            {
                cout << "<<<<<< UPDATE NOT COMPLETE >>>>>" << endl;
            }
            break;
        case 6:
            for(i = 0 ; i < n ; i++){
                for(j = i + 1 ; j < n ; j++){
                    if(average[i] < average[j]){
                        idTmp = id[i];
                        id[i] = id[j];
                        id[j] = idTmp;

                        tmpStringType = name[i];
                        name[i] = name[j];
                        name[j] = tmpStringType;

                        tmpStringType = gender[i];
                        gender[i] = gender[j];
                        gender[j] = tmpStringType;

                        tmpDoubleType = score1[i];
                        score1[i] = score1[j];
                        score1[j] = tmpDoubleType;

                        tmpDoubleType = score2[i];
                        score2[i] = score2[j];
                        score2[j] = tmpDoubleType;

                        tmpDoubleType = score3[i];
                        score3[i] = score3[j];
                        score3[j] = tmpDoubleType;

                        tmpDoubleType = total_score[i];
                        total_score[i] = total_score[j];
                        total_score[j] = tmpDoubleType;

                        tmpDoubleType = average[i];
                        average[i] = average[j];
                        average[j] = tmpDoubleType;

                        tmpStringType = grade[i];
                        grade[i] = grade[j];
                        grade[j] = tmpStringType;

                        tmpStringType = result[i];
                        result[i] = result[j];
                        result[j] = tmpStringType;

                    }
                }
            }
            cout << "<<<< SORT SUCCESS TO SEE RESULT PLEASE CHOSE OPTION 2 >>>" << endl;
        case 7:
            exit(0);
            break;
        }
    } while (option != 7);

    return 0;
}