#include<iostream>
using namespace std;

class employee {
private:

   int num;
   char sname[100];
   char add[100];

   void input() {

       cout << "Enter Name: ";
       cin.getline(sname, 100);

       cout << "Enter Number: ";
       cin>>num;
       cin.get();
       cout << "Enter Address: ";
       cin.getline(add, 100);
   }

};

int main() {

   College obj;
   obj.input();
   obj.comp();
   obj.display();

   return 0;
}
