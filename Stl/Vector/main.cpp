#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> A={3,53,16,81,10,34,1,0,9.23};

    cout<<"ITERATOR:"<<endl;

    cout << "Output of begin and end: ";
    for (auto i = A.begin(); i != A.end(); ++i){
            //The auto keyword is simply asking the compiler to deduce the type of the variable from the initialization.
        cout << *i << " ";
     }

    cout << "\nOutput of cbegin and cend: ";
    for (auto i = A.cbegin(); i != A.cend(); ++i)
        cout << *i << " ";

     //reverse order
    cout << "\nOutput of rbegin and rend: ";
    for (auto i = A.rbegin(); i != A.rend(); ++i)
        cout << *i << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto i = A.crbegin(); i != A.crend(); ++i)
        cout << *i << " ";

        cout<<"\n\nCAPACITY:";
    //size() – Returns the number of elements in the vector.
    cout<<"\nSize:"<<A.size();
    /*capacity() – Returns the size of the storage space
     currently allocated to the vector expressed as number of elements.*/
     cout<<"\nCapacity:"<<A.capacity();
    //max_size() – Returns the maximum number of elements that the vector can hold.
    cout<<"\nMax_Size:"<<A.max_size();



    // resizes the vector size to 7
    A.resize(7);
    cout<<"\nSize:"<<A.size();
    // checks if the vector is empty or not
	if (A.empty() == false)
		cout << "\nVector is not empty";
	else
		cout << "\nVector is empty";

    cout<<"\nElement after resize:";
    for (auto i = A.begin(); i != A.end(); i++)
        cout <<*i << " ";
    cout<<"\nCapacity:"<<A.capacity();

    // Shrinks the vector
    /*The vector::shrink_to_fit() is a built-in function in C++ STL
    which reduces the capacity of the container to fit its size and
    destroys all elements beyond the capacity.*/
    A.shrink_to_fit();
    cout << "\nVector elements after shrink_to_fit() are: ";
    for (auto it = A.begin(); it != A.end(); it++)
        cout << *it << " ";

    cout<<"\n\nELEMENT ACCESS:";
    cout<<"\nA[2]:"<<A[2];
    cout<<"\nA.at(4):"<<A.at(4);
    cout<<"\nfront():"<<A.front();
    cout<<"\nback():"<<A.back();
    // pointer to the first element
    int* pos = A.data();
    cout << "\nThe first element is " << *pos;
    cout << "\nThe first element is " << *(pos+5);

    cout<<"\n\nMODIFIERS:";
    // Assign vector
    vector<int> v;
    // fill the array with 10 five times
    v.assign(5, 10);

    cout << "\nThe vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
        // inserts 28 to the last position
    v.push_back(28);
    int n = v.size();
    cout << "\nThe last element is after v.push_back(28): " << v[n - 1];
    // removes last element
    v.pop_back();

    // prints the vector
    cout << "\nThe vector elements after v.pop_back() are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    // inserts 5 at the beginning
    v.insert(v.begin(), 5);

    cout << "\nThe first element after v.insert(v.begin(), 5) is: " << v[0];

    cout << "\nThe vector elements are: ";
    for (auto i = v.begin(); i < v.end(); i++)
        cout << *i << " ";

    // removes the first element
    v.erase(v.begin());
    cout << "\nThe first element after v.erase(v.begin()) is: " << v[0];
    cout << "\nThe vector elements are: ";
    for (auto i = v.begin(); i < v.end(); i++)
        cout << *i << " ";
    // inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "\nThe first element after v.emplace(v.begin(), 5) is: " << v[0];
    cout << "\nThe vector elements are: ";
    for (auto i = v.begin(); i < v.end(); i++)
        cout << *i << " ";
        v.emplace(v.begin()+3, 5);

    cout << "\nThe vector elements after v.emplace(v.begin()+3, 5) are: ";
    for (auto i = v.begin(); i < v.end(); i++)
        cout << *i << " ";
    v.emplace(v.end()-2, 5);
    cout << "\nThe vector elements after v.emplace(v.end()-2, 5) are: ";
    for (auto i = v.begin(); i < v.end(); i++)
        cout << *i << " ";

    // Inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "\nThe last element after v.emplace_back(20) is: " << v[n - 1];
     cout << "\nThe vector elements are: ";
    for (auto i = v.begin(); i < v.end(); i++)
        cout << *i << " ";

    // erases the vector
    v.clear();
    cout << "\nVector size after erase(): " << v.size();
     cout << "\nThe vector elements are: ";
    for (auto i = v.begin(); i < v.end(); i++)
        cout << *i << " ";

    // two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "\n\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    // Swaps v1 and v2
    v1.swap(v2);

    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";





    return 0;
}
