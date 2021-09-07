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
	static void guess(std::string playerGuess, Word*& word);
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
	static bool  is_fully_guessed(Word* word)
	{
		bool is_guessed = true;

		std::string& hidden_word = word->hidden_word;
		std::string real_word = word->long_real_word;

		for (unsigned int i = 0; i < hidden_word.length(); ++i)
		{
			if (hidden_word[i] != real_word[i])
			{
				is_guessed = false;
			}
		}
		return is_guessed;
	}

		static 	std::string stringafy(std::vector<char> char_vector)
	{
		std::string stringafied_string(char_vector.begin(), char_vector.end());
		return stringafied_string;
	}	
	static std::string format_string(std::string str, bool isHidden)
	{
		std::vector<char> temp_str;

		for (unsigned int i = 0; i < str.length(); i++)
		{
			if (str[i] ==  ' ')
			{
				temp_str.push_back(' ');
				//long_word_temp.push_back(' ');
			}
			else
			{
				if (isHidden)
					temp_str.push_back('_');
				else
					temp_str.push_back(str[i]);
			}

			temp_str.push_back(' ');
			temp_str.push_back(' ');
			temp_str.push_back(' ');
		}
		std::string result = Utility::stringafy(temp_str);
		return result;
	}		

};