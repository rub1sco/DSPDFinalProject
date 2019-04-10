#include "Tree.hpp"

Tree::Tree(){
    rootPtr = nullptr;
}

Tree::Tree(Node &Node){
    rootPtr = &Node;
}

Tree::~Tree(){
    if (rootPtr != nullptr){
        delete [] rootPtr;
    }
}

void Tree::setRootPtr(Node &node){
    rootPtr = &node;
}

bool Tree::InsertNode(Node* node, string key){
    Node* TreeNode = new Node;
    TreeNode = rootPtr;
    //if tree is empty
    if(TreeNode == nullptr){
//        TreeNode = node;
//        TreeNode -> SetKey(key);
        rootPtr = node;
        rootPtr -> SetKey(key);
        return true;
    }
    else{
        //if given key is less than current node key, place in left child
        if(node->GetData().Name > TreeNode ->GetData().Award){
            TreeNode -> setLeftNode(*node);
            TreeNode -> GetLeftNode() -> SetKey(key);
        }
        
        //else be placed in the right child
        TreeNode -> setRightNode(*node);
        TreeNode ->GetRightNode() -> SetKey(key);

    }
    
    return true;
}

bool Tree::removeNode(Node &node){
    
    return true;
}

bool Tree::modifyNode(Node &node){
    
    return true;
}

bool Tree::searchTree(Node &node, string key){
    
    return true;
}

bool Tree::isEmpty(){
    Node* TreeNode = new Node;
    TreeNode = rootPtr;
    
    if(TreeNode == nullptr){
        return true;
    }
    
    return false;
}

