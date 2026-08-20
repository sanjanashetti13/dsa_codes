#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
#include <climits>

int solve(vector <int> v, int n, int k){

    unordered_map <int, int> umap;
    int distinct = 0;
    int cursum = 0;
    int maxsum = 0;
    n = v.size();
    int right;
    int left = 0;
    if(n == 0){
        return 0;
    }

    for(right = 0; right < n; right++){
        if(umap.find(v[right]) != umap.end()){
            umap[v[right]]++;
            
        }
        else{
            umap[v[right]] = 1;
            distinct++;
            
        }
        cursum = cursum + v[right];
        

        while(distinct > k){
            umap[v[left]]--; //dec the freq
            cursum = cursum - v[left]; //remove from cursum
            if(umap[v[left]] == 0){
                distinct--;
            }
            
            left++; //remove the left

        }
        if(cursum < 0){
            cursum = 0;
        }
        maxsum = max(cursum, maxsum);
        
    }
    return maxsum;
    
}


int main() {
    int N = 5;
    int K = 2;
    vector<int> Arr = {1, 2, 2, 3, 2};

    int answer = solve(Arr,N, K);

    cout << answer << endl;

    return 0;
}