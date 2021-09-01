#include "Word.hpp"
#include <bitset>

std::vector<char> hidden_word_temp;


Word::Word(std::string word_string)
{
		word = word_string;

		for (unsigned int i = 0; i < word_string.length(); i++)
		{
			if (word_string[i] ==  ' ')
			{
				hidden_word_temp.push_back(' ');
			}
			else
			{
				hidden_word_temp.push_back('_');
			}

			hidden_word_temp.push_back(' ');
			hidden_word_temp.push_back(' ');
			hidden_word_temp.push_back(' ');
		}
		
		hidden_word = stringafy(hidden_word_temp);
		word = word_string;

	}
