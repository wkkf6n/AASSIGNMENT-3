#include<iostream>
#include "Question2.h"
using namespace std;

//function to check if string is palindrome
bool check_palindrome(string str)
{
	//base case
	if (str.size() <= 0)
		return true;

	//check if first and last character are equal
	if (str[0] == str[str.size() - 1])
		return check_palindrome(str.substr(1, str.size() - 2));
	else
		return false;
}

int main()
{
	//Creating objects and testing them
	string str1 = "malayalam";
	if (check_palindrome(str1))
		cout << str1 << " is palindrome\n";
	else
		cout << str1 << " is not palindrome\n";


	str1 = "random";
	if (check_palindrome(str1))
		cout << str1 << " is palindrome";
	else
		cout << str1 << " is not palindrome";
}