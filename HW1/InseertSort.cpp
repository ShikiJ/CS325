#include <iostream>
#include <fstream>
#include <string>
#include <vector>
//using std::cout; 
//using std::endl;
//using std::in; 
using namespace std; 
void insertionSort(int arr[], int n) {
  for(int i = 1; i < n; i++) {
    int j = i - 1;
    int key = arr[i];

    while(j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;;
    }
    arr[j + 1] = key;
  }
}
int main() {
	// ready for file import  
	fstream nameFile; 
	string input; 
	nameFile.open("data.txt",ios::in);
	if(!nameFile)
	{
		cout<<"err opening file"<<endl;
			return 0; 
	}
	// open and read the file 
	getline(nameFile, input);
	while(nameFile)
	{
		cout<<input<<endl; 
		getline(nameFile,input);
	}
	// close file 
	nameFile.close(); 
  return 0;
}