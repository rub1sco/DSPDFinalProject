#ifndef functions_hpp
#define functions_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "Tree.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

int menu();
Tree ReadCSVFile(string filename);


#endif /* functions_hpp */
