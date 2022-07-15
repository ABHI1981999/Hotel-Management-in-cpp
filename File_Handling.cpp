#include<bits/stdc++.h>
// #include<fstream>
using namespace std;


int main(){

    // Read from the file named check.txt

    // string s;
    // ifstream input("check.txt");
    // input>>s;
    // // To get whole line to be copied use getline 
    // getline(input,s);
    // cout<<s<<endl;


    string s1 , s11;
    // Searching for a string
    // If we read two input from a file then it will check it in conntiguous manner
    // while(input>>s1>>s11)
    // {
    //     if(s1=="ramu" && s11=="jammu"){
    //         system("cls");
    //         cout<<"MATCH FOUND"<<endl;
    //     }   
    // }
    // input.close();


    // while(input>>s1)
    // {
    //     if(s1=="This" ){
    //         system("cls");
    //         cout<<"MATCH FOUND"<<endl;
    //     }   
    // }
    // input.close();

    // If we want to append a string 
    // ofstream f1("check.txt",ios::app);
    // f1<<"This is appended string";





    // Write into the file named check.txt

    string s2 = "This is 2nd paragraph";
    ofstream out("check.txt");
    out<<s2;

        // If we dont make that folder compiler will make it by own
//   string s2 = "This is 2nd paragraph";
//     ofstream out("check1.txt");
//     out<<s2;
}