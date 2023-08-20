1. /* 題目描述 496. Next Greater Element I */
{
    The next greater element of some element x in an array
    is the first greater element that is to the right of x in the same array.
    You are given two distinct 0-indexed integer arrays nums1 and nums2, 
    where nums1 is a subset of nums2.
    For each 0 <= i < nums1.length, 
    find the index j such that nums1[i] == nums2[j] and 
    determine the next greater element of nums2[j] in nums2. 
    If there is no next greater element, then the answer for this query is -1.
    Return an array ans of length nums1.length such 
    that ans[i] is the next greater element as described above.
}
{
    nums1 中数字 x 的 下一个更大元素 是指 x 在 nums2 中对应位置 右侧 的 第一个 比 x 大的元素。
    给你两个 没有重复元素 的数组 nums1 和 nums2 ，下标从 0 开始计数，其中nums1 是 nums2 的子集。
    对于每个 0 <= i < nums1.length ，找出满足 nums1[i] == nums2[j] 的下标 j ，
    并且在 nums2 确定 nums2[j] 的 下一个更大元素 。如果不存在下一个更大元素，那么本次查询的答案是 -1 。
    返回一个长度为 nums1.length 的数组 ans 作为答案，满足 ans[i] 是如上所述的 下一个更大元素 。
}
/*Example*/
{
    Example 1:
    Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
    Output: [-1,3,-1]
    Explanation: The next greater element for each value of nums1 is as follows:
    - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
    - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
    - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
Example 2:
    Input: nums1 = [2,4], nums2 = [1,2,3,4]
    Output: [3,-1]
    Explanation: The next greater element for each value of nums1 is as follows:
    - 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
    - 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1.
Constraints:
    1 <= nums1.length <= nums2.length <= 1000
    0 <= nums1[i], nums2[i] <= 104
    All integers in nums1 and nums2 are unique.
    All the integers of nums1 also appear in nums2.
Follow up: Could you find an O(nums1.length + nums2.length) solution?
}
{
    題目鏈接： [https://leetcode.com/problems/next-greater-element-i/]
    難度： [Medium]
    主要概念： [ArrayStackMonotonic Stack]
}
/*2. 解題思路*/ 
{
    初步思路： [暴力解過了]
    優化思路： []
    時間複雜度： []
    空間複雜度： []
}
/*3. 代碼實現*/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        //find out nums1[i] in nums2[j] 
        //and find nums2[j]'s next greater val in num2;
        vector<int> ans(nums1.size(),-1);
        for(int i=0;i<nums1.size();i++){
           // cout << "now do " << i  << " and num1[i]="<< nums1[i] << "\n";
            int find_out=0;
            for(int j=0;j<nums2.size();j++){
                
                if(nums2[j]==nums1[i]){
                    find_out=1;
                }
               // cout << "------------\n";
                //cout << "now search in num2 j=" << j << " and num2[j]=" << nums2[j] << "\n"; 
                if(nums2[j]>nums1[i] && find_out==1){
                    ans[i]=nums2[j];
                    break;
                }
            }
        }
      //  cout << endl;
        return ans;
    }
};
/*4. 關鍵收穫*/
{
    學到的新知識： [單調棧]
    遇到的困難和解決方案： [暴力解寫完以後還是不會優化
                            不知道如何使用單調棧]
    自我反思： [優化想不出來直接問chatgpt
                其實還可以接受
                我發現我是在這塊能力不足
                但可以透過練習
                我只有有認知就好了]
}
/*5. 參考資源*/
{
    [chatgpt]
}


