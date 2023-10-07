#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
void sorting01(int arr[], int n){
    int i = 0;
    int j = n - 1;

    while(i < j){
        if(arr[i] == 0 && i < j){
            i++;
        }
        else if(arr[j] == 1 && i < j){
            j--;
        }
        else if(i < j){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
int main(){

    int n;
    cin >> n;

    int arr[10];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sorting01(arr, n);
    printArray(arr, n);

    return 0;
}