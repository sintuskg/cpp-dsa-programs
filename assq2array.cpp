#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=7;      // length of the geven array
    int x=20;    // target of two sum 
    // bool ans=1;
    bool yes=false;
    //using for loop
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){ 
                yes=true;
                goto done;
            }
    
        } 
   
    }
    done:
      cout<< ( yes ? "exist":"not exist")<<endl;
      return 0;
}