// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n=numbers.size();
//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 int result=numbers[i]+numbers[j];
//                 if(result==target){
//                     return {i+1, j+1};
//                 }
//             }
//         }
//         return {};
        
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right = numbers.size() - 1;

        while(left < right) {

            int sum = numbers[left] + numbers[right];

            if(sum == target) {
                return {left + 1, right + 1};
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};
