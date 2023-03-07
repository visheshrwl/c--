// #include<iostream>
// using namespace std;

// class Test{
//     private: int a;
//     protected: int b;
//     public: int c;
//     friend void fun();
// };


// void fun()
// {
//     Test t;
//     t.a = 10;
//     t.b = 15;
//     t.c = 9;

//     cout << t.a <<endl <<t.b <<endl<<t.c;
// }

// int main(){
//     // Test t;
//     fun();
// }


// #include<iostream>
// using namespace std;

// class Your;

// class My{
//     private: int a;
//     protected: int b;
//     public: int c;
//     friend Your;
// };

// class Your{
//     public:
//         My m;
//         void fun()
//         {
//             m.a = 10;
//             m.b = 15;
//             m.c = 5;
//             cout << m.a <<endl << m.b <<endl<< m.c <<endl;
//         }
// };
// int main(){
//     Your y;
//     y.fun();
// }

// #include<iostream>
// using namespace std;

// class Test
// {
//     public:
//         int a;
//         static int count;
//         Test()
//         {
//             a = 10;
//             count++;
//         }
//         static int getCount(){
//             return count;
//         }
// };

// int Test :: count = 0;

// int main() {
//     Test t1,t2;
//     cout <<Test::getCount()<<endl;
//     cout <<t1.getCount()<<endl;
// }


// #include<iostream>
// using namespace std;

// class Innova
// {
//     public:
//         static int price;
//         static int getPrice()
//         {
//             return price;
//         }
// };

// int Innova::price = 20;

// int main(){
//     Innova i1,i2,i3,i4;
//     cout << i1.price<<endl;
//     cout << i1.getPrice()<<endl;
//     // cout << i2.price<<endl;
//     cout << Innova::getPrice()<<endl;
//     cout << Innova::price<<endl;

// }

// #include<iostream>
// using namespace std;

// class Student{
//     public:
//         int roll;
//         string name;
//         static int addNo;
//         Student(string n){
//             addNo++;
//             roll = addNo;
//             name = n;
//         }
//         void display(){
//             cout<<"Name "<<name<<endl<<"Roll "<<roll<<endl;
//         }
// };

// int Student::addNo = 0;

// int main(){
//     Student s1("Naman"),s2("Rohan"),s3("Ravi"),s4("Khan"),s5("Jhanvi");

//     s1.display();
//     s2.display();
//     s3.display();
//     s4.display();
//     s5.display();
//     cout <<"Number of Admissions " <<Student::addNo;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Student{
//     public:
//         int roll;
//         string name;
//         static int addNo;

//         Student(string n){
//             addNo++;
//             name = n;
//             roll = addNo;
//         }
//         void display(){
//             cout << "Name " << name<<endl<<"Roll no "<< roll<<endl;
//         }
// };

// int Student::addNo = 0;

// int main(){
//         Student s(" ");
//         s.display();
//     return 0;
// }
