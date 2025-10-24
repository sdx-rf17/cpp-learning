#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

enum enOperationType{add = 1 , sub = 2 , mult = 3 , Div = 4 , MixOp = 5};

enum enQuestionsLevel{easy = 1 , med = 2 , hard = 3 , mix = 4};

string GetOpTypeSymbol(enOperationType OpType){

    switch (OpType)
    {
        case enOperationType::add:
        return "+";
        case enOperationType::sub:
        return "-";
        case enOperationType::mult:
        return "*";
        case enOperationType::Div:
        return "/";
        default:
            return "Mix";
    }

}

string GetQuestionLevelText(enQuestionsLevel QusIndex){
   
    string arrQuestionLevel[4] = {"Easy" , "Med" , "Hard" , "Mix"};
    return arrQuestionLevel[QusIndex - 1];
}

int RandomNumber(int From , int To){
    int rand_num = rand() % (To - From + 1 ) + From;
    return rand_num;
}

void SetScreenColor(bool Right){

    if(Right) {
        system("color 2F");
    } else {
        system("color 4F");
    }
}

short ReadHowManyQuestions(){

    short NumberOfQuestion;

    do{

        cout << "Enter how many question to answer from 1 to 10: ";
        cin >> NumberOfQuestion;

    }while(NumberOfQuestion < 1 || NumberOfQuestion > 10);

    return NumberOfQuestion;
}

enOperationType ReadOpType(){
 
    short OpType= 0;
    do {
        cout << "Enter the Operation Type [1] Add , [2] Sub , [3] Mult , [4] Div , [5] Mix_Operation: ";
        cin >> OpType;
    }while (OpType < 1 || OpType > 5);

    return (enOperationType) OpType;

}

enQuestionsLevel ReadQuestionsLevel(){

    short QuestionLevel = 0;
    do {
        cout << "Enter the Question level [1] Easy , [2] Med , [3] Hard , [4] Mix : ";
        cin >> QuestionLevel;
    }while (QuestionLevel < 1 || QuestionLevel > 4);

    return (enQuestionsLevel)QuestionLevel;
} 

struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};

struct stQuizz
{
    stQuestion QuestionList[100];
    short NumberOfQuestions;
    enQuestionsLevel QuestionsLevel;
    enOperationType OpType;
    short NumberOfWrongAnswers = 0;
    short NumberOfRightAnswers = 0;
    bool isPass = false;
};

int SimpleCalculator(int Number1 , int Number2 , enOperationType OpType){

    switch (OpType){
        case enOperationType::add:
            return Number1 + Number2;
            break;
        case enOperationType::sub:
            return Number1 - Number2;
            break;
        case enOperationType::mult:
            return Number1 * Number2;
            break;
        case enOperationType::Div:
            return Number1 / Number2;
            break;
        default:
            return Number1 + Number2;
    }

}

enOperationType GetRandomOperationType(){

    int Op = RandomNumber(1 , 4);
    return (enOperationType)Op;
}

stQuestion GenerateQuestion(enQuestionsLevel QuestionLevel , enOperationType OpType){

    stQuestion Question;

    if (QuestionLevel == enQuestionsLevel::mix)
    {
        QuestionLevel = (enQuestionsLevel)RandomNumber(1,3);
    }

    if (OpType == enOperationType::MixOp)
    {
        OpType = (enOperationType)RandomNumber(1 , 4);
    }

    Question.OperationType = OpType;

    switch (QuestionLevel)
    {
    case enQuestionsLevel::easy:
         Question.Number1 = RandomNumber(1 , 10); 
         Question.Number2 = RandomNumber(1 , 10); 

         Question.CorrectAnswer = SimpleCalculator(Question.Number1 , Question.Number2 , OpType);
         Question.QuestionLevel = QuestionLevel;
         return Question;
    case enQuestionsLevel::med:
         Question.Number1 = RandomNumber(10 , 50); 
         Question.Number2 = RandomNumber(10 , 50); 

         Question.CorrectAnswer = SimpleCalculator(Question.Number1 , Question.Number2 , OpType);
         Question.QuestionLevel = QuestionLevel;
         return Question;
    case enQuestionsLevel::hard:
         Question.Number1 = RandomNumber(50 , 100); 
         Question.Number2 = RandomNumber(50 , 100); 

         Question.CorrectAnswer = SimpleCalculator(Question.Number1 , Question.Number2 , OpType);
         Question.QuestionLevel = QuestionLevel;
         return Question;
    }

    return Question;
}

