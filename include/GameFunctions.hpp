#pragma once
#include "Word.hpp"
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <functional>


class Randomizer
{
public:
	static Word* randomize_word(const char* file_path);
};

class Printer
{
public:
	static void print_word(Word* word);
};

class Guesser
{
	public:
	static void guess(char playerGuess, Word*& word);
};

class Utility
{
public:
	
	static bool string_isalpha(std::string string)
	{
		bool contains_only_alpha = true;
		for (unsigned int i = 0; i < string.length(); ++i)
		{
			if (!isalpha(string[i]))
				contains_only_alpha = false;
		}
		return contains_only_alpha;
	}
	
};