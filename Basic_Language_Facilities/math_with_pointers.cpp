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

void Swap(int *a, int *b){
    int new_b = *a;
    int new_a = *b;
    *a = new_a;
    *b = new_b;
}

void Factorial(int *a, int *result){
    int number = *a;
    int factorial;
    cout << "Input the number to make a factorial of: ";
    cin >> number;
    if (number < 0) // negative numbers case
        {
            cout << "A factorial can be only calculated for natural numbers";
        }
    else if (number == 0 || number == 1) // case: factorial of 0 or 1
        {
            cout << "Factorial is equal to 1";
        }
    else
        {
            factorial = 1;
            for(int i=1; i <= number; i++)
            {
                factorial = factorial * i;
            }
            cout << "The factorial of number " << number << " is equal to " << factorial;
        *result = factorial;
        };
        
}