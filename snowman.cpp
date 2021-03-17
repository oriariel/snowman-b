#include <iostream>
#include <string>
#include "snowman.hpp"
using namespace std;

string ariel::snowman (int number)
{

  const int HATS = 0;
  const int NOSE = 1;
  const int LEFT = 2;
  const int RIGHT = 3;
  const int X = 4;
  const int Y = 5;
  const int TORSO = 6;
  const int BASE = 7;

  const char a = '1';
  const char b = '2';
  const char c = '3';
  const char d = '4';

  const int min = 11111111;
  const int max = 44444444;

  if (number < min || number > max)
    {
      throw out_of_range ("invalid input");
    }
  string ans;

  string array = to_string (number);

  if (array[HATS]!=0)
    {

      if (array[HATS] == a)
	{
	  ans += "       \n _===_ \n";

	}

      else if (array[HATS] == b)
	{
	  ans += "  ___  \n ..... \n";

	}


      else if (array[HATS] == c)
	{
	  ans += "   _   \n  /_\\  \n";

	}


      else if (array[HATS] == d)
	{
	  ans += "  ___  \n (_*_) \n";

	}
      else
	{

	throw invalid_argument ("invalid");
	}
    }

  if (array[X]!=0)
    {
      if (array[X] == a || array[X] == c || array[X] == d)
	{
	  ans += " ";
	}
      else if (array[X] == b)
	{
	  ans += "\\";
	}
      else
	{
	  throw invalid_argument ("invalid");

	}
    }

  ans += "(";

  if (array[LEFT]!=0)
    {
      if (array[LEFT] == a)
	{
	  ans += ".";
	}

      else if (array[LEFT] == b)
	{
	  ans += "o";
	}

      else if (array[LEFT] == c)
	{
	  ans += "O";
	}

      else if (array[LEFT] == d)
	{
	  ans += "-";
	}

      else
	{
	  throw invalid_argument ("invalid");
	}
    }

  if (array[NOSE]!=0)
    {
      if (array[NOSE] == a)
	{
	  ans += ",";
	}

      else if (array[NOSE] == b)
	{
	  ans += ".";
	}

      else if (array[NOSE] == c)
	{
	  ans += "_";
	}

      else if (array[NOSE] == d)
	{
	  ans += " ";
	}

      else
	{
	  throw invalid_argument ("invalid");
	}
    }

  if (array[RIGHT]!=0)
    {
      if (array[RIGHT] == a)
	{
	  ans += ".";
	}
      else if (array[RIGHT] == b)
	{
	  ans += "o";
	}
      else if (array[RIGHT] == c)
	{
	  ans += "O";
	}

      else if (array[RIGHT] == d)
	{
	  ans += "-";
	}
      else
	{
	  throw invalid_argument ("invalid");
	}
    }
  ans += ")";



  if (array[Y]!=0)
    {

      if (array[Y] == a || array[Y] == c || array[Y] == d)
	{
	  ans += " ";
	}
      else if (array[Y] == b)
	{
	  ans += "/";
	}
      else
	{
	  throw invalid_argument ("invalid");
	}
    }
  ans += "\n";

  if (array[X]!=0)
    {
      if (array[X] == a)
	{
	  ans += "<";
	}

      else if (array[X] == b || array[X] == d)
	{
	  ans += " ";
	}

      else if (array[X] == c)
	{
	  ans += "/";
	}
      else
	{
	  throw invalid_argument ("invalid");
	}
    }
  ans += "(";


  if (array[TORSO]!=0)
    {
      if (array[TORSO] == a)
	{
	  ans += " : ";
	}

      else if (array[TORSO] == b)
	{
	  ans += "] [";
	}
      else if (array[TORSO] == c)
	{
	  ans += "> <";
	}
      else if (array[TORSO] == d)
	{
	  ans += "   ";
	}

      else
	{
	  throw invalid_argument ("invalid");
	}
    }
  ans += ")";
  if (array[Y]!=0)
    {
      if (array[Y] == a)
	{
	  ans += ">";
	}

      else if (array[Y] == b || array[Y] == d)
	{
	  ans += " ";
	}

      else if (array[Y] == c)
	{
	  ans += "\\";
	}
      else
	{
	  throw invalid_argument ("invalid");
	}
    }
  ans += "\n (";



  if (array[BASE]!=0)
    {
      if (array[BASE] == a)
	{
	  ans += " : ";
	}
      else if (array[BASE] == b)
	{
	  ans += "\" \"";
	}

      else if (array[BASE] == c)
	{
	  ans += "___";
	}

      else if (array[BASE] == d)
	{
	  ans += "   ";
	}

      else
	{
	  throw invalid_argument ("invalid");
	}
    }
  ans += ") ";
  return ans;
}
