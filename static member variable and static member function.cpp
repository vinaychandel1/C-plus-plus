#include <iostream>

using namespace std;

class Account{
  private:
      int balance;              //instance member variable
      static float interest;    //static member variable/class variable
  public:
    void setbalance(int b)   //instance member function
    {
    balance=b;
    cout<<balance<<endl;
    }
     static void setinterest(float i)  //static member function
    {
         cout<<interest<<endl;
        interest=i;
        cout<<interest<<endl;

    }
};
 float Account::interest;  //membership label
int main()
{
    Account a1;
    a1.setbalance(200);
    a1.setinterest(10.2);
    Account::setinterest(4.5);

    cout << "Hello world!" << endl;
    return 0;
}
