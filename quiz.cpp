#include <iostream>
#include <string>
using namespace std;

/*These creates variables for guessing in the quiz, and the total guesses correctly.*/
int Guess;
int Total;

/*This creates a class called Question*/
class Question {
    private:
        /*These strings build the foundation of the quiz, as they allow the questions to be printed and the choices to be shown.*/
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;

        int Correct_Answer;
        int Question_Score;

    public:
        void setValues (string, string, string, string, string, int, int);
        void askQuestion ();

};

void Question::setValues (string q,string a1,string a2,string a3,string a4,int ca,int pa) {
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion() {
    cout << Question_Text;
    cout << "1. " << Answer_1;
    cout << "2. " << Answer_2;
    cout << "3. " << Answer_3;
    cout << "4. " << Answer_4;

    cout << "What is your answer ?";
    cin >> Guess;

    if (Guess == Correct_Answer)
    {
        cout << "That's correct!";
        Total = Total + Question_Score;

        cout << "Score: " << Question_Score << " Out of " << Question_Score << "!";
    }
    else
    {
        cout << "I'm sorry, but that is incorrect.";
        cout << "Score: 0" << "Out of " << Question_Score << "!";
        cout << "The correct answer is " << Correct_Answer << ".";
    }
}
/*This is the main function that runs the whole program.*/
int main () {
    /*This prompts the user to enter their name. But has no use yet until I figure things out.*/
    string Name;
    cout << "What's your name? ";
    cin >> Name1;

    string player;

    /*These are the variables for questions 1 and 2.*/
    Question q1;
    Question q2;

    /*These are the two questions the program is supposed to ask the user*/
    q1.setValues("what is the only function all c++ programes must contain?",
            "start*()",
            "system()",
            "main()",
            "program()",
            3,
            10);

    q2.setValues("How long do you think it took Robert to write this program?",
            "6 hours",
            "14 hours",
            "9 hours",
            "20 hours",
            2,
            10);

    /*I believe these call the questions so that they may be shown.*/
    q1.askQuestion();
    q2.askQuestion();

    /*This prints out your score once the quiz is over, and ends the quiz.*/
    cout << "your total score is " << Total << "out of 100 " ;
    cout << endl;
}