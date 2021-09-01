#include "GameFunctions.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <istream>
#include "Word.hpp"



char word[256];
std::vector<std::string> words;


	void Randomizer::print_word(Word* word)
	{
		std::cout << word->word << std::endl;
		std::cout << word->hidden_word << std::endl;
	}

	Word* Randomizer::randomize_word(const char *file_path)
	{
		for 
		std::ifstream file(file_path);
		file.getline(word, 256);
		words.push_back(word);

		return genWord(ranWord)

	}
	Word* genWord(std::string word_string )
	{

	}