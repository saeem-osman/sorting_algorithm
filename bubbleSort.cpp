#include<iostream>
using namespace std;

void BubbleSort(int*a , int n){

for(int i = 0; i<n; i++){
    for(int j = 0; j<n; j++){
        if(a[j]>a[j+1]){
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
}


}
int main(){
int a[100];
cout<<"Enter range: ";
int x;
cin>>x;
for(int i = 0; i<x; i++){
    cout<<"Enter value: ";
    cin>>a[i];
}

BubbleSort(a,x);
cout<<"After sorting: ";
for(int i =0; i<x; i++)
    cout<<a[i]<<" ";


}
