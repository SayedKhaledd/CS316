//
// Created by seka5 on 4/26/2021.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    int *arr[n];
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        arr[i] = new int[size];
        for(int j=0;j<size;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }

    return 0;
}