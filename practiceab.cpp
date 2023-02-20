// #include<iostream>

// using namespace std;

// class rectangle
// {
//     public:
//         int length;
//         int breadth;

//         int area(){
//             return length * breadth;
//         }
//         int perimeter(){
//             return 2 * (length + breadth);
//         }
// };


// int main() 
// {

//     rectangle r;
//     rectangle *p;
//     p = &r;
//     r.length = 10;
//     p -> length = 10;
//     p -> breadth = 5;


//     rectangle r1, r2;
//     r1.length = 10;
//     r1.breadth = 1;

//     cout << "Area is " << r1.area() << endl;
//     cout << "Perimeter is " <<r1.perimeter() << endl;

//     r2.length = 15;
//     r2.breadth = 10;

//     cout << "Area is "<< r2.area() << endl;
//     cout << "Perimeter is " << r2.perimeter() << endl;
// }


// #include <iostream>

// using namespace std;

// class Rectangle 
// {
//     public:
//         int length;
//         int breadth;

//         int area()
//         {
//             return length * breadth;
//         }
//         int perimeter()
//         {
//             return 2 * (length + breadth);
//         }
// };

// int main() {
//     Rectangle r1;
//     Rectangle *ptr = new Rectangle;

//     ptr -> length = 10;
//     ptr -> breadth = 5;

//     cout << ptr-> area()<< endl;
//     cout << ptr -> perimeter() <<endl;
// }



// #include <iostream>

// using namespace std;

// class Rectangle{
//     private: 
//         int length; 
//         int breadth;
//     public:
//         void setLength(int l){ //set methods are Mutators of the class
//             if(l >= 0)
//                 length = l;
//             else
//                 length = 0;
//         }
//         void setBreadth(int b){ //set methods are Mutators of the class
//             if( b >= 0)
//                 breadth = b;
//             else
//                 breadth = 0;
//         }
//         int getLength(){ //get methods are Accessor of the class
//             return length;
//         }
//         int getBreadth(){ //get methods are Accessor of the class
//             return breadth;
//         }
//         int area()
//         {
//             return length * breadth;
//         }
//         int perimeter()
//         {
//             return 2 * (length + breadth);
//         }
// };

// int main(){
//     Rectangle r; //Default Constructor

//     //You can write constructor on your own

//     /* There are 4 types of Constructors
//     1. Default Constructor
//     2. Non-parameterized Constructor
//     3. Parameterized Constructor
//     4. Copy Constructor
//     */
//    //See More in the Next Code Part

//     r.setLength(-10);
//     r.setBreadth(-5);

//     cout <<"Length is " << r.getLength() <<endl;
//     cout <<"Breadth is " << r.getBreadth() << endl;
//     cout << "Area is " << r.area() <<endl;
//     cout << "Perimeter is " << r.perimeter() <<endl;
// }




// #include <iostream>

// using namespace std;

// class Rectangle
// {
// private:
//     int length;
//     int breadth;
// public:
//     void setLength(int l){ 
//         if(l >= 0)
//             length = l;
//         else
//             length = 0;
//         }
//     void setBreadth(int b){
//         if( b >= 0)
//             breadth = b;
//         else
//             breadth = 0;
//         }
//     Rectangle(){
//         length = 0;
//         breadth = 0;
//     }
//     Rectangle(int l = 0, int b = 0){
//         setLength(l);
//         setBreadth(b);
//     }
//     Rectangle(Rectangle &rect){
//         length = rect.length;
//         breadth= rect.breadth;
//     }
// };

// int main() {
//     // Rectangle r;
//     // Rectangle r();
//     Rectangle r(10,5);
// }




// #include<iostream>

// using namespace std;

// class Rectangle
// {
//     private:
//         int length;
//         int breadth;
//     public:

//     Rectangle (int l = 1, int b = 1) {
//         setLength(l);
//         setBreadth(b);
//     }
//     Rectangle(Rectangle &r)
//     {
//         length = r.length;
//         breadth = r.breadth;
//     }


//         void setLength(int l){
//             if(l > 0)
//                 length = l;
//             else
//                 length = 1;
//         }
//         void setBreadth(int b){
//             if(b > 0)
//                 breadth = b;
//             else
//                 breadth = 1;
//         }
//         int getLength() { return length;}
//         int getBreadth() { return breadth;}

//         int area (){
//             return length * breadth;
//         }
//         int perimeter() {
//             return 2 * (length + breadth);
//         }
// };

