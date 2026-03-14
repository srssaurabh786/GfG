/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
     Node * ArraytoBST(vector<int> & arr, int start, int end) {
        // Base Case
        if(start > end) return nullptr;
        
        // Calculating Mid Element
        int mid = start + (end - start) / 2;
        
        // New node with value as arr[mid];
        Node * temp = new Node(arr[mid]);
        
        // Building Left Side
        temp -> left = ArraytoBST(arr, start, mid - 1);
        
        // Building Left Side
        temp -> right = ArraytoBST(arr, mid + 1, end);
        
        // Returning address of current nde to calling function
        return temp;
    }
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        
       return  ArraytoBST(arr,0,arr.size()-1);
        
    }
};