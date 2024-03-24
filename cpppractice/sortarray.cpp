#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5,4,3,2,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    bool swapped;

    do {
        swapped = false;
        for (int i = 0; i < len - 1; i++){
            if (arr[i] > arr[i + 1] && i <= len){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;
            }
        }
    } while (swapped);

    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    return 0;
}