#include <iostream>
using namespace std;

void shiftArray(int arr[], int n) {
    
    if (n <= 1) {
        return;
    }
    

    int lastElement = arr[n - 1];
    

    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    
    arr[0] = lastElement;
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    
    shiftArray(arr, n);
    
   
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
