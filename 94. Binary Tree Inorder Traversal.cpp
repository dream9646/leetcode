/* 1. 題目描述  */
{
   94. Binary Tree Inorder Traversal
        Given the root of a binary tree, return the inorder traversal of its nodes values.
}
/*Example*/
{
    Example 1:
        Input: root = [1,null,2,3]
        Output: [1,3,2]
    Example 2:
        Input: root = []
        Output: []
    Example 3:
        Input: root = [1]
        Output: [1]
    Constraints:
        The number of nodes in the tree is in the range [0, 100].
        -100 <= Node.val <= 100
    Follow up: Recursive solution is trivial, could you do it iteratively?
}
{
    題目鏈接： [https://leetcode.com/problems/binary-tree-inorder-traversal/description/]
    難度： [Easy]
    主要概念： [
        Stack
        Tree
        Depth-First Search
        Binary Tree
    ]
}
/*2. 解題思路*/ 
{
    初步思路： [
        In the beginning, I want to do it iteratively.
        But I just can not write it.
        So, I try to use dfs and just do it in the one function.
        It does not work again, then, I use dfs function to solve it.
        It is work now! 
        Then, i use this structre to do it in one function and do ititeratively 
        It work again! I think this is the way to think leetcode.
                ]
    優化思路： [iteratively]
    時間複雜度： [O(n)]
    空間複雜度： [O(n)]
}
/*3. 代碼實現*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    /*
    Error: void dfs(TreeNode &root,vector<int> &ans)
    在你的dfs函數中，參數root被定義為引用TreeNode &root。
    這意味著你期望root永遠不是空指針。
    但是在遞迴過程中，當遇到樹的葉節點時，
    root可能是nullptr，這時將其作為引用傳遞會導致錯誤。
    (i.e.當參數被定義為引用時，它必須引用某個已存在的對象。
    引用意味著它與它所引用的對象緊密相連，並且不能重新綁定到其他對象。)
    */
    void dfs(TreeNode *root,vector<int> &ans){
        if(root==nullptr){
            return;
        }
        dfs(root->left,ans);
        ans.push_back(root->val);
        dfs(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        dfs(root,ans);
        return ans;
    }
    //Follow up: Recursive solution is trivial, could you do it iteratively?
    // I need to do {left node check->midle->right-> in each node}
    // I need to find out count about root first? 
    //      yes: use O(n) to store it to array. Use it to do output?
                                                    // yes:
                                                    // no: 
    //      no: think more about it;  
    vector <int> ans;
    vector<int> inorderTraversal(TreeNode* root,vector<int> &ans) {
        while(root!=nullptr){
            if(root->left){
                inorderTraversal(root->left,ans);
                //ans.push_back(root->left->val);
            }else if(root->val){
                ans.push_back(root->val);
            }else if(root->right){
                inorderTraversal(root->right,ans);
               // ans.push_back(root->right->val);
            }
        }
        return ans;
    }
    //My iterative code is wrong locate behind the correct dfs function.
   // So, in fact , it do not work  and I am not find out it.
   // It is find out by chatgpt when i asking him to analy my note 
   {
    // Solution by chat gpt
   // 你的迭代函數中沒有使用任何棧或類似的數據結構來幫助控制訪問順序。
   // 在中序遍歷中，需要逐步深入左子樹，然後訪問根節點，最後深入右子樹。
   // 沒有一個暫存結構來保存這些步驟，你的代碼無法正確模擬這個過程。
   // 在while迴圈中，你的代碼缺乏適當的結構來移動到不同的節點。
   // 例如，一旦你訪問了左子節點，你的代碼需要一種方式來回到父節點並進入右子節點。在你的代碼中並沒有這樣的邏輯。
   // 你的迭代函數和遞迴函數的命名是一樣的，這會造成混淆和未定義的行為。
        //修正的迭代版本代碼：
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> ans;
            stack<TreeNode*> stk; // 使用棧來保存待訪問的節點
            TreeNode* current = root;

            // 持續遍歷，直到所有節點都被訪問
            while (current != nullptr || !stk.empty()) {
                // 遍歷左子樹
                while (current != nullptr) {
                    stk.push(current);
                    current = current->left;
                }

                // 訪問根節點
                current = stk.top();
                stk.pop();
                ans.push_back(current->val);

                // 遍歷右子樹
                current = current->right;
            }

            return ans;
        }
            /*
            解釋：
            使用棧來保存待訪問的節點，這樣可以在訪問左子樹後返回根節點，然後訪問右子樹。
            兩個內部循環確保了適當的中序遍歷順序：先遍歷左子樹，然後訪問根節點，最後遍歷右子樹。
            這個方法模擬了遞迴版本的行為，但是使用迭代而不是遞迴。*/
   } chatgpt_reply;

};
/*4. 關鍵收穫*/
{
    學到的新知識： [How to think:Divie question and change mind]
    遇到的困難和解決方案： [
        I want to do it well once. 
        But better way is divie it, 
        and do it many times by each time one step.
        ]
    自我反思： [Need Deeply think and patience]
}
/*5. 參考資源*/
{
    [None]
}


