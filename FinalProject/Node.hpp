#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <string>

struct Data{
    int year;
    std::string Award;
    std::string Winner;
    std::string Name;
    std::string Film;
};

class Node{
private:
    Data data;
    Node* LeftChild;
    Node* RightChild;
    Node* Parent;
    
public:
    Node();
    Node(Data& _data);
    Node* GetLeftNode(){return LeftChild;}
    void setLeftNode(Node& Node);
    Node* GetRightNode(){return RightChild;}
    void setRightNode(Node& Node);
    Node* GetParentNode(){return Parent;}
    void setParentNode(Node& Node);
    
    
    
};

#endif /* Node_hpp */
