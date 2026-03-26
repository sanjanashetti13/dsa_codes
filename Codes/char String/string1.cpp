#include <iostream>
#include <string>
#include <climits>
#include <algorithm>
using namespace std;


string revstring(string s){

    string ans = "";
    int n = s.size();
    reverse(s.begin(), s.end());

    for(int i = 0; i < n; i++){
        string word = "";

        while(i < n && s[i] != ' '){
             word = word + s[i];
             i++;
        }

        reverse(word.begin(), word.end());

        if(word.length() > 0){
            ans = ans + " " + word;
        }

    }

    return ans.substr(1);
}



int main(){
    string st = "The Pen";
    cout << revstring(st);


    return 0;
}