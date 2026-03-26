#include <iostream>
using namespace std;
#include <climits>
#include <vector>


int maxSubArray(vector<int>& nums) {
        int cursum = 0;
        int maxsum = INT_MIN;


        for(int p : nums){
            cursum = cursum + p;
            maxsum = max(maxsum,cursum);
            if(cursum < 0){
                cursum = 0;
            }
        }

        return maxsum;
        
}



int main(){


vector <int> nums = {3,4,5,6,9};


cout << maxSubArray(nums);

return 0;

}
