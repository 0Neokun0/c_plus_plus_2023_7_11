/*
    Function Overloading
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);

void print(int num){
    cout << "Printing int : " << num << endl;
}

void print(double num) {
    cout << "Printing double : " << num << endl;
}

void print(vector<string> v) {
    cout << "Printing vector of strings : ";
    for (auto s: v)
        cout << s + " ";
    cout << endl;
}

int main()
{
    //Start from below
    print(100); // int
    print('A');

    print(123.5);
    print(123.3F);

    return 0;
}