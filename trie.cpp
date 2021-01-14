// boggle
/*
Boggle | Set 2 (Using Trie)
Difficulty Level : Expert
 Last Updated : 25 Jun, 2020
Given a dictionary, a method to do a lookup
 in the dictionary
 and a M x N board where every cell has one
 character. Find all possible words 
 that can be formed by a sequence of 
 adjacent characters.
  Note that we can move to any of 8 adjacent
  characters, but a word should not have
  multiple instances of the same cell.
  */
  /*
Input: dictionary[] = {"GEEKS", "FOR", "QUIZ", "GO"};
       boggle[][]   = {{'G', 'I', 'Z'},
                       {'U', 'E', 'K'},
                       {'Q', 'S', 'E'}};
                       */
                       
#include<bits/stdc++.h>
using namespace std;


struct trie
{
   struct trie*child[26];
   bool isend;
   
   trie()
   {
   	memset(child,0,sizeof(child));
   	isend=false;
   }
				   };
				   
	int main()
	{
		
									  }			                      
