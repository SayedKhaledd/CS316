//
// Created by seka5 on 5/3/2021.
//

#include <iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include <fstream>

using namespace std;

int main() {
    ifstream input("file_example.txt", ios::in);
    if (!input) {
        cout << "does not exist";
        exit(1);
    }
int counter=0;
    char c;
    while (input >> c) {
       if((c>=65 && c<=90 )||(c>=97 &&c<=122))
          counter++;
    }
    cout<<counter;

}