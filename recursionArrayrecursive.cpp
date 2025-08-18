//print array recursively.
#include <iostream>
using namespace std;
void f(int *arr,int idx,int n){
    //base case
    if(idx==n)return;
    //selfwork
    cout<<arr[idx]<<endl;
    //assumption
    f(arr,idx+1,n);
}
int main(){
    int n = 5;
    int idx = 0;
    int arr[]={1,2,3,4,5};
    f(arr,0,n);
    return 0;
}