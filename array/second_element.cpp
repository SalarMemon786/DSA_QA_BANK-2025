#include <iostream>
using namespace std;

int findLargestElement(int arr[], int size){
    int largest_number = 0;
    // for finding the largest element
    for(int i = 0; i < size; i++){
        if(largest_number < arr[i]){
            largest_number = arr[i];
        }
    }
    return largest_number;
}

void findSecondLargestElement(int arr[], int size){
    int largest_number = findLargestElement(arr, size);
    int second_largest_number = 0;
    // for finding the second largest element 
    for(int i = 0; i < size; i++){
        if(second_largest_number < arr[i]){
            if(arr[i] == largest_number){}
            else{
                second_largest_number = arr[i];
            }
        }
    }
    cout << second_largest_number << " is the second largest number.";
}

int main(){
    int size = 5;
    int arr[5] = {1,2,3,4,5};
    findSecondLargestElement(arr, size);
    return 0;
}