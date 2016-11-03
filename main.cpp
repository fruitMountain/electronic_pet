#include <iostream>
#include <string>
#include "second.h"
using namespace std;

int main(){
  int choice;
  int health_check;
  int save;
  cout << "Would you like to load your last save? (y-1/n-0)";
  cin >> save;
  if(save == 1){
    cout << "loading save... \n";
  }
  else{
    cout << "Ok, well lets get you a new pet then.\n";
    pet pet1;
  do{
    pet1.print();
    cout << "What would you like to do with your pet?\n";
    cout << " Play (1) \n Feed (2) \n Save (3)\n Exit (0) \n";
    cin  >> choice;
    switch(choice){
    case 1:
      pet1.play();
      break;
    case 2:
      pet1.feed();
      break;
    case 3:
      cout << "saving...";
      //******************* save function
      break;
    }
    health_check = pet1.check_health();
  }
  while(choice != 0 && health_check != 1);
  cin.ignore();
  cout << "[Press Enter to Exit.]" << endl;
  cin.ignore();
  return 0;
  }
}
