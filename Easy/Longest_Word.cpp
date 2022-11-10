// Link: https://coderbyte.com/information/Longest%20Word

#include <iostream>
#include <string>
using namespace std;

string LongestWord(string sen){
    string longest = "";
    string current = "";
    for(int i = 0; i < sen.length(); i++){
        if((sen[i] >= 'a' && sen[i] <= 'z') || (sen[i] >= 'A' && sen[i] <= 'Z')){
            current += sen[i];
        }
        else{
            if(current.length() > longest.length()){
                longest = current;
            }
            current = "";
        }
    }
    if(current.length() > longest.length()){
        longest = current;
    }
    return longest;
}

int main() {
    cout << LongestWord("fun&!! time");
    return 0;
}