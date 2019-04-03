#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include "Node.hpp"

class Tree{
private:
    Node* rootPtr;
    
public:
    Tree();
    ~Tree();
    Node* GetRootPtr(){return rootPtr;}
    void setRootPtr(Node& node);
    bool InsertNode(Node& node);
    bool removeNode(Node& node);
    bool modifyNode(Node& node);
};

#endif /* Tree_hpp */
