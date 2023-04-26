// #include <fstream>
// #include <iostream>
// using namespace std;

// int main() 
// {
//     ifstream ifs;
//     ifs.open("my.txt");

//     if (ifs.is_open())
//     {
//         cout << "File is opened" <<endl;
//     }
    

//     string name;
//     int roll;
//     string branch;

//     ifs >> name;
//     ifs >> roll;
//     ifs >> branch;

//     cout << name << " "<< roll << " " << branch;

//     if( ifs.eof()) cout << endl <<"End of file Reached";

//     ifs.close();

// }


// #include <fstream>
// #include <iostream>
// using namespace std;

// class Student{
//     public:
//         string name;
//         int roll;
//         string branch;

//         friend ofstream &operator<<(ofstream &ofs, Student &s);
//         friend ifstream &operator>>(ifstream &ifs, Student &s);
// };

// ofstream &operator<<(ofstream &ofs, Student &s){
//     ofs<<s.name<<endl;
//     ofs<<s.roll<<endl;
//     ofs<<s.branch<<endl;
//     return ofs;
// }
// ifstream &operator>>(ifstream &ifs, Student &s){
//     ifs>> s.name;
//     ifs>> s.roll;
//     ifs>> s.branch;
//     return ifs;
// }

// int main() 
// {
//     Student s1;

//     s1.name = "Vishesh";
//     s1.roll = 102216016;
//     s1.branch = "CSE";

//     ofstream ofs;
//     ofs.open("Student.txt");

//     ofs<<s1;

//     ofs.close();

//     ifstream ifs("Student.txt");
//     ifs >> s1;

//     cout << s1.name <<s1.roll << s1.branch;
//     ifs.close();
// }


#include<fstream>
#include <iostream>

using namespace std;

class Item
{
    private:
        string name;
        float price;
        int qty;
    public:
        Item(string n = 0, float p = 0, int q = 0) {}
        friend ifstream &operator >> (ifstream &fis, Item &i);
        friend ofstream & operator<< (ofstream &fos, Item &i);
        friend ostream & operator << (ostream &os, Item &i);
};

int main() {
    int n;
    string name;
    float price;
    int qty;
    cout << "Enter the number of Item(s): "<<endl;
    cin >> n;
    Item *list[n];
    cout << "Enter All item " <<endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter" <<i+1 << "Item Name , price and quantity";
        cin >> name;
        cin >>price;
        cin >> qty;
        list[i] = new Item(name, price, qty);
    }

    ofstream fos("Items.txt");
    for (int i =0; i< n; i++){
        fos << *list[i];
    }
    Item item;

    ifstream fis("Items.txt");
    for (int i = 0; i < n ; i++)
    {
        fis >> item;
        cout << "Item "<< i<< item<< endl;
    }
    Item::Item(string n,float p,int q)
{
    name=n;
    price=p;
    qty=q;
}
    
ofstream & operator<<(ofstream &fos,Item &i)
{
    fos<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return fos;
}
    
ifstream & operator>>(ifstream &fis,Item &i)
{
    fis>>i.name>>i.price>>i.qty;
    return fis;
}
    
ostream & operator<<(ostream &os,Item &i)
{
    os<<i.name<<endl<<i.price<<endl<<i.qty<<endl;
    return os;
        

}