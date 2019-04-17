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
    
    //overloaded Insert function which is used in the recursive call. Private
    void InsertNode(Data _data, Node* root, string key);
    
    //overloaded function which is called during the recursive call from removeNode(string). Private
    Node* removeNode(Node* root,string key);
    
public:
    //constructors & deconstructors
    Tree();
    Tree(Node& _Node);
    ~Tree();
    
    //accessors and mutators
    Node* GetRootPtr(){return rootPtr;}
    void setRootPtr(Node* node);
    
    //member functions              //TODO instructions say to make these private with public accessors?
    void InsertNode(Data _data, string _key);
    

    //main remove node which is used in the original call from user
    Node* removeNode(string key);
    
    //used to locate node with the specified key value. Will find the first value with provided key.
    bool searchTree(Node& node, string key);        //TODO.. should this pass node reference or tree reference?
    
    //used to sort Tree based on specified key value. This will be changed by user and should work for each Data field.
    void SortTree(Node& node, string key);          //TODO.. should this pass node reference or tree reference?
    
    //function to test if rootptr is nullptr.
    bool isEmpty();
};

#endif /* Tree_hpp */

