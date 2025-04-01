#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int size = n - 1;
    int arr[4] = {1,2,3,4};
    int start = arr[0];
    string missing_number = "";
    for(int i = 0; i < size; i++){
        if(start < arr[i]){
            missing_number += to_string(start + 1);
            start += 1 ;
        }
    }
    cout << "missing numbers are: " << missing_number;
    return 0;
}