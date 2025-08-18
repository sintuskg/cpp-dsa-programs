//find the maximum element of the array usingg recursion
#include <iostream>
using namespace std;
int f(int *arr,int idx,int n){
    //base case
    if(idx == n-1){
        return arr[idx];
    }
    return max(arr[idx],f(arr,idx+1,n));
}
int main(){
    int n = 5;
    int arr[] = {1,2,3,4,5};
    cout<<f(arr,0,n);
    return 0;
}
