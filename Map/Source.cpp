#include <iostream>
#include <map>
#include <string>

using namespace std;



int main()
{	
	map<string, string> myDictionary;
	myDictionary.insert(pair<string, string>("orange", "die orange"));
	myDictionary.insert(pair<string, string>("strawberry", "die erdbeere"));
	myDictionary.insert(pair<string, string>("banana", "der banane"));
	myDictionary.insert(pair<string, string>("apple", "der apfel"));

	myDictionary["strawberry"] = "Die Erdbeere";
	myDictionary["apple"] = "Yabloko";

	myDictionary.erase("banana");

	cout << myDictionary.size() << endl;



	for (auto pair : myDictionary)
	{
		cout << pair.first << " - " << pair.second << endl;
	}



	system("pause > 0");
}