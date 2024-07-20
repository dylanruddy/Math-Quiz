#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int testscore = 0;
    int question1answer, question2answer, question3answer, question4answer, question5answer, question6answer, question7answer, question8answer, question9answer, question10answer;

    cout << "WELCOME TO THE DYLAN MATH QUIZ!" << endl;
     cout << " " << endl;
    cout << "This is a 10 question test, your score will be calculated and appear at the end of the test." << endl;
    cout << "Press Any Key To Begin..." << endl;
    cin.get();  // Wait for user to press Enter

    vector<pair<string, vector<string>>> questions = {
        {"What is 2 + 2?", {"A. 1", "B. 2", "C. 3", "D. 4"}},
        {"What is 10 + 10?", {"A. 10", "B. 20", "C. 30", "D. 42"}},
        {"What is 10 + 20?", {"A. 10", "B. 20", "C. 30", "D. 42"}},
        {"What is 80 * 2?", {"A. 102", "B. 130", "C. 142", "D. 160"}},
        {"What is 71 + 60?", {"A. 153", "B. 134", "C. 143", "D. 131"}},
        {"What is 531 + 2?", {"A. 532", "B. 533", "C. 542", "D. 532"}},
        {"What is 10 % 10?", {"A. 1", "B. 10", "C. 11", "D. 100"}},
        {"What is 154 + 20?", {"A. 175", "B. 275", "C. 174", "D. 3080"}},
        {"What is 800 * 2?", {"A. 1600", "B. 160", "C. 16000", "D. 16"}},
        {"What is 534 + 50?", {"A. 585", "B. 584", "C. 586", "D. 587"}}
    };

    // Question 1
    cout << "QUESTION 1:" << endl;
    cout << questions[0].first << endl;
    for (const string& option : questions[0].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question1answer;

    // Question 2
    cout << "QUESTION 2:" << endl;
    cout << questions[1].first << endl;
    for (const string& option : questions[1].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question2answer;

    // Question 3
    cout << "QUESTION 3:" << endl;
    cout << questions[2].first << endl;
    for (const string& option : questions[2].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question3answer;

    // Question 4
    cout << "QUESTION 4:" << endl;
    cout << questions[3].first << endl;
    for (const string& option : questions[3].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question4answer;

    // Question 5
    cout << "QUESTION 5:" << endl;
    cout << questions[4].first << endl;
    for (const string& option : questions[4].second) {
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question5answer;

    // Question 6
    cout << "QUESTION 6:" << endl;
    cout << questions[5].first << endl;
    for (const string& option : questions[5].second){
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question6answer;

    // Question 7
    cout << "QUESTION 7:" << endl;
    cout << questions[6].first << endl;
    for (const string& option : questions[6].second){
        cout << option << endl;
    }
    cout << "Enter your answer (1-4): ";
    cin >> question7answer;

    // Question 8
    cout << "QUESTION 8:" << endl;
    cout << questions[7].first << endl;
    for (const string& option : questions[7].second){
        cout << option << endl;
    }  
    cout << "Enter your answer (1-4): ";
    cin >> question8answer;

    // Question 9
    cout << "QUESTION 9:" << endl;
    cout << questions[8].first << endl;
    for (const string& option : questions[8].second){
        cout << option << endl;
    }  
    cout << "Enter your answer (1-4): ";
    cin >> question9answer;

    // Question 10
    cout << "QUESTION 10:" << endl;
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
    if (question8answer == 3) testscore++;
    if (question9answer == 1) testscore++;
    if (question10answer == 2) testscore++;

    cout << "Your test score is " << testscore << "/10." << endl;

system("PAUSE");

    return 0;
}