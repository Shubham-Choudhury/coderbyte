// Link: https://coderbyte.com/information/Questions%20Marks

#include <iostream>
#include <string>
using namespace std;

string QuestionsMarks(string str){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= '0' && str[i] <= '9'){
            sum += str[i] - '0';
            count = 0;
        }
        else if(str[i] == '?'){
            count++;
        }
        if(sum == 10 && count != 3){
            return "false";
        }
        if(sum == 10 && count == 3){
            sum = 0;
            count = 0;
        }
    }
    return "true";
}

int main() {
    cout << QuestionsMarks("aa6?9");
    return 0;
}