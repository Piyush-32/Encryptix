#include<bits/stdc++.h>
using namespace std;
int main() {
    
    srand(static_cast<unsigned int>(std::time(0)));

    
    int randomNumber = std::rand() % 100 + 1;
    int guess = 0;

    cout << "I have generated a random number between 1 and 100.\n";
    cout << "Can you guess what it is?\n";

    
    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number.\n";
        }
    } while (guess != randomNumber);

    return 0;
}
