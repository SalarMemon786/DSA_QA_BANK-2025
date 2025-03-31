#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}

void reverseArraysElements(int arr[], int size){
    int count = 1;
    for(int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size - count];
        arr[size - count] = temp;
        count++;
    }
    cout << "reversed array: ";
    printArray(arr, size);
}

int main(){
    int size = 5;
    int arr[5] = {1,2,3,4,5};
    reverseArraysElements(arr, size);
    return 0;
}