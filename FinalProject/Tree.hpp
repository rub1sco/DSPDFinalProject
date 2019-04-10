#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include "Node.hpp"
#include <iostream>

using std::cout;
using std::endl;

class Tree{
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
    void InsertNode(Data _data, string _key);
    void InsertNode(Data _data,Node* root,string key);
    bool removeNode(Node& node);
    bool modifyNode(Node& node);
    bool searchTree(Node& node, string key);
    void SortTree(Node& node, string key);
    bool isEmpty();
};

#endif /* Tree_hpp */

