#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int y){
    if(y > 1){
        return fibonacci(y-1) + fibonacci(y-2);
    }
    return y;
}


   

