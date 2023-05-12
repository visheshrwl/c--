#include<iostream>
using namespace std;

int main(){
    int x = 10, y = 'a', z;


    try{
        if(y == 0)
            throw 1;
        z = x/y;
        cout <<z<<endl;
    }
    catch(int e){
        cout << "Division by Zero"<< '\t'<<e<<endl;
    }
    catch (...){
        cout << "ERR 404"<<endl;
    }
    return 0;
}