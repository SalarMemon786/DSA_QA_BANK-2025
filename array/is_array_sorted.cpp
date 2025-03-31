#include <iostream>
using namespace std;

void isArraySorted(int arr[], int size){
    for(int i = 1; i < size; i++){
        if(arr[i] < arr[i - 1]){
            cout << "No. Array is not sorted.";
            return;
        }
    }
    cout << "Yes. Array is sorted.";
}

int main(){
    int size = 5;
    int arr[5] = {1,2,4,3,5};
    isArraySorted(arr, size);
    return 0;
}