#pragma once
#include <string>
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
