#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int testscore = 0;

    string introduction = "Welcome to the Math Quiz! This is a 10 question test, your score will appear at the end. Press Enter to begin!";
    int teststart;
    string question1 = "What is 2 + 2?";
    string question2 = "What is 10 + 10?";
    int question1answer;
    int question2answer;

    string finaltestscore = "Your test score is ";

    vector<string> questionone = {"A. 1", "B. 2", "C. 3", "D. 4"};

    vector<string> questiontwo = {"A. 10", "B. 20", "C. 30", "D. 42"};

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

     // Display the second question and options
    cout << question2 << endl;
    for (const string& option : questiontwo) {
        cout << option << endl;
    }

    // Get user answer
    cout << "Enter your answer (1-4): ";
    cin >> question2answer;


    // Check the answer and update the score
    if (question1answer == 4) {
        testscore = 1;
    }

if (question1answer == 2) {
        testscore = 2;
    }

    // Display the final test score
    cout << finaltestscore << testscore << endl;

    return 0;
}