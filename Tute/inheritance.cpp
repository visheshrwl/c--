#include<iostream>
using namespace std;

class Person{
    int id;
    char name[100];

    public:
        void setData(){
            cout << "Enter your unique ID:";
            cin >> id;
            cout << "Enter your name here: ";
            cin >> name[100];
        }
        void getData(){
            cout << id << name[100];
        }
};

class

int main(){
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}