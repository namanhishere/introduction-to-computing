#include <iostream>
using namespace std;

int main() {
  int i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << ++i + j-- <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << --x+y++ <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << i++ + ++i <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << --j + j-- <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << x-- - --x <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << ++y - y++ <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << i++ + j++ + ++k <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << --x - x-- - --y <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << x++ * ++x <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << y-- / --y <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << ++i - i++ + --j <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << --x * x++ + ++y<<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << x++ +y---z++ <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << ++a *--b /c++ <<endl;

  i = 1, j=2,k=3,x=4,y=5,z=6,a=7,b=8,c=9;
  cout << i-- + ++j -k-- <<endl;
}
