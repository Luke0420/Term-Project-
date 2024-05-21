# 1A2B Game Application with Raspberry Pi Zero 2 W

## Motivation
As enthusiasts of the classic game 1A2B and with our background in Arduino, we are motivated to extend our knowledge to the Raspberry Pi platform. This project allows us to combine our interest in the game with our technical skills in hardware and software, creating an interactive and engaging application.

## Overall Description
This project aims to develop an interactive 1A2B game using a Raspberry Pi Zero 2 W. The game will be implemented with a number pad for user input, a screen for displaying game status, and an audio output for sound effects. Additionally, a web interface will be provided to track game progress and display player statistics.

## Full Functionality

### Game Mechanics
- Players will input guesses through a number pad.
- The screen will display the feedback for each guess in the format “x A y B” where 'A' represents bulls (correct digit and position) and 'B' represents cows (correct digit, wrong position).
- The game will automatically terminate after fifty incorrect guesses with a special message and sound.

### Web Interface
- Display the guessing history of the current game.
- Show the number of guesses made.
- Display the current date and time, allowing users to specify their time zone.
- Login session management with success and failure messages.
- Show user history including time of guesses, date, total playtime, average guess time, ranking based on performance, and give-up times.
- A logout button for user session management.
- Error handling to ensure robust operation.

## Security Features
- Prevent SQL injection and cross-site scripting (XSS) attacks.
- Use PDO for secure database connections.

## Additional Features
- A give-up button to allow users to quit the game at any time.

## Required Components

### Hardware
- Number pad
- Audio output (speaker)
- Raspberry Pi Zero 2 W
- Screen (display)

### Software
- PHP
- HTML
- CSS

## 1A2B Game Rules
Each player thinks of a secret number with no repeated digits. The opponent attempts to guess the number. For each guess, the player is told the number of digits that are correct and in the correct place (bulls) and the number of digits that are correct but in the wrong place (cows). For example, if the secret number is 2170 and the guess is 0123, the response would be "1 bull and 2 cows".

## Application Goal
The goal of this project is to create a fully functional 1A2B game that utilizes the Raspberry Pi Zero 2 W and various peripherals and to provide a web interface for tracking game progress and player statistics. The project will demonstrate knowledge in web server setup, PHP scripting, and relational databases along with hardware-software integration.
