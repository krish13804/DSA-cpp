#include<iostream>
using namespace std;

int main() {
    int size; // Total size of the array
    int arr[size] = {0}; // Initialize the array with 0
    int numElements; // Number of existing elements
    int position;
    int index;
    int i;
    int count=0;

    // Input the size of the array
    cout << "Enter the size of the array:";
    cin>>size;
    
    
    // Input the initial elements
    cout << "Enter elements for the array: " << endl;
    for (int i = 0; i < numElements; i++) {
        cin >> arr[i];
    }
    
    // Display the current array
    cout << "Current array: ";
    for (int i = 0; i < numElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //couting the no. of existing elements
     
     for(i=0;i<=size;i++)
     { 
        if(arr[i]>=0 || arr[i]<0)
        count++;
     }

    // Input the element to insert
    int element;
    cout << "Enter the element to insert in the array: ";
    cin >> element;
    
    cout<<"enter the position you want to insert :";
    cin>>position;
    index = position -1;

    // Shift elements to the right from index given in postion
    for (int i = numElements; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at index given by the user
    arr[index] = element;

    // Increment the number of elements

    numElements++;

    // Display the updated array
    cout << "Updated array: ";
    for (int i = 0; i < numElements; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}