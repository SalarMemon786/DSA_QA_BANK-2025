#include <iostream>
using namespace std;

int main(){
    int size = 7;
    int arr[7] = {2,3,4,3,4,2,1};
    int ans = arr[0];
    for(int i = 1; i < size; i++){
        if(ans != arr[i]){
            ans = arr[i];
        }
    }
    cout << ans << " is unique.";
    return 0;
}