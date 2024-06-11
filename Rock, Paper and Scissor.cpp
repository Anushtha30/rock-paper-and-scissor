#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// Function to get the computer's choice
string getComputerChoice() {
    int randomChoice = rand() % 3; // Random number between 0 and 2
    switch (randomChoice) {
        case 0:
            return "rock";
        case 1:
            return "paper";
        case 2:
            return "scissors";
    }
    return "rock"; // Default return value
}

// Function to determine the winner
string determineWinner(string playerChoice, string computerChoice) {
    if (playerChoice == computerChoice) {
        return "It's a tie!";
    } else if ((playerChoice == "rock" && computerChoice == "scissors") ||
               (playerChoice == "scissors" && computerChoice == "paper") ||
               (playerChoice == "paper" && computerChoice == "rock")) {
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    string playerChoice;
    srand(time(0)); // Seed the random number generator

    cout << "Welcome to Rock-Paper-Scissors!" << endl;
    cout << "Enter your choice (rock, paper, or scissors): ";
    cin >> playerChoice;

    string computerChoice = getComputerChoice();
    cout << "Computer chose: " << computerChoice << endl;

    string result = determineWinner(playerChoice, computerChoice);
    cout << result << endl;

    return 0;
}
