#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int testscore = 0;

    string introduction = "Welcome to the Math Quiz! This is a 10 question test, your score will appear at the end. Press Enter to begin!";
    int teststart;
    string question1 = "What is 2 + 2?";
    int question1answer;

    string finaltestscore = "Your test score is ";

    vector<string> questionone = {"A. 1", "B. 2", "C. 3", "D. 4"};

    // Display introduction
    cout << introduction << endl;
    cin.get();  // Wait for user to press Enter

    // Display the first question and options
    cout << question1 << endl;
    for (const string& option : questionone) {
        cout << option << endl;
    }

    // Get user answer
    cout << "Enter your answer (1-4): ";
    cin >> question1answer;

    // Check the answer and update the score
    if (question1answer == 4) {
        testscore = 1;
    }

    // Display the final test score
    cout << finaltestscore << testscore << endl;

    return 0;
}