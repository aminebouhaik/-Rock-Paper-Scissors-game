#include <iostream>
#include <cmath>
#include <ctime>

char getPlayChoice();
char getComputerChoice();
void ShowChoice(char choice);
void chooseWinner(char player ,char computer);

int main(){
    char player;
    char computer;
    player= getPlayChoice();
      std::cout << " Your choice : ";
    ShowChoice(player);
  computer=getComputerChoice();
      std::cout << " Computer choice :  ";
  ShowChoice(computer);
  chooseWinner(player,computer);
  return 0;
}
char getPlayChoice(){
  char player;
  std::cout << "*************************** Rock-Paper-Scissors Game *************************** \n";
  do
  {  std::cout << "Please choose one of the following : \n";
     std::cout << "'r' for rock\n";
     std::cout << "'p' for paper\n";
     std::cout << "'s' for Scissors\n";
     std::cout << "I am going to choose : ";
     std::cin >> player;} while (player != 'r' && player != 'p' && player != 's' );
     return player;
  }
   char getComputerChoice(){
  srand(time(0));
  int num = rand() % 3 + 1;
  switch (num)
 {
 case 1 : return 'r';
 case 2 : return 'p';
 case 3 : return 's';

 }
   return 0;
}
void ShowChoice(char choice){
  switch (choice)
  {
  case 'r': std::cout << "Rock\n";
   break;
  case 'p': std::cout << "Paper\n";
   break;
  case 's': std::cout << "Scissors\n"; 
  break;
  }

}
void chooseWinner(char player ,char computer){
       switch(player){
        case 'r': if(computer == 'r'){
          std::cout << "it's a tie \n";
        }
        else if(computer == 'p'){
          std::cout << "You Lose ! \n";
        }
        else{
          std::cout << "Congratulation you Win ! \n";
        }
          break;
      
       case 'p': if(computer == 'r'){
          std::cout << "Congratulation you Win ! \n";
        }
        else if(computer == 'p'){
          std::cout << "it's a tie ! \n";
        }
        else{
          std::cout << "Congratulation you Win ! \n";
        }
          break;
           case 's': if(computer == 'r'){
          std::cout << "You Lose ! \n";
        }
        else if(computer == 'p'){
          std::cout << "Congratulation you Win ! \n";
        }
        else{
          std::cout << "it's a tie !\n";
        }
          break;
       
}
}
