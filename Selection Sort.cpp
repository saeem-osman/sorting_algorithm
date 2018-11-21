#include <iostream>

using namespace std;

void InsertionSort(int *a, int n);
void InsertionSort(int *a, int b){

for(int i = 1; i<n; i++){

    int value = a[i];
    int hole = i;
    while(h>0 && a[hole-1]>value){
        a[hole] = a[hole-1];
        hole--;
    }
    a[hole] = value;



}

}


int main()
{
    int a[50];
    int d;
    cout<<"How many numbers: ";
    cin>>d;
    cout<<"Enter Value: ";
    for(int i=0; i<d; i++){
        cin>>a[i];
    }
    SelectionSort(a,d);

    for(int i= 0; i<d; i++){
        cout<<a[i]<<" ";
    }

}
