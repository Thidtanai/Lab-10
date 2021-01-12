#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int randomgrade;

void grade(){
  randomgrade = rand()%9;
  return;
}

string getgrade(int get){
  if(get == 0)return "A";
  if(get == 1)return "B+";
  if(get == 2)return "B";
  if(get == 3)return "C+";
  if(get == 4)return "C";
  if(get == 5)return "D+";
  if(get == 6)return "D";
  if(get == 7)return "F";
  if(get == 8)return "W";
  return "Error";
}

int main() {
  srand(time(0));
  grade();
  cout << "Press Enter 3 times to reveal your future.";
  cin.get();
  cin.get();
  cin.get();
  cout << "You will get " << getgrade(randomgrade) << " in this 261102.";
  return 0;
}