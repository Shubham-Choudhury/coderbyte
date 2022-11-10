// Link: https://coderbyte.com/information/First%20Reverse

#include <iostream>
#include <string>
using namespace std;

string FirstReverse(string str){
    string reversed = "";
    for(int i = str.length() - 1; i >= 0; i--){
        reversed += str[i];
    }
    return reversed;
}

int main() {
    cout << FirstReverse("coderbyte");
    return 0;
}