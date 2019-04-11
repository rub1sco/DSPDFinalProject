#include "Tree.hpp"

Tree::Tree(){
    rootPtr = nullptr;
}

Tree::Tree(Node &Node){
    rootPtr = &Node;
}

Tree::~Tree(){
    if (rootPtr != nullptr){
        delete rootPtr;
    }
}

void Tree::setRootPtr(Node &node){
    rootPtr = &node;
}

void Tree::InsertNode(Data _data, string _key){

    //inserts node if rootptr is empty
    if(rootPtr == nullptr){
        Node* NewNode = new Node;
        NewNode -> SetKey(_key);
        NewNode -> SetData(_data);
        
        rootPtr = NewNode;
        
    }
    else{
        //calls overloaded insertNode function with rootPtr 
        InsertNode(_data, rootPtr, _key);
    }
}

void Tree::InsertNode(Data _data, Node *root, string key){
    
    if(key == root -> GetKey()){
//        cout << "value exists.." << endl; //Should we have error checking if key == root key? May cause duplicates.. right now it is unsorted. IE. Ruth Catterson 1929 and 1930.
    }
    
    //if key is less than the root key, insert as left child
    if(key < root -> GetKey()){
        //if left node is empty, insert node.
        if (root -> GetLeftNode() == nullptr){
            Node* LeftChild = new Node;
            LeftChild -> SetData(_data);
            LeftChild -> SetKey(key);
            root -> setLeftNode(LeftChild);
        }
        else{
            //if left child is not empty, calls overloaded InsertNode function
            InsertNode(_data, root -> GetLeftNode(), key);
        }
    }
    else{
        //if right node is empty, insert as right child
        if (root -> GetRightNode() == nullptr){
            Node* RightChild = new Node;
            RightChild -> SetData(_data);
            RightChild -> SetKey(key);
            root -> setRightNode(RightChild);
        }
        else{
            //if right child is not empty, calls overloaded InsertNode function
            InsertNode(_data, root -> GetRightNode(), key);
        }
    }

}

bool Tree::removeNode(string key){

    //checks if rootptr is empty, if so nothing to delete.
    if(rootPtr == nullptr){
        cout << "Nothing in tree to delete" << endl;
    }
    else{
        //if not empty, search with overloaded removeNode function
        removeNode(rootPtr, key);
    }
    return false;
}

bool Tree::removeNode(Node *root, string key){
    
    if(key == root -> GetKey()){
        Node* NodeToDelete = new Node;
        NodeToDelete = rootPtr;
        
        //if Node does not have any children
        if(NodeToDelete -> GetLeftNode() == nullptr && NodeToDelete -> GetRightNode() == nullptr){
            delete NodeToDelete;
            NodeToDelete = nullptr;
            return true;
        }
        
        //if node has two children
            //needs to reassign right childs branch to rootptr
            //needs to adjust the left child accordingly.
        
        //if node has only one child
            //assign the child to rootPtr
            //deletes old rootPtr
        
    }
    //if key is less than the rootPtr, search the left branch
    else if(key < root -> GetKey()){
        root ->setLeftNode(root -> GetLeftNode());
    }
    //if key is greater than the rootPtr, search right branch
    else if (key > root -> GetKey()){
        root -> setRightNode(root -> GetRightNode());
    }

    return false;
}


bool Tree::searchTree(Node &node, string key){
    
    
    return false;
}

void Tree::SortTree(Node &node, string key){
    
}

bool Tree::isEmpty(){
    Node* TreeNode = new Node;
    TreeNode = rootPtr;
    
    if(TreeNode == nullptr){
        return true;
    }
    
    return false;
}

