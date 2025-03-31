#include <iostream>
using namespace std;

void findLargestElement(int arr[], int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        if(ans < arr[i]){
            ans = arr[i];
        }
    }
    cout << ans << " is the largest number."; 
}

int main(){
    int size = 5;
    int arr[5] = {1,2,3,4,5};
    findLargestElement(arr, size);
    return 0;
}