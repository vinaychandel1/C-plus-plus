#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main() {
	ifstream MyFile("filename.txt");
	ofstream MyFile1("filename.txt",ios::app);
      MyFile1<<"Hello";
      cout<<"\n Data has been appended to file"<<endl;
      MyFile.close();
      MyFile1.close();
      string word;
      ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyReadFile, word)) {
  // Output the text from the file
  cout<<"Reading:\t";
  cout << word;
}

// Close the file
MyReadFile.close();
      return 0;
}
