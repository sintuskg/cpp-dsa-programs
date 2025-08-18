#include<iostream>
using namespace std;
// base case for the fabobachhi seried
int fib(int n){
    if(n == 1 || n == 0) return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    int result = fib(3);
    cout<<result<<endl;
    return 0;
}
