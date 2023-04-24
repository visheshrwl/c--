#include <iostream>
using namespace std;

class Rectangle{
    public:
        int length, breadth;
        const char *c;

        int area(){
            return length*breadth;
        }

        Rectangle(){
            length = 0;
            breadth = 0;
        }


        Rectangle(int len, int bre){
            length = len;
            breadth = bre;
        }
        Rectangle(int number){
            length = number;
            breadth = number;
        }
        ~ Rectangle(){
            cout << "Destructor was called" << endl;
        }
};

int main(){
    Rectangle r1, r2(10, 15), r3(20);

    Rectangle *ptr = &r1;

    r1.length = 5;
    r1.breadth = 7;
    r1.c = "Rectangle 1";

    ptr->length = 8;
    ptr->breadth = 10;
    ptr-> c = "Rectangle with this ";

    cout << r1.area() << "\t" << r2.area() << "\t" << r3.area() <<endl;
    cout << r1.c << endl;
    cout << ptr-> c << endl;
}