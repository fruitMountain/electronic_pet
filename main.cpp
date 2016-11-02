#include <iostream>
#include <string>
#include "second.h"
using namespace std;

class pet{
private:
  int hunger;
  int happy;
  string name;
public:
  pet();
  void play();
  void feed();
  void print();
  int check_health();
};

int main(){
  pet pet1;
  int choice;
  int health_check;
  do{
    pet1.print();
    cout << "What would you like to do with your pet?\n";
    cout << "Play (1) \n Feed (2) \n Exit (0) \n";
    cin  >> choice;
    switch(choice){
    case 1:
      pet1.play();
      break;
    case 2:
      pet1.feed();
      break;
    }
    health_check = pet1.check_health();
  }
  while(choice != 0 && health_check != 1);
  cin.ignore();
  cout << "Press Enter to Exit." << endl;
  cin.ignore();
  return 0;
}
