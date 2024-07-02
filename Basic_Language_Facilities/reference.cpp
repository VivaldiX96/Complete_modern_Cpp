#include <iostream>

using namespace std;

void Add(int a,int b, int &result){
    result = a + b;

} ;    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result){

} ;    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
} ;            //Swap two numbers through reference arguments