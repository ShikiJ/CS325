#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std; 

void insertionSort(int arr[], int n) 
{
  for(int i = 1; i < n; i++) 
  {
    int j = i - 1;
    int key = arr[i];

    while(j >= 0 && key < arr[j]) 
    {
      arr[j + 1] = arr[j];
      j--;;
    }
    arr[j + 1] = key;
  }
}
                        
void printArr(int arr[],  int n)
{
  for(int i =0; i < n; i++)
  {
      cout<< arr[i]<<" ";
  }
  cout<<endl;
}
 

int main()
{

fstream file; 
int size=0; 
string line;
//istringstream istr; 
file.open("data.txt", ios::in);
file >> size; 
getline(file, line);
while(file)
{
//cout << size <<endl;
//cout << line << endl;
//cout << "-------------"<<endl;
int array[size]; 
//istr.str(line);
istringstream istr(line);
for(int i =0; i< size; i++)
{
 istr >> array[i];
// cout << array[i] << " ";
}
insertionSort(array,size);
printArr(array, size);
//cout << endl; 

file >> size;
getline(file,line);
}

file.close();
return 0; 

}
