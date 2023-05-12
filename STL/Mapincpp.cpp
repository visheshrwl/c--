#include <iostream>
#include <map>
using namespace std;

int main(){
    map <int, string> m;
    m.insert(pair<int, string> (1,"Vishesh"));
    m.insert(pair<int, string> (2,"Naman"));
    m.insert(pair<int, string> (3,"Aman"));
    m.insert(pair<int, string> (4,"Chaman"));
    m.insert(pair<int, string> (5,"Raman"));

    map<int, string> :: iterator itr;
    for(itr=m.begin(); itr != m.end(); itr++)
    {
        cout <<itr->first<<"\t"<<itr->second<<endl;
    }

    cout <<"Value Found is" <<endl;
    map<int, string>::iterator itr1;
    itr1=m.find(1);

    cout <<itr1->first<<"\t"<<itr1->second<<endl;
}