// Reverse Version

#include <iostream>
#include <cstring>
using namespace std;

void reverse(char* s);

int main(int argc, char* argv[])
{
 	char 	s[1000] = "";

 	//char 	s[1000]; 	 	// alternate way of initializing s to empty
 	//s[0] = '\0';

 	for (int i = 1; i < argc; i++)
 	 	strcat_s(s, argv[i]);

 	char 	r[1000];

 	strcpy(r, s);
 	reverse(r);

 	if (strcmp(s, r) == 0) 	// they are equal
 	 	cout << "IS a palindrome" << endl;
 	else
 	 	cout << "NOT a palindrome\n";

 	return 0;
}


void reverse(char* s)
{
 	for (int i = 0; i < strlen(s) / 2; i++)
 	{
 	 	char 	temp = s[i];
 	 	s[i] = s[strlen(s) - 1 - i];
 	 	s[strlen(s) - 1 - i] = temp;
 	}
}

