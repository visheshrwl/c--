// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     ofstream fwrite;
//     string line;

//     fwrite.open("sample.txt");

//     while(fwrite){
//         getline(cin, line);

//         if(line == "-1")
//             break;
        
//         fwrite << line << endl;
//     }

//     fwrite.close();

//     ifstream fread;
//     fread.open("sample.txt", ios::app);

//     while(getline(fread, line)) {
//         cout << line << endl;
//     }

//     fread.close();

//     return 0;
// }

// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     fstream fio;

//     string line;

//     fio.open("sample.txt", ios::trunc | ios::out | ios::in);

//     while(fio){
//         getline(cin , line);

//         if(line == "-1")
//             break;
        
//         fio << line << endl;
//     }

//     fio.seekg(0, ios::end);

//     while(fio){
//         getline(fio, line);

//         cout << line << endl;
//     }
//     fio.close();
//     return 0;
// }

#include <iostream>
#include<fstream>

using namespace std;

int main(){
    int roll, fees;
    char name[50];

    cout << "Enter the roll number: " <<endl;
    cin >> roll;
    cout << "Enter the Name: " <<endl;
    cin >> name;
    cout << "Enter the Fees: " <<endl;
    cin >> fees;

    ofstream fout;
    fout.open("sample.csv");

    fout << roll <<endl;
    fout << name <<endl;
    fout << fees <<endl;

    fout.close();

    ifstream fin("sample.csv");

    fin >> roll;
    fin >> name;
    fin >> fees;

    fin.close();

    cout << endl << roll <<"\t" << name << "\t \t" <<fees<<endl;

    return 0;
}