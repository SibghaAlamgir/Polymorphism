
#include <iostream>
using namespace std;
class A
{ private :
int n ;
public:
 void in()
{ cout << " enter value"<< endl;
cin>> n;}
void out()
{ cout << "the value of n ="<< n << endl;}
};
int main()
{ A *ptr;
ptr=new A;
ptr-> in();
ptr-> out();
}