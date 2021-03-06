//
//  book.cpp
//  inheritance
//
//  Created by Sabina Adamska on 16/11/2018.
//  Copyright © 2018 Sabina Adamska. All rights reserved.
//

#include "book.hpp"
#include <string>

using namespace std;

book::book (const string &n, int p, const string &i)
    : product(n, p), _isbn(i) {}


string book::description() const {
    return "" + product::description() + '"' + ", ISBN " + _isbn;
}

