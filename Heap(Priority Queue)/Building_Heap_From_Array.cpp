
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void printHeap(vector<int> &arr){
    cout << "Array repersentation of Heap is :" << endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void heapifyMethod(vector<int> &arr, int n, int i){

    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // If left child is larger than root
    if(left < n and arr[left] > arr[largest]){
        largest = left;
    }
    // If right child is larger than largest so far
    if(right < n and arr[right] > arr[largest]){
        largest = right;
    }
    // If largest is not root
    if(largest != i){
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapifyMethod(arr, n, largest);
    }
}
// Function to build a Max-Heap from the given array
void buildHeap(vector<int> &arr){
    int n = arr.size();

    // Index of last non-leaf node
    int startIndex = (n/2) - 1;

    for(int i = startIndex; i >= 0; i--){

        // Perform reverse level order traversal
        // from last non-leaf node and heapify
        // each node
        heapifyMethod(arr, n, i);
    }
}
int main(){

    int n;
    cin >> n;

    int t = 0;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        cin >> t;
        arr.push_back(t);
    }

    buildHeap(arr);
    printHeap(arr);

    return 0;
}