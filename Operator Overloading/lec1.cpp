#include<iostream>
using namespace std;

// a + ib
// a = Real Part
// b = Imaginary Part
// i = sqrt(-1)

class Complex
{
    public:
        int real, img;
        Complex(int r= 0, int i = 0){
            real = r;
            img = i;
        }
        Complex operator+(Complex X){
            Complex temp;
            temp.real = real + X.real;
            temp.img = img + X.img;
            return temp;
        }
        Complex operator-(Complex X){
            Complex temp;
            temp.real = real - X.real;
            temp.img = img - X.img;
            return temp;
        }
};


int main(){
    Complex c1(5,7);
    Complex c2(3,4);
    Complex c3, c4;

    c3 = c1 + c2;
    c4 = c1 - c2;

    cout << c3.real<< " + " <<c3.img<<"i" <<endl;
    cout << c4.real<< " + " <<c4.img<<"i" <<endl;
}