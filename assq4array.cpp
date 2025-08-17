#include <iostream>
#include <vector>
using namespace std;
int main(){

    int arr[]={-1,2,3,4,5,6};
    int n=6;
    int ans[6];
    int ans_ptr=0;
    int left_ptr=0;
    int right_ptr=n-1;

    while(left_ptr<right_ptr){
        if(arr[left_ptr] < arr[right_ptr]){
            ans[ans_ptr] = arr[left_ptr]*arr[left_ptr];
            left_ptr++;
            ans_ptr++;
        }else{
            ans[ans_ptr] = arr[right_ptr]*arr[right_ptr];
            right_ptr--;
            ans_ptr++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<endl;
        // cout<<ans[ans_ptr]<<endl;
        // cout<<ans_ptr<<endl;
    }
}