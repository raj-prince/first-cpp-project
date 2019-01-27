//
//  naive_algo.cpp
//  search
//
//  Created by Prince Raj Kumar on 27/01/19.
//  Copyright © 2019 Prince Raj Kumar. All rights reserved.
//

#include "naive_algo.hpp"
#include <string>
#include <iostream>
#include <set>

using namespace std;

int NaiveAlgo::search(string text, string pattern) {
    size_t pattern_length = pattern.size();
    size_t text_length = text.size();
    if (pattern_length > text_length) {
        return -1;
    }
    for (int i = 0; i < text_length - pattern_length + 1; i++) {
        string sub_string = text.substr(i, pattern_length);
        if (sub_string == pattern) {
            return i;
        }
    }
    return -1;
}

string NaiveAlgo::lcs(string a, string b) {
    set<string> all_substring_a;
    size_t len_a = a.size();
    for (int i = 0; i < len_a; i++) {
        for (int j = i; j < len_a; j++) {
            string sub_a = a.substr(i, j - i + 1);
            all_substring_a.insert(sub_a);
        }
    }
    size_t len_b = b.size();
    for (unsigned long len = len_b; len > 0; len--) {
        for (int i = 0; i < len_b - len + 1; i++) {
            string sub_b = b.substr(i, len);
            if (all_substring_a.find(sub_b) != all_substring_a.end()) {
                return sub_b;
            }
        }
    }
    return string();
}




