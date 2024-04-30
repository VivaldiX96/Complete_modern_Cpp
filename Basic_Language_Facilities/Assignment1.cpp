#include <iostream>
#include "math_with_pointers.h"
using namespace std;

int main(){
    using namespace std;
    int x = 10;
    cout << &x << "\n";
    int * ptr = &x;
    cout << ptr << "\n";

    int a, b;
    int *ptr_a = &a;
    int *ptr_b = &b;
    // Add() function test
    cout << "Insert the first number for Add function:\n";
    cin >> a;
    
    cout << "Insert the second number for Add function:\n";
    cin >> b;
    
    int Add_result = Add(ptr_a, ptr_b);
    cout << "The sum calculated by AddVal function is: " << Add_result << "\n";

    // AddVal() function test
    cout << "Insert the first number for AddVal function:\n";
    cin >> a;
    cout << "Insert the second number for AddVal function:\n";
    cin >> b;
    int AddVal_result;
    AddVal(ptr_a, ptr_b, &AddVal_result);
    cout << "The sum calculated by AddVal function is: " << AddVal_result << "\n";
    return 0;

    // Swap() function test
    //a = 10, b = 20;
   
}

