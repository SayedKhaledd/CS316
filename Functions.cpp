
#include <iostream>
//https://www.hackerrank.com/challenges/c-tutorial-functions/problem
using namespace std;

int greatest(int, int, int, int);

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int temp = greatest(a, b, c, d);
    cout<<temp;
}

int greatest(int a, int b, int c, int d) {
    int temp = a;
    if (temp <= b)
        temp = b;
    if (temp <= c)
        temp = c;
    if (temp <= d)
        temp = d;
    return temp;
}