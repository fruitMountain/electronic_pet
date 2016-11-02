#include <second.h>

pet::pet(){
  hunger = 50;
  happy = 50;
  cout << "Pet's name? (one word) ";
  cin >> name;
}

void pet::play(){
  int choice = 0;
  cout << "What should we play?\n";
  cout << " Fetch (1) \n Roll over (2) \n";
  cin >> choice;
  switch(choice){
  case 1:
    happy += 10;
    hunger += 5;
    break;
  case 2:
    happy += 5;
    hunger += 1;
    break;
  default:
    cout << "Not a valid input." << endl;
  }
}

void pet::feed(){
  cout << "\nMMM, Yummy!\n";
  hunger -= 5;
}

void pet::print(){
  cout << "\nYour pet " << name << " is " << endl;
  cout << "Happy: " << happy << endl;
  cout << "Hungry: " << hunger << endl;
}

int pet::check_health(){
  if(hunger >= 100){
    cout << "Your pet has starved :(\n";
    return 1;
  }
  if(happy <= 0){
    cout << "Your pet has died of fatal depression :(\n";
    return 1;
  }
  return 0;
}
