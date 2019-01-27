//
//  naive_algo.hpp
//  search
//
//  Created by Prince Raj Kumar on 27/01/19.
//  Copyright © 2019 Prince Raj Kumar. All rights reserved.
//

#ifndef naive_algo_hpp
#define naive_algo_hpp

#include "string_operation.h"


class NaiveAlgo : public StringOperation {
    
public:
    /* returns the first occurance of pattern in the text string. */
    int search(std::string text, std::string pattern);
    
    /* returns the longest common substring of given two strings. */
    std::string lcs(std::string a, std::string b);
};

#endif /* naive_algo_hpp */
