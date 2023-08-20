/* 1. 題目描述  */
{
   "Given an array of integers nums which is sorted in ascending order, 
   and an integer target, write a function to search target in nums. 
   
   If target exists, then return its index. Otherwise, return -1.

    You must write an algorithm with O(log n) runtime complexity."

    "Example 1:
        Input: nums = [-1,0,3,5,9,12], target = 9
        Output: 4
        Explanation: 9 exists in nums and its index is 4
    Example 2:
        Input: nums = [-1,0,3,5,9,12], target = 2
        Output: -1
        Explanation: 2 does not exist in nums so return -1
    Constraints:
        1 <= nums.length <= 10^4
        -10^4 < nums[i], target < 10^4
        All the integers in nums are unique.
        nums is sorted in ascending order."
}
/*Example*/
{

}
{
    題目鏈接： [https://leetcode.com/problems/binary-search/]
    難度： [Easy]
    主要概念： [Array ,Binary Search]
}
/*2. 解題思路*/ 
{
    初步思路： [
        1.嘗試使用簡單的二元分配直接用中間的參數去判斷,
        在測試testcase直接timeout,這題重點應該是時間複雜度,但我不太會計算
        2.
        int mid=l+(r-l)/2;
        if(nums[mid]==target){
            return mid;
        }else if(nums[mid]>target){
            r=mid-1;
        }else if(nums[mid]<target){
            l=mid+1;
        }
        chatgpt "jimmy" 協助我完成此部分 我的二元分配條件錯誤 修正後即答案
    ]
    優化思路： [none]
    時間複雜度： [O(logn)]
    空間複雜度： [O(1)]
}
/*3. 代碼實現*/
  class Solution {
public:
    int search(vector<int>& nums, int target) {
        //nums=1,2,3,4,....
        //find out target in nums.
        // find nothing as -1
        //int ans=-1;
        int r=nums.size()-1,l=0;
        /*
        After use r=mid-1 from r--, r>l need to change to r>=l
        */
        while(r>=l){
            //cout << "------------------\n";
            int mid=l+(r-l)/2;
            /* 
            This happen a error that "mid should be l+(r-l)/2;"
            but I code it by l+(l-r)/2
            */ 
            //cout << "mid:\n\t" << nums[mid] << "\n";
            //cout << "r:\n\t" << nums[r] << "\n";
            //cout << "l:\n\t" << nums[l] << "\n";
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                r=mid-1;
            }else if(nums[mid]<target){
                l=mid+1;
            }
          //  cout << "------------------\n";    
        }
        //cout << endl;
        return -1;
    }
};
/*4. 關鍵收穫*/
{
    學到的新知識： []
    遇到的困難和解決方案： []
    自我反思： []

}
    /*
    hint:
        這一部分可以用來記錄你在解題過程中學到的新知識、遇到的困難和解決方案以及自我反思。這對於個人成長學習非常有價值。
            學到的新知識：
                你可以記錄關於二分搜尋法的一些細節，例如如何正確計算中間值等。
            遇到的困難和解決方案：
                你可以描述遇到的計算中間值的錯誤，以及如何通過修改計算方式來解決這個問題。
            自我反思：
                這裡可以記錄你對自己解題過程的反思，例如你對自己的哪些方面感到滿意，哪些方面認為可以改進等。"
    */
/*5. 參考資源*/
{
    [chatgpt]
}


