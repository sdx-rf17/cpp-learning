#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enGameChoice{Stone = 1 , Paper = 2 , Scissors = 3};

enum enWinner {Player1 = 1 , Computer = 2 , Draw = 3};

struct stRoundInfo{
    
    short RoundNumber = 0;
    enGameChoice Player1Choice ;
    enGameChoice ComputerChoice;
    enWinner Winner ;
    string WinnerName;
};

struct stGameResult{

    short GameRounds = 0;
    short Player1WinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;
    enWinner GameWinner;
    string WinnerName;
};

int RandomNumber(int From , int To) {

    int rand_num = rand() % (To - From + 1) + From;
    return rand_num;
}

void setWinnerScreenColor(enWinner Winner){

    if (Winner == enWinner::Computer)
        system ("color 4F");
    else if (Winner == enWinner::Player1)
        system ("color 2F");
    else 
        system ("color 6F");
            

}

enGameChoice GetComputerChoice(){

    return (enGameChoice)RandomNumber(1,3);
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo){

    if(RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
            return enWinner::Draw;

    
    //Player1 Case
    switch (RoundInfo.Player1Choice)
    {
    case enGameChoice::Stone:
        return (RoundInfo.ComputerChoice == enGameChoice::Paper) ?   enWinner::Computer  : enWinner::Player1;
    case enGameChoice::Paper:
        return (RoundInfo.ComputerChoice == enGameChoice::Scissors) ?  enWinner::Computer : enWinner::Player1;
    case enGameChoice::Scissors:
        return (RoundInfo.ComputerChoice == enGameChoice::Stone) ? enWinner::Computer : enWinner::Player1;
    }


    // Computer Case
    switch (RoundInfo.ComputerChoice)
    {
    case enGameChoice::Stone:
        return (RoundInfo.Player1Choice == enGameChoice::Paper) ?  enWinner::Player1 : enWinner::Computer;
    case enGameChoice::Paper:
        return (RoundInfo.Player1Choice == enGameChoice::Scissors) ?  enWinner::Player1 : enWinner::Computer;
    case enGameChoice::Scissors:
        return (RoundInfo.Player1Choice == enGameChoice::Stone) ?  enWinner::Player1 : enWinner::Computer;
    }
    return enWinner::Draw;
}

enWinner WhoWonTheGame(short Player1WinTimes , short ComputerWinTimes){

    if (Player1WinTimes > ComputerWinTimes){
        return enWinner::Player1;
    }
    else if (ComputerWinTimes > Player1WinTimes){
        return enWinner::Computer;
    }
    else 
        return enWinner::Draw;
    
}

string ChoiceName(enGameChoice Choice)
{
    string arrGameChoices[3] = { "Stone", "Paper", "Scissors" };
    return arrGameChoices[Choice - 1];
}

string WinnerName(enWinner Winner)
{
    string arrWinnerName[3] = {"Player1" , "Computer" , "No Winner (Draw)"};
    return arrWinnerName[Winner - 1];
}

enGameChoice ReadPlayer1Choice()
{
    short Choice;
    do
    {
        cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);
    return (enGameChoice)Choice;
}

void PrintRoundResults(stRoundInfo RoundInfo)
{
    setWinnerScreenColor(RoundInfo.Winner);

    cout << "\n____________ Round [" << RoundInfo.RoundNumber << "] ________________\n\n";
    cout << "Player1 Choice: " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner   : [" << RoundInfo.WinnerName << "]\n";
    cout << "_________________________________________\n" << endl;
}

short ReadHowManyRounds(string message){
    
    short NumberOfRounds = 0;
    do{
        cout << message << "? : ";
        cin >> NumberOfRounds;
    }while(NumberOfRounds < 1 || NumberOfRounds > 10);

    return NumberOfRounds;
}

stGameResult fillGameResult(short HowManyRounds , short Player1WinTimes , short ComputerWinTimes , short DrawTimes , enWinner GameWinner , string WhoWonTheGame) {
    stGameResult GameResult;

    GameResult.GameRounds = HowManyRounds;
    GameResult.Player1WinTimes = Player1WinTimes;
    GameResult.ComputerWinTimes = ComputerWinTimes;
    GameResult.DrawTimes = DrawTimes;
    GameResult.GameWinner = GameWinner;
    GameResult.WinnerName = WhoWonTheGame;

    return GameResult;
}

stGameResult PlayGame(short HowManyRounds)
{
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
    {
        cout << "\nRound [" << GameRound << "] begins:\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.Player1Choice = ReadPlayer1Choice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player1)
            Player1WinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer)
            ComputerWinTimes++;
        else
            DrawTimes++;

        PrintRoundResults(RoundInfo);
    }

    // return { 
    //     HowManyRounds, 
    //     Player1WinTimes, 
    //     ComputerWinTimes,
    //     DrawTimes,
    //     WhoWonTheGame(Player1WinTimes, ComputerWinTimes) 
        // WinnerName(WhoWonTheGame(Player1WinTimes, ComputerWinTimes))
    //  };

     return fillGameResult(HowManyRounds , Player1WinTimes , ComputerWinTimes , DrawTimes , WhoWonTheGame(Player1WinTimes, ComputerWinTimes)  ,  WinnerName(WhoWonTheGame(Player1WinTimes , ComputerWinTimes)));
}

void ShowFinalGameResult(stGameResult GameResults){
 
    setWinnerScreenColor(GameResults.GameWinner);

    cout << "\n\t\t_____________[ Game Results ]_____________";
    cout << "\n\t\tGame Rounds           : " << GameResults.GameRounds;
    cout << "\n\t\tPlayer1 won times     : " << GameResults.Player1WinTimes;
    cout << "\n\t\tComputer won times    : " << GameResults.ComputerWinTimes;
    cout << "\n\t\tDraw times            : " << GameResults.DrawTimes;
    cout << "\n\t\tFinal Winner          : " << GameResults.WinnerName;
    cout << "\n\t\t__________________________________________\n\n";
}

void ShowGameOverScreen() {
    cout << "\n\t\t__________________________________________\n";
    cout << "\n\n\t\t            ++Game Over ++";
    cout << "\n\t\t__________________________________________\n";
}

void ResetScreen(){
    system("cls");
    system("color 07"); 
}

void StartGame()
{
    char PlayAgain = 'Y';

    do
    {
        ResetScreen();  
        stGameResult GameResults = PlayGame(ReadHowManyRounds("How many rounds 1 to 10" ));
         
        ShowGameOverScreen();
        ShowFinalGameResult(GameResults);
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> PlayAgain;

    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main()
{
    srand((unsigned)time(NULL)); 
    StartGame();  
    return 0;  
}