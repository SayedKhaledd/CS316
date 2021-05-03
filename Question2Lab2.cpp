#include <iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {
    ifstream input("file_example.txt", ios::in);
    ofstream output("file_copy.txt", ios::out);
    string firstName, lastName, weirdCode;
    int id;
    if(!output){
        cout<<"the output file does not exist";
        exit(1);
    }
    if(!input){
        cout<<"the input file does not exist";
        exit(1);
    }
    while(input >> firstName >>  lastName >>  id >>  weirdCode){
        output << firstName << ',' << lastName << ',' << id << ',' << weirdCode << endl;
        output << firstName << ';' << lastName << ';' << id << ';' << weirdCode << endl;


    }


}