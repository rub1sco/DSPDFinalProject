#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <string>

using std::string;


struct Data{
    int year;
    string Award;
    bool Winner;
    string Name;
    string Film;
    Data();
    Data(string _Award, bool _Winner, string _Name, string _Film);
};

class Node{
protected:
    string key;
    Data data;
    Node* LeftChild;
    Node* RightChild;
//    Node* Parent;       //TODO do we need a parent pointer or just left and right child?
    
public:
    Node();
    Node(int _year, string _Award, bool _Winner, string _Name, string _Film);
    Node(Data& _data);
    string GetKey(){return key;}
    void SetKey(string _key);
    Data GetData(){return data;}
    void SetData(Data& _data);
    Node* GetLeftNode(){return LeftChild;}
    void setLeftNode(Node& Node);
    Node* GetRightNode(){return RightChild;}
    void setRightNode(Node& Node);
    
};

#endif /* Node_hpp */
