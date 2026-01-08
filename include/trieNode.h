/*
    1. Constructor
        Takes - nothing
        does - initializes frequency to zero and isEndOfWord to false
    2. Destructor
        Takes - nothing
        does - loops through the children map and calls delete on each child pointer
        (recursive cleanup)

*/

#ifndef TRIENODE_H
#define TRIENODE_H
#include <unordered_map>
// map is like a container. maps one thing (character)
// to another (a pointer to another node )

class TrieNode
{
public:
    // this is a map where key is character abd value is memory add ie pointer to next node
    std::unordered_map<char, TrieNode *> childrem;
    int frequency;    // this tells us how popular a word is
    bool isEndOfWord; // tells us if word finished at this char yes or no
    TrieNode();       // constructor
    ~TrieNode();      // destructor
};

#endif