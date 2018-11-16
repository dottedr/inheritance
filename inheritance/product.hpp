//
//  product.hpp
//  inheritance
//
//  Created by Sabina Adamska on 16/11/2018.
//  Copyright © 2018 Sabina Adamska. All rights reserved.
//

#ifndef product_hpp
#define product_hpp

#include <ostream>
#include <string>

class product {
    const std::string _name;
    const int _price; //price in pennies, _ because accessor fuction has to be called price as well
    
public:
    product(const std::string &n, int p);
    
    int price() const {return _price;}
    
    virtual std::string description() const
    {return _name;} //the only chance to change that is in a constructor, virtual- description()can be overriden
    
    virtual ~product() //destructor, always add when having a virtual method
    {}
};

void print_product(std::ostream &out, const product &p);
#endif /* product_hpp */


// Java final - cpp by definition final, use virtual to be able to override
//destructor, does extra cleanup
