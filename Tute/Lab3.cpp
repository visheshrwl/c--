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

