#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;


class Question {
    private:
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

int main () {

    string Name1;
    cout << "What's your first name player 1? ";
    cin >> Name1;

    string Name2;
    cout << "What's your first name player 2? ";
    cin >> Name2;

    string player1;
    string player2;

    Question q1;
    Question q2;


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


    q1.askQuestion();
    q2.askQuestion();

    cout << "your total score is " << Total << "out of 100 " ;
    cout << endl;
}