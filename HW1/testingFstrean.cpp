#include <iostream>
#include <string>
#include <fstream>
// using namespace std; 
using std::cout; 
using std::endl;
using std::fstream;
using std::string;
using std::ios;
// if not using namespace using all those above. 
int main()
{
	fstream nameFile; 
	string input; 
	
	nameFile.open("data.txt", ios::in);
	if(!nameFile)
	{
		cout <<"File Err! "<< endl;
		return 0; 
	}
	getline(nameFile, input);
	while(nameFile)
	{
		cout <<  input << endl;
		getline(nameFile, input);
	}
	nameFile.close();
return 0; 	
}