#include <iostream>
using namespace std;

int main()
{
    string questions[5] = {
        "What is the capital of India?",
        "Which language is used for system programming?",
        "Who is known as Father of C Language?",
        "Which data structure uses FIFO?",
        "Which company developed Java?"
    };

    string options[5][4] = {
        {"A. Mumbai", "B. Delhi", "C. Kolkata", "D. Chennai"},
        {"A. Python", "B. Java", "C. C", "D. HTML"},
        {"A. Dennis Ritchie", "B. Bjarne Stroustrup", "C. James Gosling", "D. Charles Babbage"},
        {"A. Stack", "B. Queue", "C. Tree", "D. Graph"},
        {"A. Microsoft", "B. Apple", "C. Sun Microsystems", "D. Google"}
    };

    char correctAnswers[5] = {'B', 'C', 'A', 'B', 'C'};
    int prize[5] = {1000, 2000, 3000, 4000, 5000};

    int score = 0;
    bool lifelineUsed = false;
    char answer;

    cout << "====================================\n";
    cout << "        WELCOME TO QUIZ GAME        \n";
    cout << "====================================\n\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "Q" << i+1 << ": " << questions[i] << "\n";

        for(int j = 0; j < 4; j++)
        {
            cout << options[i][j] << "\n";
        }

        cout << "\nEnter your answer (A/B/C/D)";
        
        if(!lifelineUsed)
            cout << " | L for 50-50";

        cout << " | Q to Quit: ";

        cin >> answer;

        // Quit option
        if(answer == 'Q' || answer == 'q')
        {
            cout << "\nYou chose to quit.\n";
            break;
        }

        // Lifeline option
        if((answer == 'L' || answer == 'l') && !lifelineUsed)
        {
            lifelineUsed = true;
            cout << "\n50-50 Lifeline Activated!\n";

            // Show correct answer and one wrong answer
            cout << "Possible Options:\n";

            cout << options[i][correctAnswers[i] - 'A'] << "\n";

            // show one extra wrong option
            for(int j = 0; j < 4; j++)
            {
                if(j != (correctAnswers[i] - 'A'))
                {
                    cout << options[i][j] << "\n";
                    break;
                }
            }

            cout << "Enter your answer: ";
            cin >> answer;
        }

        // Check Answer
        if(answer == correctAnswers[i] || answer == correctAnswers[i] + 32)
        {
            cout << "Correct Answer!\n\n";
            score += prize[i];
        }
        else
        {
            cout << "Wrong Answer! Game Over.\n";
            break;
        }
    }

    cout << "\n====================================\n";
    cout << "Your Total Winning Amount: Rs. " << score << endl;
    cout << "Thank You For Playing!\n";
    cout << "====================================\n";

    return 0;
}
