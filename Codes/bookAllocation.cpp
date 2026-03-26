#include <iostream>
using namespace std;
#include <vector>

bool isValid(vector <int>& nums, int n, int m, int maxallowed){

int stu = 1;
int pages = 0;

for(int i = 0; i < n; i++){

	if(nums[i] > maxallowed){
	
		return 0;
    	}


	if(pages + nums[i] <= maxallowed){
		
		pages = pages + nums[i];
			
	} 

	
	else{
		stu ++;
		pages = nums[i];
		
		}
	

}
return stu > m ? false : true;

}






int allocatemin(vector <int>& nums, int n, int m){

if(m > n){
    return -1;
    }

int sum = 0;
for(int i = 0; i < n; i++)
{sum = sum + nums[i];}

int str = 0;
int end = sum;
int ans = -1;

while(str<=end){

int mid = str + (end - str)/2;

if(isValid(nums,n,m,mid)){

end = mid - 1;
ans = mid;

}

else{
str = mid + 1;
}



}
return ans;

}

int main(){
vector <int> a = { 2,3,1,4};
int n = 4;
int m = 3;

cout << allocatemin(a,n,m);
return 0;
} 












