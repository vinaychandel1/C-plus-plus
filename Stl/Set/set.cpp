#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void printset(int arr[],int size){
     set<int>s1;
     for(int i=0;i<size;i++){
         s1.insert(arr[i]);
     }
     /*set<int>::iterator it; 
  
    // Print the array with duplicates removed 
    cout << "\nAfter removing duplicates:\n"; 
    for (it = s.begin(); it != s.end(); ++it) 
        cout << *it << " "; */
     for(auto i:s1)
     cout<<i<<" ";
     // assigning the elements from s1 to s2 
	set<int> s2(s1.begin(), s1.end()); 
	s2.insert(50);
	set<int, greater<int> >::iterator itr; 

	// print all elements of the set s2 
	cout << "\nThe set s2 after assign from s1 is : \n"; 
	for (itr = s2.begin(); itr != s2.end(); itr++) 
	{ 
		cout << *itr<<" "; 
	} 
	cout << endl; 
    
	// remove all elements up to 30 in s2 
	cout 
		<< "\ns2 after removal of elements less than 30 :\n"; 
	//s2.erase(s2.begin(), s2.find(30)); 
	for (itr = s2.begin(); itr != s2.end(); itr++) { 
		cout <<*itr<<" "; 
	} 

	// remove element with value 50 in s2 
	int num; 
	num = s2.erase(50); 
	cout << "\ns2.erase(50) : "; 
	cout << num << " removed\n"; 
	for (itr = s2.begin(); itr != s2.end(); itr++) 
	{ 
		cout <<*itr<<" "; 
	} 

	cout << endl; 

	// lower bound and upper bound for set s1 
	cout << "s1.lower_bound(40) : \n"
		<< *s1.lower_bound(40) 
		<< endl; 
	cout << "s1.upper_bound(40) : \n"
		<< *s1.upper_bound(40) 
		<< endl; 

	// lower bound and upper bound for set s2 
	cout << "s2.lower_bound(31) :\n"
		<< *s2.lower_bound(31) 
		<< endl; 
	cout << "s2.upper_bound(40) : \n"
		<< *s2.upper_bound(40) 
		<< endl;
		cout << "\nNow set s2 is: \n"; 
	for (itr = s2.begin(); itr != s2.end(); itr++) 
	{ 
		cout << *itr<<" "; 
	}
	s2.emplace(24);
	cout << "\nAfter s2.emplance(24): \n"; 
	for (itr = s2.begin(); itr != s2.end(); itr++) 
	{ 
		cout << *itr<<" "; 
	}
	
}

int main()
{ int arr[]={2,6,7,2,7,3,12,4,6,2,9,100,50,50,30};
  int size=sizeof(arr)/sizeof(arr[0]);
  printset(arr,size);
   return 0;
}

/*Sets are a type of associative containers in which each element has to be unique, because the value of the element identifies it.
The value of the element cannot be modified once it is added to the set, though it is possible to remove and add the modified value of that element. */
