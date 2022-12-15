#include<iostream>
#include <map>
#include <iterator>
#include<string> 
#include"Question5.h"

using namespace std;


//Function to output map on console
void outputMap(map<string, string> stateDataMap)
{
	map<string, string>::iterator itr;
	cout << "State\t\tCapital\n";
	for (itr = stateDataMap.begin(); itr != stateDataMap.end(); ++itr) {
		cout << itr->first << "  \t" << itr->second
			<< '\n';
	}
}

//this function will tell the capital of the state entered by the user
void searchCapital(map<string, string> stateDataMap)
{
	string search;
	cout << "Please enter state name: ";
	getline(cin, search);

	map<string, string>::iterator itr = stateDataMap.find(search);
	if (itr != stateDataMap.end())
		cout << "Capital is: " << itr->second << endl;
	else
		cout << "State not found\n";
}

int main()
{
	//Creating map
	map<string, string> stateDataMap;

	stateDataMap.insert(pair<string, string>("Nebraska", "Lincoln"));
	stateDataMap.insert(pair<string, string>("New York", "Albany"));
	stateDataMap.insert(pair<string, string>("Ohio", "Columbus"));
	stateDataMap.insert(pair<string, string>("California", "Sacramento"));
	stateDataMap.insert(pair<string, string>("Massachusetts", "Boston"));
	stateDataMap.insert(pair<string, string>("Texas", "Austin"));

	outputMap(stateDataMap);

	map<string, string>::iterator itr = stateDataMap.find("California");
	if (itr != stateDataMap.end())
		itr->second = "Los Angeles";

	cout << endl;
	searchCapital(stateDataMap);
}