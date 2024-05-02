#include <iostream>
#include <cmath>
#include <vector>
#include <numeric> 
using namespace std;

int find_pivot_idx(vector<int>& nums){
    int sumLeft = 0;
    int sumRight = accumulate(nums.begin(), nums.end(),0);

    for(int i=0;i<nums.size();i++){
        sumRight-=nums[i];
        if (sumLeft == sumRight){
            return i;
        }
        sumLeft+=nums[i];
    }
    return -1;
}

int main(){

    vector<int> nums = {1,7,3,6,5,6};
    vector<int> nums1 = {1,2,3};
    vector<int> nums2 = {2,1,-1};
    vector<int> nums3 = {4};

    int pivot_idx = find_pivot_idx(nums3);
    cout<<"The equillibrium point in array is - " <<pivot_idx<<endl;

    return 0;
}