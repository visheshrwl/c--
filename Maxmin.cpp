// #include<iostream>
// #include<string.h>

// using namespace std;

// int main() {
//     int max, min;
//     int arr[100];
//     max = min = arr[1];

//     for (int i = 0; i < 5; i++)
//     {
//         cin >> arr[i];
//     }
    

//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//         else if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }
    
//     cout << max << endl;
//     cout << min << endl;

//     return 0;
// }

#include <iostream>

using namespace std;

void update (int arr[], int n) {
    cout << endl << "Inside the Function" <<endl;
    
    arr[0] = 120; //updating array's First Element
    //printing the array

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


    cout  << "Going back to main function" << endl;

}

int main() {
    int arr[] = { 1, 2, 3};

    update(arr, 3);

    //printing The Array

    for(int i = 0 ; i < 3 ; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}