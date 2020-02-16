#include <iostream>
#include <string>
#include <sstream>
using namespace std;

void MainMenu();
void TextToMorseCode(string msg, string MorseCodeLetters[], string MorseCodeNumbers[]);
string MorseCodeToText(string msg, string MorseCodeLetters[], string MorseCodeNumbers[]);

int main()
{
   string text,choice;
   string MorseCodeLetters[] = { ".-", "-...", "-.-.",
       "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.",
       "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };
   string MorseCodeNumbers[] = { "-----", ".----", "..---", "...--", "....-", ".....",
       "-....", "--...", "---..", "----." };
   char symbols[] = {' ', '!', '"', '#', '$', '%', '&', '(',')', '*', '+', ',', '\'', ':', ';','<','=',
       '>','?','@','[','\\',']','^','_','`','{','|','}','~'};
   bool incorrectMessage;
   do
   {
       MainMenu();
       getline(cin, choice);
       if (choice == "a" || choice == "A")
       {
           incorrectMessage = false;
           cout << "Enter a word and I will translate it to Morse code : ";
           getline(cin, text);
           for (int i = 0; i < text.length(); i++)
           {
               for (int j = 0; j < sizeof(symbols); j++)
               {
                   if (text[i] == symbols[j])
                   {
                       incorrectMessage = true;
                       goto jump;
                   }
               }
           jump:
               break;
           }
           if (incorrectMessage)
               cout << "Error : words contains symbols" << endl << endl;
           else
               TextToMorseCode(text, MorseCodeLetters, MorseCodeNumbers);

       }
       else if (choice == "b" || choice == "B")
       {
           incorrectMessage = false;
           cout << "Enter a Morse Code seperated by /s and I will translate it to text : ";
           getline(cin, text);
           for (int i = 0; i < text.length(); i++)
           {
               for (int j = 0; j < sizeof(symbols); j++)
               {
                   if (text[i] == symbols[j])
                   {
                       incorrectMessage = true;
                       goto jump2;
                   }
               }
           jump2:
               break;
           }
           if (incorrectMessage)
               cout << "Error : badly formatted Morse Code" << endl << endl;
           else
           {
               string convertedMsg = MorseCodeToText(text, MorseCodeLetters, MorseCodeNumbers);
               if (convertedMsg == "")
                   cout << "Error : badly formatted Morse Code" << endl << endl;
               else
                   cout << convertedMsg << endl;
           }
       }
       else if (choice == "c" || choice == "C")
       {
           break;
       }
       else
       {
           cout << "Error : Invalid Input" << endl << endl;
       }
   } while (1);
  
   return 0;
}

void MainMenu()
{
   cout << "Menu Options:" << endl;
   cout << "A) Text to Morse code" << endl;
   cout << "B) Morse code to text" << endl;
   cout << "C) Quit" << endl;
   cout << "Choice : ";
}

void TextToMorseCode(string msg, string MorseCodeLetters[], string MorseCodeNumbers[])
{
   for (int i = 0; i < msg.length(); i++)
   {
       for (int j = 0; j < 26; j++)
       {
           if (msg[i] == (char)(j + 65) || msg[i] == (char)(j + 97))
           {
               cout << MorseCodeLetters[j] << endl;
           }
           if (msg[i] == (char)(j + 48))
           {
               cout << MorseCodeNumbers[j] << endl;
           }
       }
   }
}

string MorseCodeToText(string msg, string MorseCodeLetters[], string MorseCodeNumbers[])
{
   string convertedMessage = "";
   string delimiter = "/"; //values are delimited by /
   size_t pos = 0;
   string token;
   int letterCount = 26;
   int numberCount = 10;
   while ((pos = msg.find(delimiter)) != string::npos)
   {
       token = msg.substr(0, pos);
       for (int i = 0; i < letterCount; i++)
       {
           if (token == MorseCodeLetters[i])
           {
               convertedMessage += (char)(i + 65);
               break;
           }
       }
       for (int i = 0; i < numberCount; i++)
       {
           if (token == MorseCodeNumbers[i])
           {
               convertedMessage += (char)(i + 48);
               break;
           }
       }
       msg.erase(0, pos + delimiter.length());
   }
   //Below loops for at the end of message
   if (msg != "")
   {
       for (int i = 0; i < letterCount; i++)
       {
           if (msg == MorseCodeLetters[i])
           {
               convertedMessage += (char)(i + 65);
               break;
           }
       }
       for (int i = 0; i < numberCount; i++)
       {
           if (msg == MorseCodeNumbers[i])
           {
               convertedMessage += (char)(i + 48);
               break;
           }
       }
   }
   else
   {
       convertedMessage = "";
   }
   return convertedMessage;
}
