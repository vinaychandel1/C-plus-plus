#include<iostream>
#include<string>
#include <iterator>
#include <algorithm>
#include<fstream>
using namespace std;
int main() {
	ifstream MyFile("filename.txt");
	ifstream MyFile1("filename1.txt");
  ofstream fout("output.txt");
      using istream_iterator = istream_iterator<string>;
merge(istream_iterator(MyFile), istream_iterator(),
                istream_iterator(MyFile1), istream_iterator(),ostream_iterator<int>( fout, "\n" ));
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
