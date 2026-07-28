#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main(){
    vector <int> v = {3,4,2,6};
    stack <int> s;
    vector <int> ans(v.size(), 0);

    for(int i = 0; i < v.size(); i++){
        while(s.size() > 0 && s.top() > v[i] ){
            s.pop();
        }
        if(s.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = s.top();
        }
        s.push(v[i]);
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;

}