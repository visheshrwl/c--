// #include <list>
// // #include <vector>
// #include <iostream>

// using namespace std;

// int main() {
//     list<int> v = {10,20,30,40};
//     v.push_back(25);
//     v.push_back(70);
//     v.pop_back();
//     v.push_back(2);
//     v.pop_back();
//     //Using for each loop
//     for (int x : v)
//         cout <<x<<"\t";
//     cout <<endl;

//     //Using Iterator
//     list <int>::iterator itr;
//     for(itr = v.begin(); itr!=v.end(); itr++)
//         cout << ++*itr <<"\t"; //Incremented in the array also
//     cout <<endl;
//     return 0;
// }

// #include <vector> 
// #include <iostream> 
// using namespace std; 

// int main() { 
//     vector<int> v = {10,20,30,40}; 
//     v.push_back(25); 
//     v.push_back(70); 
//     v.pop_back(); 
//     v.push_back(2); 
//     v.pop_back(); 
//     for (int x : v) cout <<x<<"\t"; 
//     cout <<endl; 
//     vector <int>::iterator itr; 
//     for(itr = v.begin(); 
//     itr!=v.end(); itr++) cout << *itr <<"\t"; 
//     cout <<endl; 
//     return 0;
//}

// #include <forward_list>
// // #include <vector>
// #include <iostream>

// using namespace std;

// int main() {
//     forward_list<int> v = {10,20,30,40};
//     v.push_front(25);
//     v.push_front(70);
//     v.push_front(2);
//     //Using for each loop
//     for (int x : v)
//         cout <<x<<"\t";
//     cout <<endl;

//     //Using Iterator
//     forward_list <int>::iterator itr;
//     for(itr = v.begin(); itr!=v.end(); itr++)
//         cout << ++*itr <<"\t"; //Incremented in the array also
//     cout <<endl;
//     return 0;
// }

#include <set>
// #include <vector>
#include <iostream>

using namespace std;

int main() {
    set<int> v = {10,20,30,40};
    v.insert(25);
    v.insert(70);
    v.insert(2);
    //Using for each loop
    for (int x : v)
        cout <<x<<"\t";
    cout <<endl;

    //Using Iterator
    set <int>::iterator itr;
    for(itr = v.begin(); itr!=v.end(); itr++)
        cout << *itr <<"\t"; //Incremented in the array also
    cout <<endl;
    return 0;
}