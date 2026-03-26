#include <iostream>
#include <vector>
using namespace std;

int majority_element(vector<int>& nums) {
    int n = nums.size();
     int frequency = 0; 

    for (int i : nums) {
        

        for (int val : nums) {
            if (val == i) {
                frequency++;
            }
        }

        if (frequency > n / 2) {
            return i;   
        }
    }

    return -1;  // If no majority element exists
}

int main() {
    vector<int> nums = {1, 2, 3, 1, 1};

    int result = majority_element(nums);

    if (result != -1)
        cout << "Majority element is: " << result;
    else
        cout << "No majority element found";

    return 0;
}