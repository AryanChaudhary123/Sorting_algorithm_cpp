#include<iostream>
using namespace std;
BinarySearch(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int a[5]={1,2,3,4,5};
    int key=10;
    int index=BinarySearch(a,5,key);
    if(index==-1){
        cout<<"element not exist";
    }
    else{
    cout<<"element is present at index: "<<index<<endl;
    }
}