#include <iostream>
using namespace std;

int findDuplicate(vector<int> &arr) {
    int ans=0;
    //XOR all elements

    for (int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }

    //XOR 1 to n-1

    for (int i=1;i<arr.size();i++){
        ans=ans^i;
    }
    return ans;
}
