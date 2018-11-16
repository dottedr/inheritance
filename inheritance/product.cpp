//
//  product.cpp
//  inheritance
//
//  Created by Sabina Adamska on 16/11/2018.
//  Copyright © 2018 Sabina Adamska. All rights reserved.
//

#include "product.hpp"
#include <string> //already declared in hpp file, here just in case
#include <iostream>
#include <iomanip>
using namespace std;

product::product(const string &n, int p) :
    _name(n), _price(p) {}  //initialiser

void print_product(ostream &out, const product &p){ //does not work with &
    out << p.description() << ": " <<
        fixed << setprecision(2)<<
        (p.price()/100.0) << "pounds \n";
    
}


