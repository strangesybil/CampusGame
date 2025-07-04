🏫 Campus Game
Author: Raemae Kok
Course: CISC 1600 - Computer Science I
Last Edited: October 15, 2022

🎮 Description
Campus Game is a simple C++ console game where your goal is to reach campus within four moves. You start 14 miles away, and on each turn, you choose a mode of transportation:

🚍 Bus: moves you 2 miles closer

🚇 Subway: moves you 5 miles closer

🚀 Jetpack: moves you 10 miles closer

The challenge is to reach exactly zero miles left — not to overshoot the target! If you do, you lose the game.

✏️ How it works
The player has 4 turns to choose how to travel.

After each move, the game updates and shows your remaining distance.

If you land exactly at 0 miles, you win.

If you go below 0 miles, you overshot and lose.

If you don't reach campus in 4 turns, you lose.

🛠️ Features
Input validation: prompts the user again if the travel choice isn’t valid.

Clear status updates after each turn.

Handles edge cases like overshooting the campus.

📦 How to run
Make sure you have a C++ compiler installed. Then:
g++ -o campus_game campus_game.cpp
./campus_game
