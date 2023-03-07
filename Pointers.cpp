#include<iostream>
#include<cmath>
using namespace std;

class Triangle;

class Rectangle{
    int length;
    int breadth;
    string color;
    public:
        void setData(){
            cout << "Enter the length of Rectangle \n" ;
            cin >> length; 
            cout << "Enter the breadth of Rectangle \n" ;
            cin >> breadth; 
            cout << "Enter the color of Rectangle \n" ;
            cin >> color; 
        }
        int getLength(){
            return length;
        }
        int getBreadth(){
            return breadth;
        }
        friend void sumArea(Rectangle, Triangle); 
};

class Triangle{
    int s1,s2,s3;
    string color;
    public:
        Triangle(){
            color = "green";
        }
        void setData(int s1,int s2, int s3){
            this->s1=s1;
            this->s2=s2;
            this->s3=s3;
        }
        friend void sumArea(Rectangle, Triangle);
};

void sumArea(Rectangle rect, Triangle tri){
    float areaRect = rect.getLength() * rect.getBreadth();
    float sumTri =(float) (tri.s1 + tri.s2 + tri.s3)/2;
    float funarea =(float) sumTri*(sumTri - tri.s1)*(sumTri - tri.s2)*(sumTri - tri.s3);
    float areaTri =(float) sqrt(funarea);
    cout << sumTri <<endl;
    cout << areaRect << "\t" <<areaTri<< "\t"<< funarea <<endl;
}

int main(){
    Rectangle rect;
    Triangle tri;
    rect.setData();
    tri.setData(10,11,12);

    sumArea(rect, tri);
}
