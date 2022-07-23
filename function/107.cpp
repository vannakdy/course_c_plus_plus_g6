#include<iostream>
#include "helper.h"
using namespace std;

// void sort(string arr[],int n){
//     string tmp;
//     for (int i = 0; i < n; i++)
//     {
//       for(int j = i + 1 ; j < n ; j ++){
//         if(arr[i] > arr[j]){
//             tmp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = tmp;
//         } 
//       }
//     }
    
//     for(int i = 0; i < n ; i++){
//         cout << arr[i] << "\t";
//     }
    
// }

// void sort(int arr[],int n){
//     int tmp;
//     for (int i = 0; i < n; i++)
//     {
//       for(int j = i + 1 ; j < n ; j ++){
//         if(arr[i] > arr[j]){
//             tmp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = tmp;
//         } 
//       }
//     }
    
//     for(int i = 0; i < n ; i++){
//         cout << arr[i] << "\t";
//     } 
// }

int main(){
    system("clear");
    int n = 0;
    cout << "Input n array : "; cin >> n;
    int my_array[n];
    for(int i = 0 ; i < n ; i++) {
        cout << "Input array [" << i << "] ="; cin >> my_array[i];
    }
    sort(my_array,n);
    sumData();
    return 0;
}

// write a function sort array string

