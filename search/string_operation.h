//
//  string_operation.h
//  search
//
//  Created by Prince Raj Kumar on 27/01/19.
//  Copyright © 2019 Prince Raj Kumar. All rights reserved.
//

#ifndef string_operation_h
#define string_operation_h

#include <string>

class StringOperation {
    
public:
    /* returns the first occurance of pattern in the text string. */
    virtual int search(std::string text, std::string pattern) = 0;
     
    /* returns the longest common substring of given two strings. */
    virtual std::string lcs(std::string a, std::string b) = 0;
};


#endif /* string_operation_h */
