#include <iostream> 
#include<string>
using namespace std; 
  
// Driver Code 
int main() 
{ 
    int fav_no; 
    char name; 
  
    cout << "Type your favorite number: "; 
  
    // The cin statement uses the 
    // fav_no and leaves the \n 
    // in the stream as garbage 
    cin >> fav_no; 
  
    cout << "Type your name : "; 
  
    // getline() reads \n 
    // and finish reading 
    getline(cin>>name); 
  
    // In output only fav_no 
    // will be displayed not 
    // name 
    cout << name 
         << ", your favourite number is : "
         << fav_no; 
  
    return 0; 
}
