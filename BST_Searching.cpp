// BST searching algorithm using iteration

#include <iostream>
using namespace std;

class TreeNode{
    public:
    TreeNode *left;
    TreeNode *right;
    int value;
    //Default Constrctor
    TreeNode(){
        value = 0;
        left;
        right;
    }
    //parameterized constructor
    TreeNode(int v){
        left = NULL;
        right = NULL;
        value = v;
    }
};

class BST{
    public:
    TreeNode *root;
    //Default constructor
    BST(){
        root = NULL;
    };
    //check if our BST is empty
    bool isEmpty(){
    if (root == NULL){
        return true;
    }
    else{
        return false;
    }
    }
    
    //insertion method
    void insert(TreeNode *newNode){
        if (isEmpty()){
            root = newNode;
            cout << " New node inserted as root node, value = " << newNode->value << endl;
        }
        else{
            TreeNode *temp = root;
            while(temp != NULL){
                if (temp->value == newNode->value){
                    cout << "duplicate element. cannot proceed" << endl;
                    return;
                }
                else if(newNode->value < temp->value && temp->left == NULL){
                    temp->left = newNode;
                    cout << " new node inserted as left child, value = " << newNode->value << endl;
                    break;
                }
                else if(newNode->value < temp->value){
                    temp = temp->left;
                    cout << "moved to the left child" << endl;
                    
                }
                else if(newNode->value > temp->value && temp->right == NULL){
                    temp->right = newNode;
                    cout << " new node inserted as right child, value = " << newNode->value << endl;
                    break;
                }
                else if(newNode->value > temp->value){
                    temp = temp->right;
                    cout << " moved to the right child" << endl;
                    
                }
            }
        }
    }
    
    // Traversal of BST, Pre-Order (Node -> Left -> Right)
    void PreOrderTraversal(TreeNode *Node){
        if (Node == NULL){
            return;
        }
        cout << Node->value << " ";
        PreOrderTraversal(Node -> left);
        PreOrderTraversal(Node -> right);
    }
    
    // Traversal of BST, In-Order (Left -> Node -> Right)
    void InOrderTraversal(TreeNode *Node){
        if (Node == NULL){
            return;
        }
        InOrderTraversal(Node -> left);
        cout << Node -> value << " ";
        InOrderTraversal(Node -> right);
        
    }
    
    //Traversal of BST, Post-Order (Left -> Right -> Node)
    void PostOrderTraversal (TreeNode *Node){
        if (Node == NULL){
            return;
        }
        PostOrderTraversal( Node -> left);
        PostOrderTraversal (Node -> right);
        cout << Node -> value << " ";
        
    }
    
    //Searching in BST
    void Search(int key){
        TreeNode *temp = root;
        bool found = false;
        while ( temp!= NULL){
            if (key == temp->value){
                cout << "value found in the BST!!!" << endl;
                found = true;
                //update or delete method can be implemented here
                break;
            }
            else if (key < temp->value){
                temp = temp-> left;
            }
            else{
                temp = temp -> right;
            }
        }
        if (!found){
            cout << "value not found !!!" << endl;
        }
    }
};

int main()
{
    BST bst; // create a BST object named bst
    //cout << bst.isEmpty();
    TreeNode *newNode1 = new TreeNode();
    TreeNode *newNode2 = new TreeNode();
    TreeNode *newNode3 = new TreeNode();
    TreeNode *newNode4 = new TreeNode();
    TreeNode *newNode5 = new TreeNode();
    TreeNode *newNode6 = new TreeNode();
    int val1, val2, val3, val4, val5, val6, searchVal;
    cout << "enter the value of the new node" << endl;
    cin >> val1;
    cin >> val2;
    cin >> val3;
    cin >> val4;
    cin >> val5;
    cin >> val6;
    newNode1 -> value = val1;
    newNode2 -> value = val2;
    newNode3 -> value = val3;
    newNode4 -> value = val4;
    newNode5 -> value = val5;
    newNode6 -> value = val6;
    bst.insert(newNode1);
    bst.insert(newNode2);
    bst.insert(newNode3);
    bst.insert(newNode4);
    bst.insert(newNode5);
    bst.insert(newNode6);
    cout << endl;
    // cout << "Printing our BST in Pre-order traversal: " << endl;
    // bst.PreOrderTraversal(newNode1);
    // cout << endl;
    // cout << "Printing our BST in In-order traversal: " << endl;
    // bst.InOrderTraversal(newNode1);
    // cout << endl;
    // cout << "Printing our BST in Post-order traversal: " << endl;
    // bst.PostOrderTraversal(newNode1);
    // cout << endl;
    cout << "enter a value to search in the BST: " << endl;
    cin >> searchVal;
    bst.Search(searchVal);
    
    return 0;
}
