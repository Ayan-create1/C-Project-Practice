#include <iostream>
using namespace std;

int main(){
    string questions[] = {"1. What is capital of USA?: ",
                           "2. Is earth flat?: ",
                           "3. What is capital of South Korea?: ",
                           "4. What year was C++ created?: "
                         };
    string options[][4] = {{"A. Japan","B. Delhi", "C. Washington D.C", "D. New York"},
                           {"A. yes", "B. no", "C. sometimes", "D. idk"},
                           {"A. Seoul", "B. Busan", "C. Tokyo", "D. Taipei"},
                           {"a. 1969", "B. 1975", "C. 1985", "D. 1989"}
                          };

    char answerKey[] = {'C', 'B', 'A', 'C'};
    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++){
        cout << "*************************************\n";
        cout << questions[i] << "\n";
        cout << "*************************************\n";
        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);
        if(guess == answerKey[i]){
            cout << "CORRECT\n";
            score++;
        } else {
            cout << "WRONG!\n";
            cout << "Answer: " << answerKey[i] << "\n";
        }
    }
    cout << "*************************************\n";
    cout << "*              RESULTS              *\n";
    cout << "*************************************\n";
    cout << "CORRECT GUESSES: " << score << '\n';
    cout << "# of QUESTIONS: " << size << '\n';
    cout << "SCORE: " << (double(score)/size)*100 << "%" << endl;
    return 0;
}