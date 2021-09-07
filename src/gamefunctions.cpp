#include "GameFunctions.hpp"
#include <fstream>
#include <iostream>
#include <string>
#include <istream>
#include "Word.hpp"
#include <time.h>
#include <stdlib.h>
#include <sstream>


	void Printer::print_word(Word* word)
	{
		std::cout << word->real_word << std::endl;
		std::cout << word->hidden_word << std::endl;
	}

	Word* Randomizer::randomize_word(const char *file_path)
	{
	// char word[256];
	std::vector<std::string> words;
	

	std::string line;
	std::ifstream infile(file_path);

     while(getline(infile, line)){
     	if (!(line.empty()))
		words.push_back(line);
		// cout<<line<<endl;
}
		// words.push_back(word);
		 // std::cout << word << std::endl;
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
	


	void Guesser::guess(char playerGuess, Word*& word)
	{
		std::string real_word = word->long_real_word;

		for (unsigned int i = 0; i < word->hidden_word.length(); i++)
		{

			if (word->hidden_word[i] == ' ')
			{
				i++;
			}


			if (real_word[i] == playerGuess)
			{
				word->hidden_word[i] = playerGuess; 
			}
		}
	}	
	void Guesser::guess(std::string playerGuess, Word*& word)
	{
		std::string& hidden_word = word->hidden_word;
		std::string real_word = word->long_real_word;
		std::string formatted_guess = Utility::format_string(playerGuess, false);

		int first_unknown;

		for (unsigned int i = 0; i < real_word.length(); ++i)
		{
			if (hidden_word[i] == '_')
			{
				first_unknown = i;
				break;
			}
		}

		std::cout << first_unknown;

		for (unsigned int i = first_unknown; i < real_word.length(); ++i)
		{
			if (real_word[i] == formatted_guess[i])
			{
				hidden_word[i] = real_word[i];
			}
		}

	}