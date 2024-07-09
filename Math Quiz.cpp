#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int testscore = 0;
    int question1answer, question2answer, question3answer, question4answer, question5answer, question6answer, question7answer, question8answer, question9answer, question10answer;

    string introduction = "Welcome to the Math Quiz! This is a 10 question test, your score will appear at the end. Press Enter to begin!";
    cout << introduction << endl;
    cin.get();  // Wait for user to press Enter

    vector<pair<string, vector<string>>> questions = {
        {"What is 2 + 2?", {"A. 1", "B. 2", "C. 3", "D. 4"}},
        {"What is 10 + 10?", {"A. 10", "B. 20", "C. 30", "D. 42"}},
        {"What is 10 + 20?", {"A. 10", "B. 20", "C. 30", "D. 42"}},
        {"What is 80 * 2?", {"A. 102", "B. 130", "C. 142", "D. 160"}}
    };

//QUESTION 1

    cout << questions[0,1,2,3,4].first << endl;
    for (const string& option : questions[0].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question1answer;





//TEST SCORE CALCULATIONS 

    if (question1answer == 4) testscore++;
    if (question2answer == 2) testscore++;
    if (question3answer == 3) testscore++;
    if (question4answer == 4) testscore++;

    cout << "Your test score is " << testscore << endl;

    return 0;
}