#include <iostream>
using namespace std;
#include <vector>
#include <climits>

int main(){
    int n = 5;
    int arr[n] = {-1,23,8,-89,11};
    int Maxsum = INT_MIN;

    for(int str = 0; str < n; str++){
        int cursum = 0;
        for(int end = str; end < n; end++){

            cursum = cursum + arr[end];
            Maxsum = max(Maxsum,cursum);
        
        }

    }

    cout << Maxsum;

    return 0;
}
