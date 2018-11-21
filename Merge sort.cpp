//merge sort algorithm

#include<iostream>
#include<stdlib.h>
using namespace std;

void Merge(int *A, int *L, int *R, int leftCount, int rightCount){

int i,j,k;
i = j = k = 0;

while(i<leftCount && j <rightCount){
    if(L[i]<R[j]) A[k++] = L[i++];
    else
        A[k++] = R[j++];
}
while(i<leftCount) A[k++] = L[i++];
while(j<rightCount) A[k++] = R[j++];


}


void MergeSort(int *a, int n){


if(n<2)
    return;
int *Left, *Right;
int mid = n/2;
Left = (int*)malloc(mid*sizeof(int));
Right = (int*)malloc((n-mid)*sizeof(int));

for(int i=0; i<mid; i++){
    Left[i] = a[i];
}
for(int i = mid; i<n; i++){
    Right[i-mid] = a[i];
}

MergeSort(Left,mid);
MergeSort(Right,n-mid);
Merge(a,Left,Right,mid,n-mid);
free(Left);
free(Right);


}

int main(void){

int p;
cout<<"How many Number: ";
cin>>p;
cout<<"Enter value: ";
int a[p];
for(int i=0; i<p; i++){
    cin>>a[i];
}
MergeSort(a,p);


for(int i=0; i<p; i++){
    cout<<a[i]<<" ";
}
cout<<endl;


}
