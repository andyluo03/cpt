#include <bits/stdc++.h>
using namespace std;
const int MOD = int(1e9) + 7;
const int MAXN = 1123456;

//TRIE
class TrieNode{
    public:
    vector<int> next;
    bool isWord;
    TrieNode(){
        next = vector<int>(26);
        isWord = false;
    }
    TrieNode(bool isWord){
        next = vector<int>(26);
        this->isWord = isWord;
    }
};