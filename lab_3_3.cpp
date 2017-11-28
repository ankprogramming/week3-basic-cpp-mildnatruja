#include <iostream>

using namespace std;

int main() {

   const float pi = 3.14345926536;
   float r;
   int k = 2 , h = 15;
   float area;

   cout << "Please enter radius :";
   cin >> r;
   area = pi * r * r;
   cout << "Area of Circle :" <<area <<endl;

   cout <<"Circumference of Circle : "<<k*pi*r<<endl;

   cout <<"Cylindrical space ; "<<pi*(r*r)*h<<endl;



  return 0;
}
