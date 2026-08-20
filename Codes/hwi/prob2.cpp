#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int solve(int N, int C, vector<int> A) {
    int minnum = INT_MAX;
    int maxnum = INT_MIN;
    int cursum = 0;
    int tank;
    for(int i : A){
        cursum = i + cursum;
        maxnum = max(cursum, maxnum);
        minnum = min(cursum, minnum);
    }
    if(minnum < 0){
        minnum = minnum * (-1);
    }
    int x = minnum;
    
    while(x < 0 || x > C){
        tank = x;
        for(i : A){
            tank = tank + i;
            if(tank < 0 || tank > C){
                cout << "failed";
            }
            else{
                return x;
            }
        }
        x++;
    }
    
}

int main() {
    int N = 4;
    int C = 5;
    vector<int> A = {-1, 1, 1, -1};
    int answer = solve(N, C, A);
    cout << answer << endl;
    return 0;
}