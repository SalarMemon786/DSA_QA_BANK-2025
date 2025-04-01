#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " "; 
    }
}

void swap_alternate(int arr[], int size){
    for(int i = 0; i < size/2; i+=2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    cout << "swap alternate array: ";
    printArray(arr, size);
}

int main(){
    int size = 5;
    int arr[6] = {2,4,5,63,3,7};
    cout << "array: ";
    printArray(arr, size);
    cout << endl;
    swap_alternate(arr, size);
    return 0;
}