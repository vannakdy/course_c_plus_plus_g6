#include<iostream>
using namespace std;
int main(){
    int array_average[100], tmp;
    int n , i;

    cout << "Input n average : "; cin >> n;

    for(i = 0 ; i < n ; i++){
        cout << "Input Average : "; cin >> array_average[i];
    }

    cout << "========= Befor sort ========" << endl;
    for(i = 0 ; i < n ; i++){
        cout << array_average[i] << "\t";
    }

    cout << "\n======== Sort DESC ======== " << endl; 
    // sort ASC(តូចទៅធំ) && DESC(ធំទៅតូច)
    // 10 20 30 2 5 => 30 20 10 5 2
    for(i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(array_average[i] < array_average[j]){
                // (i)10 < (j)20
                // tmp = 10
                // array_average[i] = 20
                // array_average[i+1] = 10


                tmp = array_average[i];
                array_average[i] = array_average[j];
                array_average[j] = tmp;
            }
            
        }
    }

    for(i = 0 ; i < n ; i++){
        cout << array_average[i] << "\t";
    }


     cout << "\n======== Sort ASC ======== " << endl; 
    for(i = 0 ; i < n ; i++){
        for(int j = i + 1 ; j < n ; j++){
            if(array_average[i] > array_average[j]){
                tmp = array_average[i];
                array_average[i] = array_average[j];
                array_average[j] = tmp;
            }
        }
    }
    for(i = 0 ; i < n ; i++){
        cout << array_average[i] << "\t";
    }


    

    return 0;
}