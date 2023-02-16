// #include<iostream>

// using namespace std;

// class Complex
// {
//     private:
//         int real;
//         int img;
//     public:
//         Complex(int r = 0, int i = 0)
//         {
//             real = r;
//             img = i;
//         }

//         Complex operator+(Complex x)
//         {
//             Complex temp;
//             temp.real = real + x.real;
//             temp.img = img + temp.img;
//             return temp;
//         }
// };


// int main(int argc, char const *argv[])
// {
//     Complex c1(3,7);
//     Complex c2(5,4);
//     Complex c3;

//     c3 = c1 + (c2);
//     cout << c3;
//     return 0;
// }


#include <iostream>

using namespace std;

class Complex
{
    public:
        int real; 
        int img;
        Complex add(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
};


int main(){
    Complex c1,c2,c3;

    c1.real = 5; c1.img = 3;
    c2.real = 10; c2.img = 5;
    
    c3 = c1.add(c2);
    cout << c3.real << "+i"<< c3.img << endl;
}