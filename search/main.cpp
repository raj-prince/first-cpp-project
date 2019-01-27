//
//  main.cpp
//  search
//
//  Created by Prince Raj Kumar on 27/01/19.
//  Copyright © 2019 Prince Raj Kumar. All rights reserved.
//

#include <iostream>
#include "string_operation.h"
#include "naive_algo.hpp"
#include "trie_algo.hpp"
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    unique_ptr<StringOperation> ptr_naive = make_unique<NaiveAlgo>(NaiveAlgo());
    string text = "princerajkumar";
    string pattern = "rajkumar";
    cout << ptr_naive->search(text, pattern) << endl;
    cout << ptr_naive->lcs(text, pattern) << endl;
    
    unique_ptr<StringOperation> ptr_trie = make_unique<Trie>(Trie());
    cout << ptr_trie->search(text, pattern) << endl;
    cout << ptr_trie->lcs(text, pattern) << endl;
    return 0;
}
