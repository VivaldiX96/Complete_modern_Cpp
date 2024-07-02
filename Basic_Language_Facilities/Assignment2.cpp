#include <iostream>
#include "reference.h"
using namespace std;

/*
void Add(int a,int b, int &result){
    result = a + b;

} */

int main(){
  // Add() function test
  int a, b, sum;
  int factorial;
  int swap_a, swap_b;

/*   cout << "Insert the first number for Add function:\n";
  cin >> a;

  cout << "Insert the second number for Add function:\n";
  cin >> b;
  
  Add(a, b, sum);
  
  cout <<"Sum is equal to: " << sum;
   */
cout << "Insert number a for Swap function:\n";
cin >> swap_a;

cout << "Insert number b for Swap function:\n";
cin >> swap_b;
  
Swap(swap_a, swap_b);
cout << "number a: " << swap_a << ", number b: " << swap_b << endl;
}