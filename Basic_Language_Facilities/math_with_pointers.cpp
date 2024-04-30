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

//void Swap(in *a, int *b){

//}