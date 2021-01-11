#include<iostream>
using namespace std;

       class Student
       {
              int RollNo;
              char Name[20];
              int Class;
              int Marks;

              public:
              void GetData()           //Statement 1 : Defining GetData()
              {
                    cout<<"\n\tEnter Student RollNo : ";
                    cin>>RollNo;

                    cout<<"\n\tEnter Student Name : ";
                    cin>>Name;

                    cout<<"\n\tEnter Student Class: ";
                    cin>>Class;

                    cout<<"\n\tEnter Student Marks : ";
                    cin>>Marks;
              }

              void PutData()           //Statement 2 : Defining PutData()
              {
                    cout<<"\n"<<RollNo<<"\t"<<Name<<"\t"<<Class<<"\t"<<Marks;
              }

       };


       int main()
       {

              int i;

              Student E[10];           //Statement 3 : Creating Array of 3 Student

              for(i=0;i<10;i++)
              {
                    cout<<"\nEnter details of "<<i+1<<" Student";
                    E[i].GetData();
              }

              cout<<"\nDetails of Student";
              for(i=0;i<3;i++)
              E[i].PutData();

       }
