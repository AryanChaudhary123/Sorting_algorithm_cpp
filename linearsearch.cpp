#include<iostream>
using namespace std;
linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
    }
    }
    return 0;
}
int main(){
    int n[10]={1,53,6543,63,731,54,63,24,21,74};
    int key=54;
    bool ans=linearsearch(n,10,key);
    if(ans){
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
}