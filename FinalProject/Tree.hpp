#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include "Node.hpp"

class Tree : public Node{
private:
    Node* rootPtr;
    
public:
    //constructors & deconstructors
    Tree();
    Tree(Node& _Node);
    ~Tree();
    
    //accessors and mutators
    Node* GetRootPtr(){return rootPtr;}
    void setRootPtr(Node& node);
    
    //member functions              //TODO instructions say to make these private with public accessors?
    bool InsertNode(Node* node, string key);
    bool removeNode(Node& node);
    bool modifyNode(Node& node);
    bool searchTree(Node& node, string key);
    void SortTree(Node& node, string key);
    bool isEmpty();
};

#endif /* Tree_hpp */

