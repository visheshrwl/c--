// #include<iostream>

// using namespace std;

// class Rectangle
// {
//     public:
//         float length;
//         float breadth;


//         float area(){
//             return length * breadth;
//         }
//         float perimeter(){
//             return 2*(length + breadth);
//         }
// };


// int main() {
//     Rectangle r1, r2, r3;

//     r1.length = 10;
//     r1.breadth = 5;
//     r2.length = 100;
//     r2.breadth = 50;
//     r3.length = 98;
//     r3.breadth = 37;

//     cout << "Area of Rect r1 is " << r1.area() << endl;
//     cout << "Perimeter of Rect r1 is " << r1.perimeter() << endl; 
//     cout << "Area of Rect r2 is " << r2.area() << endl;
//     cout << "Perimeter of Rect r2 is "<< r2.perimeter() << endl; 
//     cout << "Area of Rect r3 is " << r3.area() << endl;
//     cout << "Perimeter of Rect r3 is " << r3.perimeter() << endl; 

//     return 0;
// }

// #include <iostream>

// using namespace std;

// class Base{
//     public:
//         int x;
//         void show(){
//             cout << x << endl;
//         }
// };

// class Derived : public Base
// {
//     public:
//         int y;
// void Display(){
// cout <<x << " "<< y;
// }
// };

// int main() {
// Base b;
// b.x = 25;
// b.show(); 
// Derived d;
// d.y = 15;
// d.x = 10;
// d.show();
// d.Display();
// }


// #include<iostream>

// using namespace std;

// class Rectangle
// {
// private: 
//     int length;
//     int breadth;
// public:
//     Rectangle(int r =0, int b = 0);
// int getLength();
// int getBreadth();
// void setLength(int l);
// void setBreadth(int b);
// int area();
// int perimeter();

// };