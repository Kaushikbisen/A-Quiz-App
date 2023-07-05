// Task 3 Quiz app7

#include <iostream>
using namespace std;

int main() {
    int score = 0;

    cout << "Welcome to the Quiz App!" << endl;

    // Question 1
    cout << "Q1: What is the capital city of India?" << endl;
    cout << "a) Delhi" << endl;
    cout << "b) Mumbai" << endl;
    cout << "c) Chennai" << endl;
    cout << "Your answer: ";
    
    char q1Answer;
    cin >> q1Answer;

    if (q1Answer == 'a' || q1Answer == 'A') {
        cout << "Correct answer!" << endl;
        score++;
    } else {
        cout << "Wrong answer!" << endl;
    }

    // Question 2
    cout << "Q2: What is the largest planet in our solar system?" << endl;
    cout << "a) Jupiter" << endl;
    cout << "b) Earth" << endl;
    cout << "c) Saturn" << endl;
    cout << "Your answer: ";

    char q2Answer;
    cin >> q2Answer;

    if (q2Answer == 'a' || q2Answer == 'A') {
        cout << "Correct answer!" << endl;
        score++;
    } else {
        cout << "Wrong answer!" << endl;
    }

    // Question 3
    cout << "Q3: Who painted the Mona Lisa?" << endl;
    cout << "a) Leonardo da Vinci" << endl;
    cout << "b) Pablo Picasso" << endl;
    cout << "c) Vincent van Gogh" << endl;
    cout << "Your answer: ";

    char q3Answer;
    cin >> q3Answer;

    if (q3Answer == 'a' || q3Answer == 'A') {
        cout << "Correct answer!" << endl;
        score++;
    } else {
        cout << "Wrong answer!" << endl;
    }

    // Quiz completed
    cout << "Quiz completed!" << endl;
    cout << "Your score: " << score << " out of 3" << endl;

    return 0;
}
