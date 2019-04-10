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

    if(rootPtr == nullptr){
        Node* NewNode = new Node;
        NewNode -> SetKey(_key);
        NewNode -> SetData(_data);
        
        rootPtr = NewNode;
        
    }
    else{
        InsertNode(_data, rootPtr, _key);
    }
}

void Tree::InsertNode(Data _data, Node *root, string key){
    
    if(key == root -> GetKey()){
//        cout << "value exists.." << endl; //Should we have error checking if key == root key? May cause duplicates.. right now it is unsorted. IE. Ruth Catterson 1929 and 1930.
    }
    
    if(key < root -> GetKey()){
        if (root -> GetLeftNode() == nullptr){
            Node* LeftChild = new Node;
            LeftChild -> SetData(_data);
            LeftChild -> SetKey(key);
            root -> setLeftNode(LeftChild);
        }
        else{
            InsertNode(_data, root -> GetLeftNode(), key);
        }
    }
    else{
        if (root -> GetRightNode() == nullptr){
            Node* RightChild = new Node;
            
            RightChild -> SetData(_data);
            RightChild -> SetKey(key);
            root -> setRightNode(RightChild);
        }
        else{
            InsertNode(_data, root -> GetRightNode(), key);
        }
    }

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

