#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int weigh(int leftBalls[], int leftCount, int rightBalls[], int rightCount, int lightBall) {
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

bool isValidInput(int balls[], int count) {
    for (int i = 0; i < count; i++) {
        // Check if ball number is valid (1-8)
        if (balls[i] < 1 || balls[i] > 8) {
            cout << "Invalid! Ball numbers must be between 1 and 8." << endl;
            return false;
        }
        // Check duplicates within same input only
        for (int j = 0; j < i; j++) {
            if (balls[i] == balls[j]) {
                cout << "Ball " << balls[i] << " entered twice!" << endl;
                return false;
            }
        }
    }
    return true;
}

bool hasCrossDuplicate(int leftBalls[], int leftCount, int rightBalls[], int rightCount) {
    for (int i = 0; i < leftCount; i++) {
        for (int j = 0; j < rightCount; j++) {
            if (leftBalls[i] == rightBalls[j]) {
                cout << "Ball " << leftBalls[i] << " cannot be on both sides!" << endl;
                return true;
            }
        }
    }
    return false;
}

int main() {
    srand(time(0));
    int lightBall = rand() % 8 + 1;

    cout << "\nWelcome to the Light Weight Finder Game!\n" << endl;
    cout << "Balls: 1 2 3 4 5 6 7 8" << endl;
    cout << "\nYou have 2 weighings to find the lighter ball among all these balls." << endl;
    cout << "All are identical in size and colour," << endl;
    cout << "But one of them is lighter than the others.\n" << endl;

    for (int weighing = 1; weighing <= 2; weighing++) {
        cout << "--- Weighing " << weighing << " ---" << endl;
        int leftBalls[8], leftCount = 0;
        int rightBalls[8], rightCount = 0;

        // Get left side input with validation
        cout << "How many balls on left side? ";
        cin >> leftCount;
        do {
            cout << "Enter ball numbers for left side: " << endl;
            for (int i = 0; i < leftCount; i++) cin >> leftBalls[i];
        } while (!isValidInput(leftBalls, leftCount));

        // Get right side input with validation
        cout << "How many balls on right side? ";
        cin >> rightCount;
        do {
            cout << "Enter ball numbers for right side: " << endl;
            for (int i = 0; i < rightCount; i++) cin >> rightBalls[i];
        } while (!isValidInput(rightBalls, rightCount));

        // Check if same ball is on both sides
        if (hasCrossDuplicate(leftBalls, leftCount, rightBalls, rightCount)) {
            weighing--; // repeat this weighing
            continue;
        }

        // Weigh and show result
        int result = weigh(leftBalls, leftCount, rightBalls, rightCount, lightBall);

        if (result == -1) {
            cout << "Left side is lighter." << endl;
            if (leftCount > 1) {
                cout << "Hint: lighter ball is one of these: ";
                for (int i = 0; i < leftCount; i++) cout << leftBalls[i] << " ";
                cout << endl;
            }
        }
        else if (result == 1) {
            cout << "Right side is lighter." << endl;
            if (rightCount > 1) {
                cout << "Hint: lighter ball is one of these: ";
                for (int i = 0; i < rightCount; i++) cout << rightBalls[i] << " ";
                cout << endl;
            }
        }
        else {
            cout << "Both sides are equal." << endl;
            cout << "Hint: lighter ball is NOT on the scale!" << endl;
        }
    }

    // Final guess
    int guess;
    cout << "\nNow, can you guess which ball is lighter? ";
    cin >> guess;

    if (guess == lightBall) {
        cout << "Congratulations! You found the lighter ball!" << endl;
    }
    else {
        cout << "Sorry, that's not correct. The lighter ball was Ball " << lightBall << "." << endl;
    }

    return 0;
}
