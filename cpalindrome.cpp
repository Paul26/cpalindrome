// Finger Version

#define _CRT_SECURE_NO_DEPRECATE 	// suppress warnings about insecure strcat or use strcat_s
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[])
{
 	char 	s[1000] = "";

 	//char 	s[1000]; 	 	// alternate way of initializing s to empty
 	//s[0] = '\0';

 	for (int i = 1; i < argc; i++)
 	 	strcat(s, argv[i]);

 	for (int i = 0; i < strlen(s) / 2; i++)
 	 	if (s[i] != s[strlen(s) - 1 - i])
 	 	{
 	 	 	cout << "NOT a palindrome\n";
 	 	 	return 0;
 	 	}

 	cout << "IS a palindrome" << endl;

 	return 0;
}

