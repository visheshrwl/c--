// #include<iostream>

// using namespace std;

// class Test
// {
//     private:
//         int a;
//     protected:
//         int b;
//     public:
//         int c;
// friend void func();
// };

// void func()
// {
//     Test t;
//     t.a = 15;
//     t.b = 10;
//     t.c = 5;
// }


// #include<iostream>
// using namespace std;

// class your;

// class My{
//     private:
//         int a = 10;
// friend your;
// };

// class your
// {
//     public:
//         My m;

//         void fun(){
//             cout << m.a;
//         }
// };


// #include<iostream>
// using namespace std;

// class Test
// {
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
// }

// class Your;

// class My{
//     private:
//     int a;
//     protected: int b;
//     public: int c;

//     friend Your;
// };

// class Your
// {
//     public:
//     My m;
//     void fun()
//     {
//         m.a = 10;
//         m.b = 10;
//         m.c = 10;
//     }
// };







#include <iostream>
using namespace std;
const int IDLE = 0;
const int INUSE = 1;
class C2; // forward declaration
class C1 {
	int status;
    public:
	void set_status(int state);
	int idle(C2 b);
};
class C2 {
	int status;
    public:
	void set_status(int state);
	friend int C1::idle(C2 b);
};
void C1::set_status(int state)
{	status = state;	}
void C2::set_status(int state)
{	status = state;	}
int C1::idle(C2 b)
{	if(status || b.status)
 		return 0;
	else
 		return 1;
}
int main()
{	C1 x;
	C2 y;
	x.set_status(IDLE);
	y.set_status(IDLE);
	if(x.idle(y))
 		cout << "Screen can be used.\n";
	else
 		cout << "In use.\n";
	x.set_status(INUSE);
	if(x.idle(y))
 		cout << "Screen can be used.\n";
	else
 		cout << "In use.\n";
	return 0;
}