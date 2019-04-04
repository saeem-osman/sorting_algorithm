//selection sort

#include<iostream>
#include<string.h>
using namespace std;
#define len 100

void selectionSort(int* a, int n){

int minValue = a[0];
int minIndex;
for(int i = 0; i<n; i++){
    minValue = a[i];
    minIndex = i;
    for(int j = i+1; j<n; j++){
        if(a[j] < minValue){
            minValue = a[j];
            minIndex = j;
        }
    }
    int temp = a[i];
    a[i] = a[minIndex];
    a[minIndex] = temp;
}

}

int main(){
int arr[len],n;
cout<<"Enter length of integer array: ";
cin>>n;
for(int i = 0; i<n; i++){
    cout<<"Enter value: ";
    cin>>arr[i];
}

selectionSort(arr,n);

cout<<"After sorting: ";
for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
}
