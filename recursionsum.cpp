#include <iostream>
using namespace std;
int sumAll(int n){
    if (n>=0 and n<=9) return n;
    return sumAll(n/10)+(n%10);
}
int main(){

    int result = sumAll(123);
    cout<<result;
    return 0;
}