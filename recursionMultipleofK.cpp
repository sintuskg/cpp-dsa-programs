//print the multiple on number of kth value

#include<iostream>
using namespace std;
void f(int num,int k){
    if(k==0) return;
    f(num,k-1);
    cout<<num*k<<" ";
}
int main(){
    f(12,5);
    return 0;

}