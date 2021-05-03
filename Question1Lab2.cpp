#include <iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include <fstream>

using namespace std;

int main() {
    ofstream output("file_example.txt", ios::out);
    if(!output){
        cout<<"does not exist";
        exit(1);
    }

    cout << "enter first name, last name, your ID, weird code" << endl;
    string firstName, lastName, weirdCode;
    int id;
    while (cin >> firstName >> lastName >> id >> weirdCode) {
        output << firstName << ' ' << lastName << ' ' << id << ' ' << weirdCode << endl;
    }

}