#include <iostream>
#include <math.h>
using namespace std;

// function of the area of circle.

double area(double radius){
    double result = 3.14*(pow(radius,2));
    return result;
}

// function to find the circumfreneces.

double circumfrence(double radius){
    double result = (2*3.14*radius);
    return result;
}

int main(){
 double radius;
 cout<<"Enter the radius here : ";
 cin>>radius;
 
 cout<<"The area of the circle is :- "<<area(radius)<<endl;
 cout<<"The circumfreneces of the circle is :- "<<circumfrence(radius)<<endl;


}