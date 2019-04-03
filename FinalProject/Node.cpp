#include "Node.hpp"


Node::Node(){
    LeftChild = nullptr;
    RightChild = nullptr;
    Parent = nullptr;
}

Node::Node(Data& _data){
    data = _data;
    LeftChild = nullptr;
    RightChild = nullptr;
    
}

void Node::setLeftNode(Node &Node){
    LeftChild = &Node;
}

void Node::setRightNode(Node& Node){
    RightChild = &Node;
}

void Node::setParentNode(Node &Node){
    Parent = &Node;
}
