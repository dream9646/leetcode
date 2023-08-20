/* 1. 題目描述  */
{
   
}
/*Example*/
{

}
{
    題目鏈接： []
    難度： []
    主要概念： []
}
/*2. 解題思路*/ 
{
    初步思路： [
        // Just use c++ standard function reverse
        // Other trying is use stack. Because I think stack is reverse store way, (i.e. it First in First out, I just think it is reverse)
        class Solution {
        public:
            void reverseString(vector<char>& s) {
                stack<int> ans;
                for(char x:s){
                    ans.push(x);
                }
                for(char x:s){
                    x=ans.top();
                    ans.pop();
                }
                return;
                //return reverse(s.begin(),s.end());
            }
        };
    ]
    優化思路： []
    時間複雜度： []
    空間複雜度： []
}
/*3. 代碼實現*/

/*4. 關鍵收穫*/
{
    學到的新知識： []
    遇到的困難和解決方案： []
    自我反思： []
}
/*5. 參考資源*/
{
    [chatgpt]
}


