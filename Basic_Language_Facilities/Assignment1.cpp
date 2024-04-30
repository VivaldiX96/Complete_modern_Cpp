#include <iostream>
using namespace std;

int Add(int *a, int *b){
    //cout << "Insert the first number for addition:\n";
    //cin >> *a;
    //cout << "Insert the second number for addition:\n";
    //cin >> *b;
    int sum = *a + *b;
    
    return sum;
}

void AddVal(int *a, int *b, int *result){
    
    int sum = *a + *b;
    *result = sum;
    
}

int main(){
    using namespace std;
    int x = 10;
    cout << &x << "\n";
    int * ptr = &x;
    cout << ptr << "\n";

    // Add() function test
    cout << "Insert the first number for Add function:\n";
    int a;
    cin >> a;
    int *ptr_a = &a;
    cout << "Insert the second number for Add function:\n";
    int b;
    cin >> b;
    int *ptr_b = &b;
    int Add_result = Add(ptr_a, ptr_b);
    cout << "The sum calculated by AddVal function is" << Add_result << "\n";

    // AddVal() function test
    cout << "Insert the first number for AddVal function:\n";
    int c;
    cin >> c;
    int *ptr_c = &c;
    cout << "Insert the second number for AddVal function:\n";
    int d;
    cin >> d;
    int *ptr_d = &d;
    int AddVal_result;
    AddVal(ptr_c, ptr_d, &AddVal_result);
    cout << "The sum calculated by AddVal function is: " << AddVal_result << "\n";
    return 0;
}

