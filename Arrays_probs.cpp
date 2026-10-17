// ARRAYS IMPORTANT QUESTIONS

// MAXIMUM SUBARRAY SUM

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     for (int st = 0; st < n; st++){
//         for (int end = st; end<n; end++){
//             for (int i = st; i<=end; i++){
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

//  Bruts Force Approach
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int maxSum = INT8_MIN;
//     for (int st = 0; st < n; st++){
//         int currSum = 0;
//         for (int end = st; end<n; end++){
//             currSum += arr[end];
//             maxSum = max(maxSum, currSum);
           
//             }

//     }
//     cout << "maxSum = " << maxSum << endl;
//     return 0;
// }

// by using Kadane's Algorithm
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};
//     int maxSum = INT8_MIN;
//     for (int st = 0; st < n; st++){
//         int currSum = 0;
//         for (int end = st; end<n; end++){
//             currSum += arr[end];
//             maxSum = max(maxSum, currSum);
           
//             }

//     }
//     cout << "maxSum = " << maxSum << endl;
//     return 0;
// }

// PAIR SUM PROBLEM
//  Bruts Force Approach

// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int>pairSum(vector<int>nums, int target){
//     vector<int> ans;
//     int n = nums.size();
//     for (int i = 0; i<n; i++){
//         for (int j = i+1; j<n; j++){
//             if (nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }
// int main (){
//     vector <int> nums = {2, 7, 11, 15};
//     int target = 18;
//     vector<int> ans = pairSum(nums, target);
//     cout << ans[0] << " " << ans[1] << endl;
//     return 0;
// }

// Optimized Approach -- 2 pointer approach
// #include <iostream>
// #include <vector>
// using namespace std;
// vector <int> pairSum(vector<int> nums, int target){
//     vector<int> ans;
//     int n = nums.size();
//     int i = 0, j = n-1;
    
  
//     while (i < j){
//         int pairSum = nums[i] + nums[j];
//         if (pairSum > target){
//             j--;
//         }
//         else if (pairSum < target){
//             i++;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }

// int main(){
//     vector <int> nums = {2, 7, 11, 15};
//     int target = 26;
//     vector<int> ans = pairSum(nums, target);
//     cout << ans[0] << " " << ans[1] << endl;
//     return 0;
// }

// CONTAINER WITH MOST WATER
// #include <iostream>
// #include <vector>
// using namespace std;
// class Solution {
// public:
//     int maxArea(vector<int>& height) {
//         int maxWater = 0; // ans
    
//         for(int i=0; i<height.size(); i++){
//             for(int j=i+1; j<height.size(); j++){
//                 int w = j - i; // width
//                 int h = min(height[i], height[j]); // height
//                 int currWater = w * h; // area
//                 maxWater = max(maxWater, currWater);
//             }
//         }
//         return maxWater;
//     }
// };

// Product of Array Except Self
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);

        for(int i = 1; i<n; i++){
            prefix[i] = prefix[i -1] * nums[i-1];
        }
        for(int i=n-2; i>=0; i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }
        for(int i=0; i<n; i++){
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
};