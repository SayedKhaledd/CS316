//https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 1 && n <= 9) {

        string s[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("%s", s[n - 1].c_str());

    } else
        printf("Greater than 9");

    return 0;
}