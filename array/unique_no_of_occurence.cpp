#include <iostream>
using namespace std;

int main(){
    int size = 6;
    int arr[size] = {2,1,2,1,3,3};
    bool visited[size] = {false};
    int new_size = 0;
    int new_arr[new_size] = {};
    for(int i = 0; i < size; i++){
        
        if(visited[i]) continue;

        int ans = arr[i];
        int count = 0;

        for(int j = 0; j < size; j++){
            if(arr[j] == ans){
                count++;
                visited[j] = true;
            }
        }
        cout << ans << " -> " << count << endl;
        new_arr[new_size++] = {count};
    }
    cout << new_arr[0] << endl;
    return 0;
}