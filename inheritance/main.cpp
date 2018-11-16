//
//  main.cpp
//  inheritance
//
//  Created by Sabina Adamska on 16/11/2018.
//  Copyright © 2018 Sabina Adamska. All rights reserved.
//
#include "product.hpp"
#include "book.hpp"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {

    product p1("Hobnobs", 133);
    //cout << p1.description() << ": " <<
    //fixed << setprecision(2) << (p1._price() / 100.0) << "pounds\n"
    book p2("Effective C++", 3167, "0-321-33487-6");
    print_product(cout, p1);
    print_product(cout, p2);
    product p3=p2;
    print_product(cout, p3);
    return 0;

}
