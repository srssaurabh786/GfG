// User function template in C++

/*

typedef struct Node
{
    int data;
    struct Node *left, *right;
} Node;


// A utility function to create a new tree node
Node* newNode( int data )
{
    Node* temp = (Node *)malloc( sizeof( Node ) );
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

*/

// class Solution {
//   public:
  
//   Node* BST(int pre[],int& index,int lower,int upper,int size)
//   {
//       if(index==size || pre[index]<lower|| pre[index]>upper)
//       return NULL;
       
//       Node *root=new Node(pre[index++]);
//       //left
//       root->left=BST(pre,index,lower,root->data,size);
//       //right
//       root->right=BST(pre,index,root->data,upper,size);
       
//       return root;
//   }
//     // Function that constructs BST from its preorder traversal.
//     Node* Bst(int pre[], int size) {
//         // code here
//         int index=0;
        
//         return BST(pre,index,INT_MIN,INT_MAX,size);
        
//     }
// };
class Solution {
public:

    Node* BST(int pre[], int &index, int lower, int upper, int size)
    {
        if(index >= size || pre[index] < lower || pre[index] > upper)
            return NULL;

        Node *root = new Node();
        root->data = pre[index++];
        root->left = root->right = NULL;

        // left subtree
        root->left = BST(pre, index, lower, root->data, size);

        // right subtree
        root->right = BST(pre, index, root->data, upper, size);

        return root;
    }

    Node* Bst(int pre[], int size) {
        int index = 0;
        return BST(pre, index, INT_MIN, INT_MAX, size);
    }
};






