#include <string>
#include "fns.hpp"

void assign_asterisk(std::string word, std::string &paragraph, int start)
{
  for (int k = 0; k < word.size(); k++)
  {
    paragraph[start + k] = '*';
  }
}

void bleep(std::string word, std::string &paragraph)
{
  for (int i = 0; i < paragraph.size(); i++)
  {
    if (paragraph[i] == word[0])
    {
      int match = 0;
      for (int j = 0; j < word.size(); j++)
      {
        if (paragraph[i+j] == word[j])
        {
          match++;
        }
      }
      if (match == word.size())
      {
        assign_asterisk(word, paragraph, i);
      }
    }
  }
}