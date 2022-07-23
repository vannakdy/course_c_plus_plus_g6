#include<iostream>
using namespace std;

void sort(string arr[],int n){
    string tmp;
    for (int i = 0; i < n; i++)
    {
      for(int j = i + 1 ; j < n ; j ++){
        if(arr[i] > arr[j]){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        } 
      }
    }
    
    for(int i = 0; i < n ; i++){
        cout << arr[i] << "\t";
    }
    
}

void sort(int arr[],int n){
    int tmp;
    for (int i = 0; i < n; i++)
    {
      for(int j = i + 1 ; j < n ; j ++){
        if(arr[i] > arr[j]){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        } 
      }
    }
    
    for(int i = 0; i < n ; i++){
        cout << arr[i] << "\t";
    } 
}

void sort(double arr[],int n){
    double tmp;
    for (int i = 0; i < n; i++)
    {
      for(int j = i + 1 ; j < n ; j ++){
        if(arr[i] > arr[j]){
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        } 
      }
    }
    
    for(int i = 0; i < n ; i++){
        cout << arr[i] << "\t";
    } 
}

void sumData(){
  cout << "Hello" ;
}

