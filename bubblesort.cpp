#include<iostream>
using namespace std;
int printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void bubblesort(int arr[],int size){
     for(int i=1;i<size;i++){
        bool swapped=false;
        for(int j=0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
int main(){
    int n[10]={3,5,23,56,7,2,5,9,1,8};
    bubblesort(n,10);
    printarray(n,10);
}