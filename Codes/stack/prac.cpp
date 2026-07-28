#include <iostream>
using namespace std;
#include <stacks>
#include <vector>

int main(){
    vector<int> prices = {10,20,50,60, 80, 30};
    stack <int> s;
    vector<int> ans = {prices.size(), 0};

    for(int i = 0; i < prices.size(); i++){
        while(s.size() != 0  && prices[s.top()] < prices[i]  ){
            s.pop();
        }
        if(s.empty){
            ans[i] = i+1;
        }
        else{
            ans[i] = i - s.top()
        }
    }
}