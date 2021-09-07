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
private:	

};