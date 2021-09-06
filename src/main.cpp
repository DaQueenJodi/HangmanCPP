#include <iostream>
#include "GameFunctions.hpp"
#include "Word.hpp"
#include <iostream>
#include <string>
#include <ctype.h>


Word* word = nullptr;
std::string playerGuessInput;
std::string line;

int main(int argc, char const *argv[])
{
	word = Randomizer::randomize_word("words/words.txt");

	std::cout << word->hidden_word << std::endl << std::endl <<  word->real_word << std::endl;


do
{
std::cout << "please enter a character and press \'enter\': ";
std::getline(std::cin, playerGuessInput);

std::cout << "you guessed the letter " << playerGuessInput[0];

if (!Utility::string_isalpha(playerGuessInput))
{
	std::cout << " which is not an alphabetical number. Try again." << std::endl;
}

} while (!Utility::string_isalpha(playerGuessInput));



	Guesser::guess(playerGuessInput[0], word);
	std::cout << word->hidden_word << std::endl << std::endl;

}	