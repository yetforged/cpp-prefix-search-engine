#include "trieNode.h"

// 1. Constructor

TrieNode::TrieNode()
{
    frequency = 0;       // when node is created frequency is 0
    isEndOfWord = false; // when node is created it is not end of word
}

// 2. Destructor
TrieNode::~TrieNode()
{
    for (auto const &[key, val] : children)
    {
        delete val; // recursively delete all child nodes
    }
}