//
//  trie_algo.cpp
//  search
//
//  Created by Prince Raj Kumar on 27/01/19.
//  Copyright © 2019 Prince Raj Kumar. All rights reserved.
//

#include "trie_algo.hpp"

using namespace std;

Trie::Trie() {
    root = make_shared<Node>(-1);
}

Trie::~Trie() {
    root.reset();
}

inline int get_ind(char a) {
    return (int) (a - 'a');
}

void Trie::add(string a, int val) {
    shared_ptr<Node> crawl = root;
    int len = static_cast<int>(a.size());
    for (int i = 0; i < len; i++) {
        int ind = get_ind(a[i]);
        if (crawl->child[ind] == nullptr) {
            crawl->child[ind] = make_shared<Node>(Node(val));
        }
        crawl = crawl->child[ind];
    }
}

int Trie::query(string a) {
    shared_ptr<Node> crawl = root;
    int len = static_cast<int>(a.size());
    for (int i = 0; i < len; i++) {
        int ind = get_ind(a[i]);
        if (crawl->child[ind] == nullptr) {
            return -1;
        }
        crawl = crawl->child[ind];
    }
    return crawl->val;
}

int Trie::search(string text, string pattern) {
    int len_text = static_cast<int>(text.size());
    for (int i = 0; i < len_text; i++) {
        string suffix_text = text.substr(i);
        add(suffix_text, i);
    }
    return query(pattern);
}

string Trie::lcs(string a, string b) {
    int len_a = static_cast<int>(a.size());
    for (int i = 0; i < len_a; i++) {
        string sub_a = a.substr(i);
        add(sub_a, i);
    }
    int len_b = static_cast<int>(b.size());
    for (int len = len_b; len > 0; len--) {
        for (int j = 0; j < len_b - len + 1; j++) {
            string sub_b = b.substr(j, len);
            if (query(sub_b) != -1) {
                return sub_b;
            }
        }
    }
    return string();
}
