#include<iostream>

using namespace std;

void printArray(int arr[], int size){

    cout << "Printing the array" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done" << endl;
    cout << endl;
}



int main(){

    int first[15];
    int n = 15;
    printArray(first, n);

    int second[15] = {0};
    printArray(second, n);

    int third[15] = {1};
    printArray(third, n);

    int fourth[15] = {2, 3, 5};
    printArray(fourth, n);

    int fifthsize = sizeof(fourth)/sizeof(fourth[0]);

    cout << fifthsize << endl;



    return 0;
}