#include<iostream>
using namespace std;
 
int main()
{
   float *p1, *p2, max;
   int n, i;
   cout<<" Enter the size of array :";
   cin>>n;
   p1=new float[n];
   p2=p1;
   cout<<" Enter "<<n<<" values in array\n";
   for(i=0; i<n; i++)
    cin>>*p1++;
    i=0;
    p1=p2;
    max = *p1;
    while(i<n)
    {
        if(max<*p1)
            max= *p1;
        *p1++;
        i++;
        
    }
    cout<<" the largest value is :"<<max;
    delete p1;

}