// int main() {
//     Rectangle r1(10,5);
//     Rectangle r2(r1);
//     cout << r2.area() << endl;
// }



// #include <iostream>

// using namespace std;

// class Rectangle
// {
//     private:
//         int length;
//         int breadth;
    
//     public:
//         Rectangle(); //Non Parameterized Constructor
//         Rectangle(int l = 1, int b = 1); //Parameterized Constructor
//         Rectangle(Rectangle &r); //Copy Constrtuctor 
//         void setLength(int l); //Mutators
//         void setBreadth(int b); //Mutators
//         int getLength(); //Accessor
//         int getBreadth(); //Accessor
//         int area(); //Facilitators
//         int perimeter(); //Facilitators
//         int isSquare(); //Inspective Function or Enquiry
//         ~Rectangle(); //Destructor
// };

// int Rectangle::perimeter(){
//     return 2 * (length + breadth);
// }

// int main() {
//     Rectangle r(10,5);
//     // cout << r.area() <<endl;
//     cout << r.perimeter() <<endl;
// }



// #include <iostream>

// using namespace std;

// class Rectangle
// {
//     private:
//         int length;
//         int breadth;
//     public:
//         Rectangle();    //Constructors
//         Rectangle(int l, int b);    //Constructors
//         Rectangle(Rectangle &r);    //Constructors
//         int getLength() {return length;};    //Accessors
//         int getBreadth() {return breadth;};   //Accessors
//         void setLength(int l);      //Mutators
//         void setBreadth(int b);     //Mutators
//         int area();             //Facilitators
//         int perimeter();        //Facilitators
//         bool isSquare();        //Inspective Function
//         ~Rectangle();           //Destructors
// };



// int main() 
// {
//     Rectangle r1(10,10);
//     cout << "Area is " << r1.area() << endl;
//     if(r1.isSquare())
//         cout << "Yes" <<endl;
//     else
//         cout << "No" <<endl;
// }


// Rectangle::Rectangle()
// {
//     length = 1;
//     breadth = 1;
// }

// Rectangle::Rectangle(int l, int b)
// {
//     length = l;
//     breadth = b;
// }

// Rectangle :: Rectangle(Rectangle &r)
// {
//     length = r.length;
//     breadth = r.breadth;
// }

// void Rectangle::setLength(int l)
// {
//     length = l;
// }

// void Rectangle::setBreadth(int b)
// {
//     breadth = b;
// }

// int Rectangle::area()
// {
//     return length * breadth;
// }

// int Rectangle::perimeter()
// {
//     return 2*(length + breadth);
// }

// bool Rectangle::isSquare() 
// {
//     return length == breadth;
// }

// Rectangle::~Rectangle()
// {
//     cout << "Rectangle Destroyed" << endl;
// }



// #include<iostream>

// using namespace std;

// class Rectangle {
//     private: 
//         int length;
//         int breadth;
//     public:
//         Rectangle(int length, int breadth)
//         {
//             this->length = length;
//             this->breadth = breadth;
//         }

//         int area(){
//             return length * breadth;
//         }

//         int perimeter(){
//             return 2*(length + breadth);
//         }
// };

// int main(){
//     Rectangle r1(10,5);
//     cout << "Area is " << r1.area();
//     return 0;
// }




// #include <iostream>

// using namespace std;

// class Student
// {
//     private:
//         int roll_no;
//         string name;
//         int mathsMarks;
//         int phyMarks;
//         int chemMarks;
//     public:
//         Student(int r, string n, int m, int p, int c)
//         {
//             roll_no = r;
//             name = n;
//             mathsMarks = m;
//             phyMarks = p;
//             chemMarks = c;
//         }
//         int total(){
//             return mathsMarks + phyMarks + chemMarks;
//         }
//         char grade()
//         {
//             float average = total()/3;
//             if (average > 60)
//             {
//                 return 'A';
//             }
//             else if (average >= 40 && average < 60)
//             {
//                 return 'B';
//             }
//             else
//                 return 'C';
//         }
// };

// int main(){
//     int roll_no;
//     string name;
//     int m,p,c;

//     cout << "Enter Roll Number of a Student: ";
//     cin >> roll_no;
//     cout << "Enter Name of the Student: ";
//     cin >> name;
//     cout << "Enter marks of all 3 subjects";
//     cin >> m >> p >> c;

//     Student s(roll_no, name, m,p,c);
//     cout << "Total Marks: "<<s.total()<<endl;
//     cout << "Grade of Student: " << s.grade() <<endl;
//     return 0;
// }