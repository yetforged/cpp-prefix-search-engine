/*
    1. insert(string word, int freq)
        takes - string (word), int (frequency)
        does - traverses the trie char by char, if char not exists, creates
            new node. at final char makes isEndOfWord true and sets/adds freq
    2. loadDatabase(string filename)
        takes - string (filename)
        does - opens file, reads line by line, parses word and num calls insert
        for each
    3. getSuggestions(string prefix)
        takes - string (prefix)
        returns - vector of pairs (word, frequency)
        does - a. navigates trie to end of prefix
              b. if prefix exists, calls helper to find all words below that point
    4. collectAllWords(TrieNode* curr, string currentPrefix, vector<Results>&results)
    private helper
        takes - current node, string built so far, ref to result list
        does - recursive dfs : explores every branch from curr node
        if hits a node where isEndOfWord is true : add that word and freq to list
    5. rankResults(vector<Results>& results)
    private helper
        takes -takes raw list of all possible completions
        does - sorts list based on freq (high to low) then trims top 5

*/