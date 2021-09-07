#include "Word.hpp"
#include "GameFunctions.hpp"
std::vector<char> hidden_word_temp;
std::vector<char> long_word_temp;

Word::Word(std::string word_string) 
{
  long_real_word = Utility::format_string(word_string, false);
  hidden_word = Utility::format_string(word_string, true);
  real_word = word_string;
}
