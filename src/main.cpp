#include <iostream>
#include "GameFunctions.hpp"
#include "Word.hpp"
#include <iostream>
#include <string>
#include <ctype.h>



int main(int argc, char const *argv[])
{
//std::cout << Utility::format_string("welp", false);


Word* word = nullptr;
std::string playerGuessInput;
std::string playerInput;
std::string line;
bool finished = false;


word = Randomizer::randomize_word("words/words.txt");

	std::cout << word->hidden_word << std::endl << std::endl <<  word->real_word << std::endl;
do
{
do
{
do
{
std::cout << "please enter a character and press \'enter\': ";
std::getline(std::cin, playerGuessInput);

if (playerGuessInput.length() > 0)
	std::cout << "you guessed the word segment \'";
else
	std::cout << "you guessed the letter \'";
std::cout << playerGuessInput << "\'";

if (!Utility::string_isalpha(playerGuessInput))
{
	std::cout << " which is not an alphabetical number. Try again.";
}

std::cout << std::endl;
} while (!Utility::string_isalpha(playerGuessInput));

if (playerGuessInput.length() > 1)
	Guesser::guess(playerGuessInput, word);
else
	Guesser::guess(playerGuessInput[0], word);
std::cout << word->hidden_word << std::endl << std::endl;

} while (!Utility::is_fully_guessed(word));
	do
	{
	std::cout << "You have won! do you want to try again? (Y/n): ";
	std::getline(std::cin, playerInput);
}while (playerInput[0] != 'y' && playerInput[0] != 'Y' && playerInput[0] != 'Y' && playerInput[0] != 'n' && playerInput[0] != 'N');

if (playerInput[0] == 'Y' | playerInput[0] == 'y')
{
	finished = false;
}
else
{
	finished = true;
}
} while (!finished);
}