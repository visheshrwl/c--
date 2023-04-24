#include<iostream>
using namespace std;

class Complex{
    private:
        int real, img;
    public:
        Complex(int r = 0, int i = 0){
            real = r;
            img = i;
        }
        friend ostream & operator<<(ostream &out, Complex &c1);
        friend istream & operator>>(istream &in, Complex &c1);
};

ostream & operator<<(ostream &out, Complex &c1){
    out<<c1.real<<"+i"<<c1.img<< endl;
    return out;
}

istream & operator>> (istream &in, Complex &c1){
    in>>c1.real;
    in>>c1.img;
    return in;
}

int main(){
    Complex c1(10,5);
    int x = 10;
    cout << x <<endl;
    cout << c1;
    operator<<(cout, c1);
    cin >> c1;
    cout << c1 <<endl;
}