void GenerateQuizzQuestion(stQuizz& Quizz){

    for (short Question = 0; Question < Quizz.NumberOfQuestions; Question++)
    {
        Quizz.QuestionList[Question] = GenerateQuestion(Quizz.QuestionsLevel , Quizz.OpType);
    }
}

int ReadQuestionAnswer()
{
    int answer;
    cin >> answer;
    return answer;
}

void PrintTheQuestion(stQuizz& Quizz, short QuestionNumber){
    
    cout << "\n";
    cout << "Question [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "] \n\n";
    cout << Quizz.QuestionList[QuestionNumber].Number1 << endl;
    cout << Quizz.QuestionList[QuestionNumber].Number2 << " ";
    cout << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType);
    cout << "\n----------" << endl; 
}

void CorrectTheQuestionAnswer(stQuizz& Quizz, short QuestionNumber){

    if(Quizz.QuestionList[QuestionNumber].PlayerAnswer != Quizz.QuestionList[QuestionNumber].CorrectAnswer ){
        Quizz.QuestionList[QuestionNumber].AnswerResult = false;
        Quizz.NumberOfWrongAnswers++;

        cout << "Wrong Answer :-( \n";
        cout << "The right Answer is: ";
        cout << Quizz.QuestionList[QuestionNumber].CorrectAnswer << "\n";
    }
    else
    {
        Quizz.QuestionList[QuestionNumber].AnswerResult = true;
        Quizz.NumberOfRightAnswers++;

        cout << "Right Answer :-) \n";
    }

    cout << endl;
    SetScreenColor(Quizz.QuestionList[QuestionNumber].AnswerResult);
}

void AskAndCorrectQuestionListAnswers(stQuizz& Quizz){
   
    for(short QuestionNumber = 0 ; QuestionNumber < Quizz.NumberOfQuestions ; QuestionNumber++){

        PrintTheQuestion(Quizz , QuestionNumber);
        Quizz.QuestionList[QuestionNumber].PlayerAnswer = ReadQuestionAnswer();
        CorrectTheQuestionAnswer(Quizz , QuestionNumber);
    }
    
    Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);
}

string GetFinalResultsText(bool Pass){
    
    return (Pass ? "Pass :-)" : "Fail :-(");
}

void PrintQuizzResults(stQuizz Quizz){

    SetScreenColor(Quizz.isPass);

    cout << "\n";
    cout << "____________________________\n\n";
    cout << "Final Result is " << GetFinalResultsText(Quizz.isPass);
    cout << "\n____________________________\n\n";

    cout << "Number of Questions    :" << Quizz.NumberOfQuestions << endl;
    cout << "Question Level         :" << GetQuestionLevelText (Quizz.QuestionsLevel) << endl;
    cout << "Operation Type         :" << GetOpTypeSymbol (Quizz.OpType) << endl;
    cout << "Number of Right Answer :" << Quizz.NumberOfRightAnswers << endl;
    cout << "Number of Wrong Answer :" << Quizz.NumberOfWrongAnswers << endl;
    cout << "____________________________\n\n";
}

void PlayMathGame(){
    stQuizz Quizz;

    Quizz.NumberOfQuestions = ReadHowManyQuestions();
    Quizz.QuestionsLevel = ReadQuestionsLevel();
    Quizz.OpType = ReadOpType();

    GenerateQuizzQuestion(Quizz);
    AskAndCorrectQuestionListAnswers(Quizz);
    PrintQuizzResults(Quizz);

}

void ResetScreen(){
    system("cls");
    system("color 0F");
}

void startGame(){
    char playAgain = 'Y';

    do{
        ResetScreen();
        PlayMathGame();

        cout << endl << "Do you want to play again? Y/N : ";
        cin >> playAgain;
    }while(playAgain == 'y' || playAgain == 'Y');

}

int main (){
    srand((unsigned)time(NULL));

    startGame();
}