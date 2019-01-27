//
//  trie_algo.hpp
//  search
//
//  Created by Prince Raj Kumar on 27/01/19.
//  Copyright © 2019 Prince Raj Kumar. All rights reserved.
//

#ifndef trie_algo_hpp
#define trie_algo_hpp

#include "string_operation.h"
#include <memory>

constexpr int CHILD = 26;

struct Node {
    
    std::shared_ptr<Node> child[CHILD];
    int val;
    
    Node(int _val = -1) {
        val = _val;
        for (int i = 0; i < CHILD; i++) {
            child[i] = nullptr;
        }
    }
};

class Trie : public StringOperation {
    
    std::shared_ptr<Node> root;
    
public:
    
    /* default constructor */
    Trie();
    
    /* destructor */
    ~Trie();
    
    /* return index of the pattern in the text */
    int search(std::string text, std::string pattern);
    
    /* return the longest common substring of string a and b. */
    std::string lcs(std::string a, std::string b);
    
    /* add a string in trie */
    void add(std::string a, int val);
    
    /* check the given string exist in trie or not. */
    int query(std::string);
};

#endif /* trie_algo_hpp */
