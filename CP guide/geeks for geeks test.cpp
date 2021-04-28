// CPP program to display content of Trie
#include <iostream>
#include <string.h>
#define alpha_size 26
#define ARRAY_SIZE(a) sizeof(a) / sizeof(a[0])
  
using namespace std;
  
// Trie node
struct TrieNode 
{
    struct TrieNode* children[alpha_size];
  
    bool isLeaf;
};
  
// Returns new trie node (initialized to NULLs)
struct TrieNode* createNode()
{
    struct TrieNode* pNode = new TrieNode;
  
    for (int i = 0; i < alpha_size; i++)
        pNode->children[i] = NULL;
  
    pNode->isLeaf = false;
  
    return pNode;
};
  
// function to insert a node in Trie
void insert_node(struct TrieNode* root, char* key)
{
    int level;
    int length = strlen(key);
    struct TrieNode* pCrawl = root;
  
    for (level = 0; level < length; level++) 
    {
        int index = key[level] - 'a';
  
        if (pCrawl->children[index] == NULL)
            pCrawl->children[index] = createNode();
  
        pCrawl = pCrawl->children[index];
    }
  
    pCrawl->isLeaf = true;
}
  
// function to check if current node is leaf node or not
bool isLeafNode(struct TrieNode* root)
{
    return root->isLeaf != false;
}
  
// function to display the content of Trie
void display(struct TrieNode* root, string str)
{
    // If node is leaf node, it indicates end
    // of string, so a null character is added
    // and string is displayed
    if (root->isLeaf==true) 
    {
       // str[level] = '\0';
     // str.push_back('\0');
        cout << str << endl;
    }
  
  //  int i;
    for (int i = 0; i < alpha_size; i++) 
    {
        // if NON NULL child is found
        // add parent key to str and
        // call the display function recursively
        // for child node
        if (root->children[i]) 
        {
            //str[level] = i + 'a';
            str.push_back(i+'a');
            display(root->children[i], str);
            str.pop_back();
			        }
    }
}
  
// Driver program to test above functions
int main()
{
    // Keys to be inserted in Trie
    char keys[][8] = { "the", "a", "there", "answer",
                       "any", "by", "bye", "their" };
  
    struct TrieNode* root = createNode();
  
    // Inserting keys in Trie
    for (int j = 0; j < ARRAY_SIZE(keys); j++)
        insert_node(root, keys[j]);
  
    int level = 0;
 //   char str[20];
   string str="";
    // Displaying content of Trie
    cout << "Content of Trie: " << endl;
    display(root, str);
}
