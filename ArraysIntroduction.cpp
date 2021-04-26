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
    int n;
    cin >> n;
    /***
     * first method
     */
//    int arr[n];
//    for(int i=0;i<n;i++){
//        cin>>arr[i];
//
//    }
//    for(int i=n-1;i>=0;i--){
//        cout<<arr[i];
//        if(i!=0)
//            cout<<" ";
//    }
 /**
  * second method
  */
    int *ptr = (int *) malloc(sizeof(int) * n);
    for (int *ptr2 = ptr; ptr2 < ptr + n; ptr2++) {
        cin >> *ptr2;

    }
    for (int *ptr2 = ptr+n-1; ptr2 >= ptr ; ptr2--) {
        cout << *ptr2;
        if(ptr2!=ptr)
           cout<<" ";
    }


    return 0;
}
