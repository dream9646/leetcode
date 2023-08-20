1. 題目描述

題目鏈接： [LeetCode - The World's Leading Online Programming Learning Platform]
難度： [Medium]
主要概念： [ArrayStackMonotonic Stack]

2. 解題思路

初步思路： [我一開始想用暴力解,但是時間超時了]
優化思路： [這個題目是似乎是標準的單調棧題目,卡住了以後覺得煩直接問了chatgt]
時間複雜度： [使用stack來維持索引，每個元素只會被push和pop一次，因此時間複雜度為O(n)，其中 �n 是temperatures陣列的大小。]
空間複雜度： [此代碼主要使用了一個stack和一個結果向量，其大小與輸入的temperatures向量相同，因此空間複雜度也是 O(n)。]

3. 代碼實現

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //find out next  distance of next greater num
        int n=temperatures.size();
        const string SEPARATOR = "-----------------------\n";
        
        cout << SEPARATOR;

        vector<int> ans(n,0);
        /*for(int i=0;i<n;i++){
            cout << "now do [" << i << "] = [" << temperatures[i] << "]\n";
            cout << SEPARATOR;

            for(int j=i+1;j<n;j++){
                cout << "now compare [" << j << "] = [" << temperatures[j] << "]\n";
                if(temperatures[j]>temperatures[i]){
                    cout << SEPARATOR;

                    cout << "I find out distance !\n ";
                    cout << "ans[" << i << "]= [" << j-i << "]\n"; 
                    ans[i]=j-i;
                    cout << SEPARATOR;
                    break;

                }
             
            }
            cout << SEPARATOR;
        }
        cout << endl;*/
        stack<int> s; // Store the index of temperatures

    for (int i = 0; i < n; i++) {
        // While the stack is not empty and the current temperature is greater than the last one in the stack
        while (!s.empty() && temperatures[i] > temperatures[s.top()]) {
            int prevIdx = s.top(); // Get the index of the previous temperature
            s.pop();
            ans[prevIdx] = i - prevIdx; // Calculate the distance
        }
        s.push(i); // Push the current index into the stack
    }
        return ans;
    }
};

// 精簡且易讀的代碼實現，包括必要的註解

4. 關鍵收穫

學到的新知識： [單調棧]
遇到的困難和解決方案： [時間複雜度不夠的時候 可以考慮從資料結構裡面改變整體架構]
自我反思： [其實我覺得這題目單調棧我也不董 直接問應該是比較好的 但也證明了我知識量不夠 單調棧我應該看過但我也是不知道在幹嘛的]

5. 參考資源

[chatgpt]