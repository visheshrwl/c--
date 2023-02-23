// #include <iostream>

// using namespace std;

// struct Student {
//     string name;
//     int rollNo;
//     string degree;
//     string hostel;
//     float currentCGPA;

//     void addDetails() {
//         cout << "Enter student details: " << endl;
//         cout << "Name: ";
//         cin >> name;
//         cout << "Roll No: ";
//         cin >> rollNo;
//         cout << "Degree: ";
//         cin >> degree;
//         cout << "Hostel: ";
//         cin >> hostel;
//         cout << "Current CGPA: ";
//         cin >> currentCGPA;
//     }

//     void updateDetails() {
//         cout << "Enter updated student details: " << endl;
//         cout << "Name: ";
//         cin >> name;
//         cout << "Roll No: ";
//         cin >> rollNo;
//         cout << "Degree: ";
//         cin >> degree;
//         cout << "Hostel: ";
//         cin >> hostel;
//         cout << "Current CGPA: ";
//         cin >> currentCGPA;
//     }

//     void updateCGPA(float newCGPA) {
//         currentCGPA = newCGPA;
//     }

//     void updateHostel(string newHostel) {
//         hostel = newHostel;
//     }

//     void displayDetails() {
//         cout << "Student Details: " << endl;
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollNo << endl;
//         cout << "Degree: " << degree << endl;
//         cout << "Hostel: " << hostel << endl;
//         cout << "Current CGPA: " << currentCGPA << endl;
//     }
// };

// int main() {
//     Student student;
//     student.addDetails();
//     student.displayDetails();
//     student.updateCGPA(3.5);
//     student.updateHostel("Hostel B");
//     student.displayDetails();
//     return 0;
// }

// //Question 5

// #include <iostream>
// #include <string>

// using namespace std;

// class Student {
// private:
//     string name;
//     int rollNo;
//     string degree;
//     string hostel;
//     double currentCGPA;

//     void addDetails() {
//         cout << "Enter student details: " << endl;
//         cout << "Name: ";
//         cin >> name;
//         cout << "Roll No: ";
//         cin >> rollNo;
//         cout << "Degree: ";
//         cin >> degree;
//         cout << "Hostel: ";
//         cin >> hostel;
//         cout << "Current CGPA: ";
//         cin >> currentCGPA;
//     }

//     void updateDetails() {
//         cout << "Enter updated student details: " << endl;
//         cout << "Name: ";
//         cin >> name;
//         cout << "Roll No: ";
//         cin >> rollNo;
//         cout << "Degree: ";
//         cin >> degree;
//         cout << "Hostel: ";
//         cin >> hostel;
//         cout << "Current CGPA: ";
//         cin >> currentCGPA;
//     }

// public:
//     void updateCGPA(double newCGPA) {
//         currentCGPA = newCGPA;
//     }

//     void updateHostel(string newHostel) {
//         hostel = newHostel;
//     }

//     void displayDetails() {
//         cout << "Student Details: " << endl;
//         cout << "Name: " << name << endl;
//         cout << "Roll No: " << rollNo << endl;
//         cout << "Degree: " << degree << endl;
//         cout << "Hostel: " << hostel << endl;
//         cout << "Current CGPA: " << currentCGPA << endl;
//     }

//     void addAndUpdate() {
//         addDetails();
//         displayDetails();
//         updateCGPA(9.5);
//         updateHostel("Hostel B");
//         displayDetails();
//     }
// };

// int main() {
//     Student student;
//     student.addAndUpdate();
//     return 0;
// }





// // Question 7


// #include <iostream>
// using namespace std;

// class Complex{
//     private:
//         int real;
//         int img;
//     public:
//         Complex () {}
//         Complex(int r, int i){
//             real =r;
//             img = i;
//         }
//         void set(int r, int i){
//             real =r;
//             img = i;
//         }
//         void display() {
//             if(img>= 0){
//                 cout << real << " + "<< img << "i"<<endl;
//             }
//             else{
//                 cout << real << " - "<< -img<< "i" <<endl;
//             }
//         }
//         Complex sum(Complex c){
//             int r = real + c.real;
//             int i = img + c.img;
//             Complex result(r, i);
//             return result;
//         }
// };


// int main(){
//     Complex c1,c2;
//     c1.set(2,3);
//     c2.set(4,-1);
//     c1.display();
//     c2.display();

//     Complex result = c1.sum(c2);

//     cout << "Sum is ";
//     result.display();
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;



// class Student{
//     private:
//         string name;
//         string stream;
//         float marks[5];
//         float avgMarks;
//         char grade;
//     public:
//         void input();
//         void calAvg();
//         void calGrade();
//         void display();
// };

// void Student :: input(){
//     cout << "Enter the name of the student: ";
//     getline(cin, name);
//     cout << "Enter the stream of the student: ";
//     getline(cin, stream);
//     cout << "Enter the marks in five Subjects: ";
//     for(int i = 0; i<5; i++){
//         cin >> marks[i];
//     }
// }

// void Student:: calAvg(){
//     float sum = 0;
//     for(int i=0; i<5;i++){
//         sum += marks[i];
//     }
//     avgMarks = sum / 5;
// }

// void Student :: calGrade(){
//     if(avgMarks >= 90){
//         grade = 'A';
//     }
//     else if(avgMarks >= 80){
//         grade = 'B';
//     }
//     else if(avgMarks >= 70){
//         grade = 'C';
//     }
//     else if(avgMarks >= 60){
//         grade = 'D';
//     }
//     else{
//         grade = 'F';
//     }
// }

//  void Student :: display(){
//     cout << "Name: " << name <<endl;
//     cout << "Stream: " << stream <<endl;
//     cout << "Marks: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << marks[i] << " ";
//     }
//     cout << endl;
//     cout << "Average Marks: " << avgMarks <<endl;
//     cout << "Grade: " << grade <<endl;
// }

// const int a = 2;

// int main(){
//     Student s[a];
//     for (int i = 0; i < a; i++)
//     {
//         s[i].input();
//         s[i].calAvg();
//         s[i].calGrade();
//     }
//     for (int i = 0; i < a; i++)
//     {
//         s[i].display();
//     }
    
    
//     return 0;
// }


// #include<iostream>

// using namespace std;

// class Rectangle
// {
// private:
//     int x;
// public:
//     void getData(int a){
//         x = a;
//     }
// };

// struct Rectangle2
// {
    
// };


// int main(){
//     Rectangle r;

// }

#include<iostream>
int x = 30; //Global Variable

class Rectangle{
    public:
        int x = 10;
};



int main(){
    int x = 20;

    Rectangle rect;

    std::cout << ::x<< std::endl;
    std::cout << x <<std::endl;
    std::cout << rect.x ;
    }

