#include <iostream>
#include <string>

using namespace std;

int testscore;

string introduction = " Welcome to the Math Quiz! This is a 10 question test, your score will appear at the end. Press any key to begin! ";
int teststart;

string question1 = " What is 2 + 2? ";
int question1answer;

string finaltestscore = " Your test score is ";

int main()
{

cout << introduction;

cout << question1;

cin >> question1answer;

    if (question1answer==4){
        testscore = 1;
    }



cout << testscore;



}