//
//  book.hpp
//  inheritance
//
//  Created by Sabina Adamska on 16/11/2018.
//  Copyright © 2018 Sabina Adamska. All rights reserved.
//

#ifndef book_hpp
#define book_hpp

#include "product.hpp"
#include <string>

class book : public product {
    const std::string _isbn;
    
public:
    //constructor has to init name and price
    book(const std::string &n, int p,
         const std::string &i);
    //override description, match the the method signature
    virtual std::string description()
        const override;
    
    virtual ~book() {}
    
};

#endif /* book_hpp */
