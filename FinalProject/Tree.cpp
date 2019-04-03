#include "Tree.hpp"

Tree::Tree(){
    rootPtr = nullptr;
}

Tree::~Tree(){
    
}

void Tree::setRootPtr(Node &node){
    rootPtr = &node;
}

bool Tree::InsertNode(Node& node){
    
    return true;
}

bool Tree::removeNode(Node &node){
    
    return true;
}

bool Tree::modifyNode(Node &node){
    
    return true;
}
