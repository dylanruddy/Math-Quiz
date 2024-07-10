#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int testscore = 0;
    int question1answer, question2answer, question3answer, question4answer, question5answer, question6answer, question7answer, question8answer, question9answer, question10answer;

    string introduction = "Welcome to the Math Quiz! This is a 4 question test, your score will appear at the end. Press Enter to begin!";
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

    // Question 1
    cout << questions[0].first << endl;
    for (const string& option : questions[0].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question1answer;

    // Question 2
    cout << questions[1].first << endl;
    for (const string& option : questions[1].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question2answer;

    // Question 3
    cout << questions[2].first << endl;
    for (const string& option : questions[2].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question3answer;

    // Question 4
    cout << questions[3].first << endl;
    for (const string& option : questions[3].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question4answer;

    // Question 5
    cout << questions[4].first << endl;
    for (const string& option : questions[4].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question5answer;

    // Question 6
    cout << questions[5].first << endl;
    for (const string& option : questions[5].second){
        cout << option << endl;
    }
    
    cout << "Enter your answer (1-4): ";
    cin >> question6answer;

    // Question 7
    cout << questions[6].first << endl;
    for (const string& option : questions[6].second){
        cout << option << endl;
    }

    cout << "Enter your answer (1-4): ";
    cin >> question7answer;

    // Question 8
    cout << questions[7].first;
    for (const string& option : questions[7].second){
        cout << option << endl;
    }  

    cout << "Enter your answer (1-4): ";
    cin >> question8answer;

    // Question 9
    cout << questions[8].first;
    for (const string& option : questions[8].second){
        cout << option << endl;
    }  

    cout << "Enter your answer (1-4): ";
    cin >> question9answer;

    // Question 10
    cout << questions[9].first << endl;
    for (const string& option : questions[9].second){
        cout << option << endl;
    }

    cout << "Enter your answer (1-4): ";
    cin >> question10answer;

    // Test score calculations
    if (question1answer == 4) testscore++;
    if (question2answer == 2) testscore++;
    if (question3answer == 3) testscore++;
    if (question4answer == 4) testscore++;
    if (question5answer == 4) testscore++;
    if (question6answer == 1) testscore++;
    if (question7answer == 1) testscore++;
    if (question8answer == 1) testscore++;
    if (question9answer == 1) testscore++;
    if (question10answer == 1) testscore++;

    cout << "Your test score is " << testscore << endl;

    return 0;
}
