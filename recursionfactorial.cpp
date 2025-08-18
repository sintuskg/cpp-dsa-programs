#include <iostream>
using namespace std;

int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
        // return n*factorial(n-1);
    }
       int result =  n*factorial(n-1);
    return result;

}
int main(){
    int ans = factorial(4);
    cout<<ans;
    return 0;

}