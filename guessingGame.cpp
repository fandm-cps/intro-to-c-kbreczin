#include <iostream>
using namespace std;

int main(){

  int correctNum = 34;
  int guessNum = 0;

  
  while (guessNum != -1){
    
    if(guessNum != correctNum){

      cout << "Guess a number or type -1 to exit. " << endl;
      cin >> guessNum;
    }

    else{

      cout << "You are correct! " << endl;
      break;
    }
  }
  
  return 0;
}
