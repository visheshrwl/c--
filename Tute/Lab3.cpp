#include <iostream>

using namespace std;

struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    void addDetails() {
        cout << "Enter student details: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Degree: ";
        cin >> degree;
        cout << "Hostel: ";
        cin >> hostel;
        cout << "Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails() {
        cout << "Enter updated student details: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Degree: ";
        cin >> degree;
        cout << "Hostel: ";
        cin >> hostel;
        cout << "Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateCGPA(float newCGPA) {
        currentCGPA = newCGPA;
    }

    void updateHostel(string newHostel) {
        hostel = newHostel;
    }

    void displayDetails() {
        cout << "Student Details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

int main() {
    Student student;
    student.addDetails();
    student.displayDetails();
    student.updateCGPA(3.5);
    student.updateHostel("Hostel B");
    student.displayDetails();
    return 0;
}

//Question 5

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    double currentCGPA;

    void addDetails() {
        cout << "Enter student details: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Degree: ";
        cin >> degree;
        cout << "Hostel: ";
        cin >> hostel;
        cout << "Current CGPA: ";
        cin >> currentCGPA;
    }

    void updateDetails() {
        cout << "Enter updated student details: " << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Degree: ";
        cin >> degree;
        cout << "Hostel: ";
        cin >> hostel;
        cout << "Current CGPA: ";
        cin >> currentCGPA;
    }

public:
    void updateCGPA(double newCGPA) {
        currentCGPA = newCGPA;
    }

    void updateHostel(string newHostel) {
        hostel = newHostel;
    }

    void displayDetails() {
        cout << "Student Details: " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }

    void addAndUpdate() {
        addDetails();
        displayDetails();
        updateCGPA(9.5);
        updateHostel("Hostel B");
        displayDetails();
    }
};

int main() {
    Student student;
    student.addAndUpdate();
    return 0;
}





// Question 7


#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;
    public:
        Complex () {}
        Complex(int r, int i){
            real =r;
            img = i;
        }
        void set(int r, int i){
            real =r;
            img = i;
        }
        void display() {
            if(img>= 0){
                cout << real << " + "<< img << "i"<<endl;
            }
            else{
                cout << real << " - "<< -img<< "i" <<endl;
            }
        }
        Complex sum(Complex c){
            int r = real + c.real;
            int i = img + c.img;
            Complex result(r, i);
            return result;
        }
};


int main(){
    Complex c1,c2;
    c1.set(2,3);
    c2.set(4,-1);
    c1.display();
    c2.display();

    Complex result = c1.sum(c2);

    cout << "Sum is ";
    result.display();
    return 0;
}

#include<iostream>
#include<string>
using namespace std;



class Student{
    private:
        string name;
        string stream;
        float marks[5];
        float avgMarks;
        char grade;
    public:
        void input();
        void calAvg();
        void calGrade();
        void display();
};

void Student :: input(){
    cout << "Enter the name of the student: ";
    getline(cin, name);
    cout << "Enter the stream of the student: ";
    getline(cin, stream);
    cout << "Enter the marks in five Subjects: ";
    for(int i = 0; i<5; i++){
        cin >> marks[i];
    }
}

void Student:: calAvg(){
    float sum = 0;
    for(int i=0; i<5;i++){
        sum += marks[i];
    }
    avgMarks = sum / 5;
}

void Student :: calGrade(){
    if(avgMarks >= 90){
        grade = 'A';
    }
    else if(avgMarks >= 80){
        grade = 'B';
    }
    else if(avgMarks >= 70){
        grade = 'C';
    }
    else if(avgMarks >= 60){
        grade = 'D';
    }
    else{
        grade = 'F';
    }
}

 void Student :: display(){
    cout << "Name: " << name <<endl;
    cout << "Stream: " << stream <<endl;
    cout << "Marks: ";
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << " ";
    }
    cout << endl;
    cout << "Average Marks: " << avgMarks <<endl;
    cout << "Grade: " << grade <<endl;
}

const int a = 2;

int main(){
    Student s[a];
    for (int i = 0; i < a; i++)
    {
        s[i].input();
        s[i].calAvg();
        s[i].calGrade();
    }
    for (int i = 0; i < a; i++)
    {
        s[i].display();
    }


    return 0;
}


#include<iostream>

using namespace std;

class Rectangle
{
private:
    int x;
public:
    void getData(int a){
        x = a;
    }
};

struct Rectangle2
{

};


int main(){
    Rectangle r;

}

#include<iostream>
int x = 30; //Global Variable

class Rectangle{
    public:
        int x = 10;
};



int main(){
    int x = 20;

    Rectangle rect;

    std::cout << ::x << std::endl;
    std::cout << x <<std::endl;
    std::cout << rect.x ;
    }


