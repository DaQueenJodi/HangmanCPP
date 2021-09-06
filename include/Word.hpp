#pragma once
#include <string>
#include <iostream>
#include <vector>


struct Word
{
	Word(std::string word_string);
	~Word();
	std::string real_word;
	std::string hidden_word;
	std::string long_real_word;
	int char_num;
private:	
	std::string stringafy(std::vector<char> char_vector)
	{
		std::string stringafied_string(char_vector.begin(), char_vector.end());
		return stringafied_string;
	}
};