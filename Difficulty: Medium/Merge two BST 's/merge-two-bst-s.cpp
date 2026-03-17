/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  void Inorder(Node* root,vector<int>&ans)
  {
      if(!root)
      return;
      
      Inorder(root->left,ans);
      ans.push_back(root->data);
      Inorder(root->right,ans);
  }
    vector<int> merge(Node *root1, Node *root2) {
        // code here
        vector<int>ans1;
        vector<int>ans2;
        
        Inorder(root1,ans1);
        Inorder(root2,ans2);
        
        vector<int >ans;
        
        int i=0,j=0;
        
        while(i<ans1.size() && j<ans2.size())
        {
            if(ans1[i]<ans2[j])
            ans.push_back(ans1[i++]);
            else
            ans.push_back(ans2[j++]);
        }
        
        while(i<ans1.size())
        {
            ans.push_back(ans1[i++]);
        }
        
         while(j<ans2.size())
        {
            ans.push_back(ans2[j++]);
        }
        return ans;
        
    }
};