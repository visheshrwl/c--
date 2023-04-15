#include <iostream>

using namespace std;

class Polygon {
protected:
    int width, height;

public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Polygon {
public:
    int calculate_area() {
        return (width * height);
    }
};

class Triangle : public Polygon {
public:
    int calculate_area() {
        return (width * height / 2);
    }
};

int main() {
    Polygon* poly1 = new Rectangle();
    poly1->set_value(5, 10);
    cout << "Area of Rectangle: " << poly1->calculate_area() << endl;
    
    Polygon* poly2 = new Triangle();
    poly2->set_value(5, 10);
    cout << "Area of Triangle: " << poly2->calculate_area() << endl;

    delete poly1;
    delete poly2;
    
    return 0;
}


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape {
protected:
    string name;

public:
    Shape(string n) {
        name = n;
    }

    virtual double area() = 0;

    virtual void display() {
        cout << "Shape: " << name << endl;
    }
};

class Circle : public Shape {
protected:
    double radius;

public:
    Circle(double r) : Shape("Circle") {
        radius = r;
    }

    double area() {
        return M_PI * pow(radius, 2);
    }

    void display() {
        Shape::display();
        cout << "Radius: " << radius << endl;
    }
};

class Rectangle : public Shape {
protected:
    double length, width;

public:
    Rectangle(double l, double w) : Shape("Rectangle") {
        length = l;
        width = w;
    }

    double area() {
        return length * width;
    }

    void display() {
        Shape::display();
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

class Triangle : public Shape {
protected:
    double base, height;

public:
    Triangle(double b, double h) : Shape("Triangle") {
        base = b;
        height = h;
    }

    double area() {
        return 0.5 * base * height;
    }

    void display() {
        Shape::display();
        cout << "Base: " << base << endl;
        cout << "Height: " << height << endl;
    }
};

int main() {
    Circle c(5);
    c.display();
    cout << "Area: " << c.area() << endl;

    Rectangle r(3, 4);
    r.display();
    cout << "Area: " << r.area() << endl;

    Triangle t(5, 8);
    t.display();
    cout << "Area: " << t.area() << endl;

    return 0;
}


#include <iostream>
#include <cmath>

using namespace std;

double area(double base, double height) { // right angle triangle
    return 0.5 * base * height;
}

double area(double side) { // equilateral triangle
    return 0.25 * sqrt(3) * pow(side, 2);
}

double area(double base, double side1, double side2) { // isosceles triangle
    double p = (base + side1 + side2) / 2.0;
    double height = 2.0 / base * sqrt(p * (p - base) * (p - side1) * (p - side2));
    return 0.5 * base * height;
}

int main() {
    double base, height, side1, side2;

    // Right angle triangle
    cout << "Enter base and height of right angle triangle: ";
    cin >> base >> height;
    cout << "Area of right angle triangle: " << area(base, height) << endl;

    // Equilateral triangle
    cout << "Enter side of equilateral triangle: ";
    cin >> side1;
    cout << "Area of equilateral triangle: " << area(side1) << endl;

    // Isosceles triangle
    cout << "Enter base, side1, and side2 of isosceles triangle: ";
    cin >> base >> side1 >> side2;
    cout << "Area of isosceles triangle: " << area(base, side1, side2) << endl;

    return 0;
}


#include <iostream>
#include <string>

using namespace std;

// Abstract class Student
class Student {
protected:
    string name;
    int rollNo;
public:
    virtual void display() = 0; // Pure virtual function
};

// Derived class Engineering
class Engineering : public Student {
private:
    string branch;
public:
    Engineering(string n, int r, string b) {
        name = n;
        rollNo = r;
        branch = b;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Branch: " << branch << endl;
    }
};

// Derived class Medicine
class Medicine : public Student {
private:
    string specialization;
public:
    Medicine(string n, int r, string s) {
        name = n;
        rollNo = r;
        specialization = s;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

// Derived class Science
class Science : public Student {
private:
    string subject;
public:
    Science(string n, int r, string sub) {
        name = n;
        rollNo = r;
        subject = sub;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No.: " << rollNo << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Engineering e1("John", 101, "Computer Science");
    Medicine m1("Jane", 102, "Cardiology");
    Science s1("David", 103, "Physics");

    // Creating array of base class pointers
    Student *students[3];

    // Initializing array with objects of derived classes
    students[0] = &e1;
    students[1] = &m1;
    students[2] = &s1;

    // Accessing and processing objects using base class pointers
    for (int i = 0; i < 3; i++) {
        students[i]->display();
        cout << endl;
    }

    return 0;
}
