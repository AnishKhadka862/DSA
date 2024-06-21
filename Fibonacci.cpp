//Fibonacci Series Implementation using recursion
#include <iostream>
using namespace std;

int fibonacci (int n){
    
    if (n == 0 || n == 1){
        return n;
    }
    else
    return fibonacci(n-1) + fibonacci(n-2);
    }
    
    void print( int n){
        for (int i = 0; i < n; ++i){
            cout << fibonacci(i)<< endl;
        }
    }

int main(){
    cout << "enter the number to get the fibonacci series : " << endl;
    int n;
    cin >> n;
    print(n);
    return 0;
}
