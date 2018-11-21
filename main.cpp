//quick sort algorithm

#include<iostream>
using namespace std;

void swap(int *x, int *y){
int temp;
temp = *x;
*x = *y;
*y = temp;

}

int Partition(int *a, int s, int e){
int pivot = a[e];
int pIndex = s;
int start = s;

for(int i = start; i<e; i++){
    if(a[i]<=pivot){
        swap(&a[i],&a[pIndex]);
        pIndex++;
    }
}
swap(&a[pIndex],&a[e]);
return pIndex;

}

void QuickSort(int *a, int s, int e){
if(s<e){
    int pIndex = Partition(a,s,e);
    QuickSort(a,s,pIndex-1);
    QuickSort(a,pIndex+1,e);

}

}

int main(void){
int x;
cout<<"Enter total number: ";
cin>>x;
int a[x];
cout<<"Enter value : ";
for(int i = 0 ; i<x; i++)
    cin>>a[i];
QuickSort(a,0,x);
for(int i = 0; i<x; i++){
    cout<<a[i]<<" ";
}

cout<<endl;

}
