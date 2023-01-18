// #include <iostream> //preprocessor command
//  using namespace std;  

//  int main(){ //main function
//     cout<<"Hello World"; //print Hello World
//     cout<<"Vishesh"<<endl; // endl works as \n for c++
//     cout<<"Good Morning";
//     int a,b,c;
//     a = 10;
//     b = 109;
//     c = 110;
//     cout<<a;

//     int marksInMaths = 83;
//     cout<<"The Marks of the students in Maths is: " << marksInMaths;
//     return 0;
//  }


// #include <iostream>

// using namespace std;

// int main(){
//     cout<<"Hello Khwaish Baby";
//     int chotu = 18;
//     cout<<"Age of my Khwaish Baby is "<< chotu;
//     return 0;
// }


// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
    
//     int i = 1;
    
//     while (i <= n){
//         int j = 1;
//         while (j<=n)
//         {
//             cout<<j;
//             j = j + 1;
//         }
//         cout<<endl;
//         i = i + 1;
//     }
//     return 0;
// }

// #include<iostream>

// using namespace std;

// int power(){
//     int a, b;
//     cin >> a >> b;

//     int ans = 1;

//     for(int i = 1; i <= b; i++){
//         ans = ans * a;
//     }

//     return ans;
// }

// int main(){
//     // int a, b;
//     // cin >> a >> b;

//     int ans = power();

//     cout << "The Answer is " << ans <<endl;

//     return 0;
// }

// #include<iostream>

// using namespace std;

// //1->Even
// //0 -> Odd

// bool isEven(int a) {
//     //odd
//     if(a&1) {
//         return 0;
//     }
//     else{
//         //Even
//         return 1;
//     }
// }

// int main(){
//     int num;
//     cin >> num;

//     if(isEven(num)){
//         cout << "Number is Even" <<endl;
//     }
//     else{
//         cout << "Number is Odd" <<endl;
//     }
// }

#include<iostream>

using namespace std;

int fact(int n){
    int fact = 1;

    for (int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r){
    int num = fact(n);

    int deno = fact(r) * fact(n-r);

    return num/deno;
}

int main(){
    
    return 0;
}