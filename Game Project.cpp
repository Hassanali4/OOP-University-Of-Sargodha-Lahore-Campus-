 #include <cstdlib>
 #include <iostream>

using namespace std;

class base
 {
 protected:
 int anInt;
 };

 class derived : public base
 {
 public:
 void AFunction(int theInt);
 };

 inline void derived::AFunction(int theInt)
 {
   anInt = theInt;

   cout << anInt << endl;
   }
  
 int main()
 {
 derived temp;

 temp.AFunction(5);
 return 0;
 system("PAUSE");
 }
