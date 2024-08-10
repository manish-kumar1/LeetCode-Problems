
#include<iostream>
using namespace std;

void TowerOfHanoi(int n, char source, char helper, char destination){

    if(n == 1){
        cout << "Move Disk "<< n << " from "<< source << " to "<< destination << endl;
        return;
    }
    TowerOfHanoi(n-1, source, destination, helper);
    cout << "Move Disk "<< n << " from " << source << " to "<<destination << endl;
    TowerOfHanoi(n-1, helper, source, destination);
}
int main(){

    int n;
    cin >> n;

    char source = 'A';
    char helper = 'B';
    char destination = 'C';

    TowerOfHanoi(n, source, helper, destination); 

    return 0;
}