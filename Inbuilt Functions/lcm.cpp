#include <iostream> 
#include <boost/math/common_factor.hpp> 
  
using namespace std; 
  
int main() 
{ 
    cout << "LCM(10,20) = " << boost::math::lcm(10,20)  
         << endl; 
    return 0; 
} 
/*
#include <iostream> 
#include <numeric> 
  
using namespace std; 
  
int main() 
{ 
    cout << "LCM(10, 20) = " << std::lcm(10, 20) 
         << endl; 
    return 0; 
} 



works in c++ 17
*/
