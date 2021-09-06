#include "Word.hpp"

std::vector<char> hidden_word_temp;
std::vector<char> long_word_temp;

Word::Word(std::string word_string)
{
		// word = word_string;

		for (unsigned int i = 0; i < word_string.length(); i++)
		{
			if (word_string[i] ==  ' ')
			{
				hidden_word_temp.push_back(' ');
				long_word_temp.push_back(' ');
			}
			else
			{
				hidden_word_temp.push_back('_');
				long_word_temp.push_back(word_string[i]);
			}

			hidden_word_temp.push_back(' ');
			long_word_temp.push_back(' ');
			hidden_word_temp.push_back(' ');
			long_word_temp.push_back(' ');
			hidden_word_temp.push_back(' ');
			long_word_temp.push_back(' ');
		}
		long_real_word = stringafy(long_word_temp);
		hidden_word = stringafy(hidden_word_temp);
		real_word = word_string;
		char_num = word_string.length();

	}
