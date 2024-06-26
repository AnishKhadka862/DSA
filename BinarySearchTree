//Binary Search Tree Implementation
//Anish Khadka

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
                    break;
                }
                else if(newNode->value > temp->value && temp->right == NULL){
                    temp->right = newNode;
                    cout << " new node inserted as right child, value = " << newNode->value << endl;
                    break;
                }
                else if(newNode->value > temp->value){
                    temp = temp->right;
                    cout << " moved to the right child" << endl;
                    break;
                }
            }
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
    int val;
    cout << "enter the value of the new node" << endl;
    cin >> val;
    newNode1 -> value = val;
    newNode2 -> value = val + 2;
    newNode3 -> value = val - 4;
    newNode4 -> value = val + 6;
    bst.insert(newNode1);
    bst.insert(newNode2);
    bst.insert(newNode3);
    bst.insert(newNode4);
    
    return 0;
}
