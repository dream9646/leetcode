/* 1. 題目描述  */
{
    Write a function that reverses a string. The input string is given as an array of characters s.
   You must do this by modifying the input array in-place with O(1) extra memory.
Example 1:
    Input: s = ["h","e","l","l","o"]
    Output: ["o","l","l","e","h"]
Example 2:
    Input: s = ["H","a","n","n","a","h"]
    Output: ["h","a","n","n","a","H"]
 Constraints:
    1 <= s.length <= 105
    s[i] is a printable ascii character.
}
/*Example*/
{

}
{
    題目鏈接： [https://leetcode.com/problems/reverse-string/description/]
    難度： [Easy]
    主要概念： [Two Pointers, String]
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
        //
        class Solution {
        public:
            void reverseString(vector<char>& s) {
                int l=0,r=s.size()-1,n=s.size();
                char tmp;
                for(int i=0;i<n/2;i++){
                    
                    cout << "-----------" << endl;
                    cout << "l=\n\t" << s[l] ;
                    cout << "\nr=\n\t" <<s[r];
                    cout << endl; 
                    tmp=s[l];
                    s[l]=s[r];
                    s[r]=tmp;
                    cout << "-----------" << endl;
                }
                return;
                
            }
        };
        "這是我在測試的時候寫的代碼 
         如果是你來寫你會怎麼寫
        我指的是我打印出來判斷來思考 
        如果是你來寫測試項目 
        來測試每個環節你怎麼做 ? 
        你如何思考"
        ,"chatgpt:
            你好Mark！我是Jimmy Liao。

                看到你的代碼，我明白你正在嘗試反轉一個字符串，並且你使用了打印語句來觀察變量的變化。這是一個很好的調試方法。
                如果是我來寫這個代碼，我會做以下幾個改進：
                使用雙指針進行反轉：你已經定義了l和r，但在循環中沒有更新它們。我會在每次交換後更新這兩個指針。
                減少不必要的變量：n變量在這裡似乎沒有使用，所以我會刪除它。
                使用C++的交換函數：我會使用std::swap來交換兩個字符，使代碼更簡潔。
                調試信息的組織：我會更有組織地打印調試信息，以便更容易理解。

                以下是我的版本：
                class Solution {
                public:
                    void reverseString(vector<char>& s) {
                        int l = 0, r = s.size() - 1;
                        while (l < r) {
                            cout << "交換前: l = " << s[l] << ", r = " << s[r] << endl;
                            swap(s[l], s[r]);
                            cout << "交換後: l = " << s[l] << ", r = " << s[r] << "\n-----------" << endl;
                            l++;
                            r--;
                        }
                    }
                };
                測試思考
                對於測試，我會考慮以下幾個方面：

                邊界情況：例如空字符串或只有一個字符的字符串。
                一般情況：包括奇數和偶數長度的字符串。
                特殊字符：如果字符串中可能包含特殊字符，也應該測試它們。
                通過這些測試，我可以更全面地理解代碼的行為，並確保它在各種情況下都能正確工作。
                希望這對你有所幫助！如果有任何問題或需要進一步的解釋，請隨時提問。
        "
        "After asking chatgpt, it already be solved. Maybe this is too simple and why i don't think out it?
        I am too lazy to think? If I remember how to do it. I will try it, but if i forget it. I quit easzily and want to be support.
        pain make me progress, I have to try longer next time."


    ]
    優化思路： [None, this is too simple to enhance. I need to do is re-think it next time.]
    時間複雜度： [O(n/2)]
    空間複雜度： [O(1)]
}
/*3. 代碼實現*/
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> ans;
        for(char x : s) {
            ans.push(x);
        }
        for(int i = 0; i < s.size(); i++) {
            s[i] = ans.top();
            ans.pop();
        }
    }
};
// In fact, the first mind that use stack can work, but i have some coding error and don't deeply think it. So i just easy quit. SO shame to me.
"你的代碼實現部分展示了如何使用堆疊來反轉字符串。這是一個有效的方法，但由於題目要求O(1)的額外空間，所以使用堆疊可能不符合這一要求。雙指針方法是更符合題目要求的解法。"
/*4. 關鍵收穫*/
{
    學到的新知識： [我需要思考更多更努力]
    遇到的困難和解決方案： [堅持,試著思考到適應痛苦,嘗試思考跑步者效應(i.e.跑久了就不累了)]
    自我反思： [I need to do it realy hard not just cover. If just cover, it would be very shamed
                I realy need to insist longer.]
}
/*5. 參考資源*/
{
    [chatgpt]
}


