#include<iostream>
using namespace std;

void printarray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int l, int mid, int r) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    
    int a[n1], b[n2];
    
    for(int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }
    for(int j = 0; j < n2; j++) {
        b[j] = arr[mid + 1 + j];
    }
    
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            arr[k++] = a[i++];
        } else {
            arr[k++] = b[j++];
        }
    }
    
    while(i < n1) {
        arr[k++] = a[i++];
    }
    
    while(j < n2) {
        arr[k++] = b[j++];
    }
}

void mergesort(int arr[], int l, int r) {
    if(l >= r) {
        return; // Base condition
    }
    
    int mid = l + (r - l) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {
    int arr[5] = {1,34,54,654,23};
    int n = 5;
    mergesort(arr, 0, n - 1);
    printarray(arr, n);
    return 0;
}

