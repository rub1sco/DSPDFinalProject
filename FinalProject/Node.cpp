#include "Node.hpp"

Data::Data(){
    year = 1993;
    Award = "Best Yeezes";
    Winner = "I guess so?";
    Name = "Dr. Dre";
    Film = "We Forgot about Dre.";
}

Data::Data(int _year, string _Award, bool _Winner, string _Name, string _Film){
    year = _year;
    Award = _Award;
    Winner = _Winner;
    Name = _Name;
    Film = _Film;
}

Node::Node(){
    LeftChild = nullptr;
    RightChild = nullptr;
}

Node::Node(int _year, string _Award, bool _Winner, string _Name, string _Film){
    data.year = _year;
    data.Award = _Award;
    data.Winner = _Winner;
    data.Name = _Name;
    data.Film = _Film;
    LeftChild = nullptr;
    RightChild = nullptr;
};

Node::Node(Data& _data){
    data = _data;
    LeftChild = nullptr;
    RightChild = nullptr;
//    Parent =  nullptr;
}

void Node::setLeftNode(Node* Node){
    LeftChild = Node;
}

void Node::setRightNode(Node* Node){
    RightChild = Node;
}

void Node::SetData(Data &_data){
    data = _data;
}

void Node::SetKey(string _key){
    key = _key;
}
