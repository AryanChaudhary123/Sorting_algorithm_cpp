#include<iostream>
using namespace std;
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void selectionsort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        int minindex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}
int main(){
    int n[10]={1,4,5,6,7,3,2,9,10,12};
    selectionsort(n,10);
    printarray(n,10);
}