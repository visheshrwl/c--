// #include<iostream>
// using namespace std;

// class Number {
//     protected: 
//         int a;
//     public:
//         void setA(int n){
//             a = n;
//         }
// };

// class Square : public Number{
//     public:
//     int sq(){
//        return a*a;
//     }
// };

// class Cube : public Number{
//     public:
//     int cube(){
//         return a*a*a;
//     }
// };

// int main(){
//     Square s;
//     Cube c;

//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     s.setA(n);
//     c.setA(n);

//     cout << s.sq()<<endl;
//     cout << c.cube()<<endl;
// }


// #include<iostream>
// using namespace std;

// class Fruit{
//     protected:
//     int num;
//     public:
//         void setNumFruits(int n){
//             num = n;
//         }
// };

// class Apples: public Fruit{
// public:
//     int getNumApples(){
//         return num;
//     }
// };

// class Mangoes: public Fruit{
// public:
// int getNumMangoes(){
//     return num;
// }
// };

// int main(){
//     Apples a;
//     Mangoes m;
//     int numApples, numMangoes;

//     cout << "Enter the number of  apples: ";
//     cin >> numApples;

//     cout << "Enter the number of  Mangoes: ";
//     cin >> numMangoes;

//     a.setNumFruits(numApples);
//     m.setNumFruits(numMangoes);

//     cout << "Number of Apples " <<a.getNumApples()<<endl;
//     cout << "Number of Mangoes " <<m.getNumMangoes()<<endl;
//     cout << "Number of Total Fruits " <<(a.getNumApples()+m.getNumMangoes())<<endl;
// }


// #include<iostream>
// using namespace std;

// class Student{
//     protected:
//         int Rollno;
//         string name;
//     public:
//         void getDetails(int r, string n){
//             Rollno = r;
//             name = n;
//         }
//         Student s(){};
//         void DisplayDetails(){
//             cout << Rollno << "\t";
//             cout << name << "\t";
//         }
// };

// class Marks : public Student{
//     protected:
//         int Subject1;
//         int Subject2;
//     public:
//         void GetMarks(int s1, int s2){
//             Subject1 = s1;
//             Subject2 = s2;
//         }
//         void DisplayMarks(){
//             cout << Subject1 << "\t";
//             cout << Subject2 << "\t";
//         }
// };

// class Result : public Marks{
//     private:
//         int TotalMarks;
//     public:
//         int CalculateResult(){
//             return TotalMarks/2;
//         }
//         void DisplayResult(){
//             cout << TotalMarks << endl;
//             if (TotalMarks < 66)
//             {
//                 cout << "Failed" << endl;
//             }
//             else if(TotalMarks >= 67 || TotalMarks<=200){
//                 cout << "PASSED"<< endl;
//             }
//             else{
//                 cout << "Enter Correct Marks"<<endl;
//             }
//         }
// };

// int main(){
//     int num_students;

//     cout << "Enter the number of Students";
//     cin >> num_students;

//     Result students[num_students];
// }


#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int RollNo;
    string Name;
public:
    void GetDetails() {
        cout << "Enter student roll number: ";
        cin >> RollNo;
        cout << "Enter name of the student: ";
        cin >> Name;
    }
    void DisplayDetails() {
        cout << RollNo << "\t\t" << Name << "\t";
    }
};

class Marks : public Student {
protected:
    int Subject1, Subject2;
public:
    void GetMarks() {
        cout << "Enter the marks of subject 1: ";
        cin >> Subject1;
        cout << "Enter the marks of subject 2: ";
        cin >> Subject2;
    }
    void DisplayMarks() {
        cout << Subject1 << "\t\t" << Subject2 << "\t\t";
    }
};

class Result : public Marks {
private:
    int TotalMarks;
public:
    void CalculateResult() {
        TotalMarks = Subject1 + Subject2;
    }
    void DisplayResult() {
        cout << TotalMarks << "\t\t\t";
        if (TotalMarks >= 50) {
            cout << "PASSED" << endl;
        }
        else {
            cout << "FAILED" << endl;
        }
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Result* students = new Result[n]; // dynamic allocation of array of objects
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i+1 << ":" << endl;
        students[i].GetDetails();
        students[i].GetMarks();
        students[i].CalculateResult();
    }

    // print table header
    cout << "\nRoll No.\tName\tSubject1\tSubject2\tTotal Marks Obtained\tResult" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

    // print student results
    for (int i = 0; i < n; i++) {
        students[i].DisplayDetails();
        students[i].DisplayMarks();
        students[i].DisplayResult();
    }
    delete[] students; // deallocating the dynamically allocated array
    return 0;
}
