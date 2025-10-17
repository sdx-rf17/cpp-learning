#include <iostream>
#include <cstdlib>
using namespace std;
enum enStonePaperScissor{Stone = 1 , Paper = 2 , Scissor = 3};
struct stGameResult
{
    int GameRounds = 0;
    int PlayerWonTimes = 0;
    int ComputerWonTimes = 0;
    int DrawTimes = 0;
    string FinalWinner;
};

stGameResult game_result;

void GameLogicMain(); 
short randomNumber(int From , int To);
string ReturnEnumValue(int Number);
void PrintTabs(int PlayerChoice , int ComputerChoice , int numOfRounds);
void ShowGameOverScreen();
void checkFinalWinner();
void ShowFinalGameResult();
short ReadHowManyRounds();
void ResetScreen();
void startGame();

int main (){
    srand((unsigned)time(NULL));

    startGame();
}

void ShowGameOverScreen() {
    cout << "\n\t\t__________________________________________";
    cout << "\n\n\t\t            ++Game Over ++";
    cout << "\n\t\t__________________________________________\n";
}

void ResetScreen(){
    system("cls");
    system("color 07");

    game_result.ComputerWonTimes = 0;
    game_result.DrawTimes = 0;
    game_result.PlayerWonTimes = 0; 
}

void startGame(){

    bool answer = true;
    while(answer){
        ResetScreen();

        do{
            ResetScreen();
            game_result.GameRounds = ReadHowManyRounds();
        }while (game_result.GameRounds < 1 || game_result.GameRounds > 10);
        
        // while(game_result.GameRounds != numOfRounds){

        GameLogicMain();
        // numOfRounds++;
        // }
        
        ShowGameOverScreen();
        ShowFinalGameResult();
        cout << "Do you want to play again? ( YES [1] / NO [0] ): ";
        cin >> answer;
    }

}

short ReadHowManyRounds(){
    
    short NumberOfRounds = 0;
    cout << "How many rounds 1 to 10? : ";
    cin >> NumberOfRounds;

    return NumberOfRounds;
}

void ShowFinalGameResult(){

    checkFinalWinner();
    
    cout << "\n\t\t_____________[ Game Results ]_____________";
    cout << "\n\t\tGame Rounds           : " << game_result.GameRounds;
    cout << "\n\t\tPlayer1 won times     : " << game_result.PlayerWonTimes;
    cout << "\n\t\tComputer won times    : " << game_result.ComputerWonTimes;
    cout << "\n\t\tDraw times            : " << game_result.DrawTimes;
    cout << "\n\t\tFinal Winner          : " << game_result.FinalWinner;
    cout << "\n\t\t__________________________________________\n";
}

void GameLogicMain() {

    short numOfRounds = 0; 
    short playerChoice = 0 , computerChoice = 0;

    while(game_result.GameRounds != numOfRounds){

        cout << "\nRound [" << numOfRounds + 1 << "] begins:\n";
        do{
            cout << "\nEnter your choice : [1]:Stone , [2]:Paper , [3]:Scissor ?: ";
            cin >> playerChoice;
        }while(playerChoice < 1 || playerChoice > 3);

        computerChoice = randomNumber(1 , 3);           // 1 2 3 
        PrintTabs(playerChoice, computerChoice , numOfRounds);
        numOfRounds++;
    }

}
// return the name of the winner
string checkWinnerRound(short playerChoice , short computerChoice){


    
    if (playerChoice == 1 && computerChoice == 2){
        game_result.ComputerWonTimes++;
        system ("color 4F");
        return "Computer";
    }
    else if (playerChoice == 2 && computerChoice == 3) {
        game_result.ComputerWonTimes++;
        system ("color 4F");
        return "Computer";
    }
    else if (playerChoice == 3 && computerChoice == 1){
        game_result.ComputerWonTimes++;
        system ("color 4F");
        return "Computer";

    } else if (computerChoice == 1 && playerChoice == 2){
        game_result.PlayerWonTimes++;
        system ("color 2F");
        return "Player";

    } else if (computerChoice == 2 && playerChoice == 3){
        game_result.PlayerWonTimes++;
        system ("color 2F");
        return "Player";

    } else if ( computerChoice == 3 && playerChoice == 1){
        game_result.PlayerWonTimes++;
        system ("color 2F");
        return "Player";
    }

    game_result.DrawTimes++;
    system ("color 6F");
    return "[No Winner]" ;
}
//return a random number
short randomNumber(int From , int To){

    short rand_num = rand() % (To - From + 1) + From;
    return rand_num;
}

string ReturnEnumValue(int Number)
{
    if (Number == 1)
        return "Stone";
    if (Number == 2)
        return "Paper";
    if (Number == 3)
        return "Scissors";

    return "NO valid value";
}

void PrintTabs(int PlayerChoice , int ComputerChoice , int numOfRounds){

    cout << "\n_________Round [" << numOfRounds + 1 << "]________________\n";
    cout << "\nPlayer Choice  : " << ReturnEnumValue(PlayerChoice);
    cout << "\nComputer Choice : " << ReturnEnumValue(ComputerChoice) ;
    cout << "\nRound Winner : " << checkWinnerRound(PlayerChoice , ComputerChoice);
    cout << "\n___________________________________\n";
}

void checkFinalWinner(){

    if (game_result.ComputerWonTimes > game_result.PlayerWonTimes){
        game_result.FinalWinner = "Computer";
        system("color 4F");
    } else if (game_result.ComputerWonTimes < game_result.PlayerWonTimes){
        game_result.FinalWinner = "Player";
        system ("color 2F");
    } else {
        game_result.FinalWinner = "Draw";
        system ("color 6F");
    }
}