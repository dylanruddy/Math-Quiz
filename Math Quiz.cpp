#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int testscore = 0;
    const int numQuestions = 10;
    int answers[numQuestions] = {0}; // Array to store user answers

    string introduction = "Welcome to the Math Quiz! This is a 10 question test, your score will appear at the end. Press Enter to begin!";
    cout << introduction << endl;
    cin.get();  // Wait for user to press Enter

    vector<pair<string, vector<string>>> questions = {
        {"What is 2 + 2?", {"A. 1", "B. 2", "C. 3", "D. 4"}},
        {"What is 10 + 10?", {"A. 10", "B. 20", "C. 30", "D. 42"}},
        {"What is 10 + 20?", {"A. 10", "B. 20", "C. 30", "D. 42"}},
        {"What is 80 * 2?", {"A. 102", "B. 130", "C. 142", "D. 160"}},
        {"What is 71 + 60?", {"A. 153", "B. 134", "C. 143", "D. 131"}},
        {"What is 531 + 2?", {"A. 532", "B. 533", "C. 542", "D. 532"}},
        {"What is 10 % 10?", {"A. 1", "B. 10", "C. 11", "D. 100"}},
        {"What is 154 + 20?", {"A. 174", "B. 275", "C. 174", "D. 3080"}},
        {"What is 800 * 2?", {"A. 1600", "B. 160", "C. 16000", "D. 16"}},
        {"What is 534 + 50?", {"A. 584", "B. 585", "C. 586", "D. 587"}}
    };

    // Iterate over each question
    for (int i = 0; i < numQuestions; ++i) {
        cout << questions[i].first << endl;
        for (const string& option : questions[i].second) {
            cout << option << endl;
        }
        cout << "Enter your answer (1-4): ";
        cin >> answers[i];
    }

    // Calculate test score
    for (int i = 0; i < numQuestions; ++i) {
        if (answers[i] == 4) { // Assuming correct answer is always D (option 4)
            testscore++;
        }
    }

    cout << "Your test score is " << testscore << endl;

    return 0;
}
