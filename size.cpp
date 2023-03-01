#include<iostream>
using namespace std;

class person
{   public: 
        char name[20];
        double a;
        int id;
        float c;
        int d;
        int e;
};

int main()
{
person p1; // p1 is a object
cout << sizeof(p1) << endl;
cout << sizeof(p1.a) << endl;
cout << sizeof(p1.id) << endl;
cout << sizeof(p1.name) << endl;
cout << sizeof(p1.c) << endl;
cout << sizeof(p1.d) <<endl;
cout << sizeof(p1.e) <<endl;
}
