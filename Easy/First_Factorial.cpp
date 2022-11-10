// Link: https://coderbyte.com/information/First%20Factorial

#include <iostream>
using namespace std;

int FirstFactorial(int num){
    int factorial = 1;
    for(int i = 1; i <= num; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {
    cout << FirstFactorial(8);
    return 0;
}