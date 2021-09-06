#include "GameFunctions.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <istream>
#include "Word.hpp"
#include <time.h>
#include <stdlib.h>
#include <sstream>

char word[256];
std::vector<std::string> words;

	void Printer::print_word(Word* word)
	{
		std::cout << word->word << std::endl;
		std::cout << word->hidden_word << std::endl;
	}

	Word* Randomizer::randomize_word(const char *file_path)
	{
		    std::string line;
		    std::ifstream infile(file_path);

    while (std::getline(infile, line))
    {
        std::istringstream iss(line);
        if (!(iss >> word)) { break; } 
		words.push_back(word);
		// std::cout << word << std::endl;
	}
	//randomly pick one of the words
	srand(time(NULL));
	int rand_num = rand() % words.size() + 0;	

	Word* temp_word = new Word(words[rand_num]);
	
	/*
	for (unsigned int i = 0; i < words.size(); i++)
	{
		std::cout << words[i];
	}
*/
	return temp_word;
	}


