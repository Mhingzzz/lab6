#include<iostream>
#include<string>
using namespace std;

int main() {
    string text = "ABCDEF";
    text[3] = text[2];
    text[2] = text[3];
    cout << text + text;
    return 0;

}