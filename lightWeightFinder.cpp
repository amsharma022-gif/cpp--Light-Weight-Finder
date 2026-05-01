#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int weigh(int leftBalls[],int leftCount, int rightBalls[],int rightCount, int lightBall){
    for (int i = 0; i < leftCount; i++) {
        if (leftBalls[i] == lightBall) {
            return -1; // left side is lighter.
        }
    }

    for (int i = 0; i < rightCount; i++) {
        if (rightBalls[i] == lightBall) {
            return 1; // right side is lighter.
        }
    }

    return 0; // both sides are equal.
}

int main(){
    srand(time(0));
    int lightBall = rand() % 8 + 1;

    cout << "Welcome to the Light Weight Finder Game!\n" << endl;
    cout << "Balls: 1 2 3 4 5 6 7 8" << endl;
    cout << "\nYou have 2 weighings to find the lighter ball among all these balls." << endl;
    cout << "All are identical in size and colour," << endl;
    cout << "But one of them is lighter than the others." << endl;

    for (int weighing = 1; weighing <= 2; weighing++) {
        cout << "Weighing " << weighing << ": " << endl;
        int leftBalls[8], leftCount = 0;
        int rightBalls[8], rightCount = 0;

        cout << "How many balls on left side?" << endl;
        cin >> leftCount;
        cout << "Enter the ball numbers for left side: " << endl;
        for (int i = 0; i < leftCount; i++) {
            cin >> leftBalls[i];
        }

        cout << "How many balls on right side?" << endl;
        cin >> rightCount;
        cout << "Enter the ball numbers on right side: " << endl;
        for (int i = 0; i < rightCount; i++) {
            cin >> rightBalls[i];
        }

        int result = weigh(leftBalls, leftCount, rightBalls, rightCount, lightBall);
        if (result == -1 && weighing == 1) {
            cout << "left side is lighter." << endl;
        }
        else if (result == 1 && weighing == 1) {
            cout << "right side is lighter." << endl;
        }
        else if (result == 0 && weighing == 1) {
            cout << "both sides are equal." << endl;
        }

        if (weighing == 2 && result == -1) {
            cout << "The lighter ball is on the left side." << endl;
        }
        else if (weighing == 2 && result == 1) {
            cout << "The lighter ball is on the right side." << endl;
        }
        else if (weighing == 2 && result == 0) {
            cout << "both sides are equal." << endl;
        }
    }

    int guess;
    cout << "Now, can you guess which ball is lighter?" << endl;
    cin >> guess;

    if (guess == lightBall) {
        cout << "Congratulations! You found the lighter Ball!" << endl;
    }
    else {
        cout << "Sorry, that's not correct. The lighter ball was Ball " << lightBall << "." << endl;
    }

    return 0;
}