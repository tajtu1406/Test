#include <iostream>

using namespace std;

long factorial(long x){
    cout << "x = " << x << " at " << &x << endl;
    if (x>1)
        return (x*factorial(x-1));
    else
        return 1;
}
int main()
{
   long x;
   cin >> x;
   factorial(x);
   return 0;
   /*
   Dia chi cua cac phan tu duoc bieu dien duoi dang hexa
   Moi dia chi cach nhau 20
   */
}
