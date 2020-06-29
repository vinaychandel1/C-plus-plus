#include<algorithm>
#include<iostream>
#include<list>
using namespace std;

void showlist(list<int> l){
    for(auto i:l){
        cout<<i<<"->";
    }
    cout<<"NULL";

}

void comparison(list<int>l1,list<int>l2){
if(l1>l2)
    cout<<"\nlist1 is larger than list2";
else
cout<<"\nlist2 is larger than list1";

}


int main(){
list <int> list1={1,3,5,6,43,86,12},list2={34,76,98,89,76};
cout<<"list1:";
showlist(list1);
cout<<"\nlist2:";
showlist(list2);

 cout << "\nlist1.front() : " << list1.front();
    cout << "\nlist1.back() : " << list1.back();

    cout << "\nlist1.pop_front() : ";
    list1.pop_front();
    showlist(list1);


    cout << "\nlist1.emplace(list1.begin(),4): ";
    list1.emplace(list1.begin(),4);
    showlist(list1);
    cout << "\nlist1.emplace(list1.end(),76): ";
    list1.emplace(list1.end(),76);
    showlist(list1);


    /*Insertion at any position*/
    list<int>::iterator it=list1.begin();
    // iterator to point to 3rd position
    advance(it,2);
    // using insert to insert 1 element at the 3rd position
    // inserts 5 at 3rd position
    cout<<"\nlist1.insert(it,5):";
    list1.insert(it,5);
    showlist(list1);


    // creates 4 occurrences of "2"
    cout<<"\nlist1.assign(4,2)";
    list1.assign(4,2);
    showlist(list1);
/*Using push_front() : push_front() is used to insert the element at the beginning of list.
 Increases list size by 1. Using emplace_front() : Works in a similar way as push_front, but
 the values are constructed in-place in front position of container, where in push_front,
 an object is created first, and then copied to the container.*/
    cout<<"\nlist2.emplace_front(3):";
    list2.emplace_front(3);
    showlist(list2);

    cout<<"\nlist2.push_front(56):";
    list2.push_front(56);
    showlist(list2);

    cout << "\nlist1.reverse() : ";
    list1.reverse();
    showlist(list1);

    cout << "\nlist2.sort(): ";
    list2.sort();
    showlist(list2);

    //comparison of list
    cout<<"Comparison of list1 and list2:";
    comparison(list1,list2);

    //Find element at position
    list<int> ::iterator position;
    int element=89;
    position=find(list2.begin(),list2.end(),element);
    if(position!=list2.end()){
    cout<<"\nElement found at position:"<<distance( list2.begin(), position ) + 1;
            }
    
    //merge lists

    cout<<"\nMerge list2 with list1:";
    list1.merge(list2);
    showlist(list1);

return 0;
}
