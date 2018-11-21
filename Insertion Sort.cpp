#include <iostream>
//this is selection sorting

using namespace std;

void InsertionSort(int *a, int n){


for(int i= 1; i<n; i++){
    int val = a[i];
    int hole = i;
    while(hole>0 && a[hole-1]>val){
        a[hole] = a[hole-1];
        hole--;
    }
    a[hole] = val;

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
    InsertionSort(a,d);

    for(int i= 0; i<d; i++){
        cout<<a[i]<<" ";
    }

}