#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle() {
            length = 0;
            breadth = 0;
        }
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }
        Rectangle(int num) {
            length = num;
            breadth = num;
        }
        int area() {
            return length * breadth;
        }
};

int main() {
    Rectangle r1;
    Rectangle r2(5);
    Rectangle r3(4, 6);

    cout << "Area of r1: " << r1.area() << endl;
    cout << "Area of r2: " << r2.area() << endl;
    cout << "Area of r3: " << r3.area() << endl;

    return 0;
}


Q2

#include <iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int breadth;
    public:
        Rectangle(){
            length = 0;
            breadth = 0;
        }

        Rectangle(int num) {
            length = num;
            breadth = num;
        }

        Rectangle(int l, int b){
            length = l;
            breadth = b;
        }

        int area() {
            return length * breadth;
        }

        ~Rectangle() {
            cout << "Rectangle object destroyed" << endl;
        }
};

int main() {
    Rectangle r[3] = { Rectangle(), Rectangle(5), Rectangle(4, 6) };

    for (int i = 0; i < 3; i++) {
        cout << "Area of r" << i+1 << ": " << r[i].area() << endl;
    }

    return 0;
}


#include <iostream>
using namespace std;

class MyClass {
    public:
        MyClass() {
            cout << "Constructor called" << endl;
        }
        ~MyClass() {
            cout << " Destructor called" << endl;
        }
};

int main() {
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;
    MyClass obj4;
    MyClass obj5;
    MyClass obj6;

    return 0;
}

#include <iostream>
using namespace std;

class MyClass {
    private:
        int value;
    public:
        MyClass() {
            value = 0;
        }
        void setValue(int v) {
            value = v;
        }
        int getValue() {
            return value;
        }
        void printValue() {
            cout << "Value: " << value << endl;
        }
};

int main() {
    MyClass obj1;
    obj1.setValue(10);

    MyClass* ptr1 = &obj1;
    ptr1->printValue();

    MyClass* ptr2 = new MyClass;
    ptr2->setValue(20);
    (*ptr2).printValue();

    MyClass obj3;
    obj3.setValue(30);
    obj3.printValue();

    MyClass* ptr3 = &obj3;
    ptr3->printValue();

    return 0;
}

#include <iostream>
using namespace std;

class MyClass2;

class MyClass1 {
    private:
        int value;
    public:
        MyClass1(int v) {
            value = v;
        }
        friend void swapValues(MyClass1& obj1, MyClass2& obj2);
};

class MyClass2 {
    private:
        int value;
    public:
        MyClass2(int v) {
            value = v;
        }
        friend void swapValues(MyClass1& obj1, MyClass2& obj2);
};

void swapValues(MyClass1& obj1, MyClass2& obj2) {
    int temp = obj1.value;
    obj1.value = obj2.value;
    obj2.value = temp;
}

int main() {
    MyClass1 obj1(10);
    MyClass2 obj2(20);

    cout << "Before swapping:" << endl;
    cout << "obj1.value = " << obj1.value << endl;
    cout << "obj2.value = " << obj2.value << endl;

    swapValues(obj1, obj2);

    cout << "After swapping:" << endl;
    cout << "obj1.value = " << obj1.value << endl;
    cout << "obj2.value = " << obj2.value << endl;

    return 0;
}

#include <iostream>
using namespace std;

class MyClass2;

class MyClass1 {
    private:
        int value;
    public:
        MyClass1(int v) {
            value = v;
        }
        friend int addValues(MyClass1& obj1, MyClass2& obj2);
};

class MyClass2 {
    private:
        int value;
    public:
        MyClass2(int v) {
            value = v;
        }
        friend int addValues(MyClass1& obj1, MyClass2& obj2);
};

int addValues(MyClass1& obj1, MyClass2& obj2) {
    return obj1.value + obj2.value;
}

int main() {
    MyClass1 obj1(10);
    MyClass2 obj2(20);

    cout << "The sum of obj1.value and obj2.value is: " << addValues(obj1, obj2) << endl;

    return 0;
}

#include <iostream>
using namespace std;

class MyClass {
    private:
        int value;
    public:
        MyClass(int v) {
            value = v;
        }
        friend class FriendClass;
};

class FriendClass {
    public:
        void printValue(MyClass& obj) {
            cout << "The value of MyClass object is: " << obj.value << endl;
        }
};

int main() {
    MyClass obj(10);
    FriendClass fc;

    fc.printValue(obj);

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int *p = new int; // allocate memory for an integer
    *p = 10; // store value 10 in the allocated memory

    cout << "The value stored in the allocated memory is: " << *p << endl;

    delete p; // free the allocated memory

    return 0;
}
