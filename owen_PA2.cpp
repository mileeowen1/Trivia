/*
 Name: Milee Owen
 Class: CPSC 121, Spring 2019
 Date: February 6, 2019
 Programming Assignment: PA2                                                                      
 Description: This program computes a trivia quiz of 10 questions of various types to test if the user is a fan of the tv show Criminal Minds.
*/
#include <iostream>
using namespace std;

int main() {
	
	// declare variables with data types such as int and char
	int numericAnswer = 0;
	int boolAnswer = 0;
	char multipleChoiceAnswer;
	int totalScore = 0;

	// Inform the user about the quiz
	cout << "LET THE 'ARE YOU A FAN OF CRIMINAL MINDS' GAME BEGIN!" << endl << endl;
	
	// Ask Question 1: numerical answer
	cout << "Question 1: What year did the show Criminal Minds air on TV? Please enter an integer answer." << endl;
	while (numericAnswer != 2005) {
		cin >> numericAnswer;
	
		if (numericAnswer == 2005) {
			cout << "Spot on!" << endl;
			totalScore++;
		}
		else if (numericAnswer > 2005) {
			cout << "Too late. Guess earlier." << endl;
			// cout << "The correct answer is 2005." << endl; // what it would say if it was not in a loop
		}
		else {
			cout << "Too early. Guess later." << endl;
			// cout << "The correct answer is 2005." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 2: multiple choice answer
	cout << "Question 2: Who is not a character from season 1? Please answer a character a to e." << endl;
	cout << "a. Aaron Hotchner" << endl;
	cout << "b. Jason Gideon" << endl;
	cout << "c. Derek Morgan" << endl;
	cout << "d. Jennifer Jareau" << endl;
	cout << "e. Emily Prentiss" << endl;
	while (multipleChoiceAnswer != 'e') {
		cin >> multipleChoiceAnswer;
		if (multipleChoiceAnswer == 'a') {
			cout << "You are incorrect. He is. Guess again." << endl;
			// cout << "The correct answer is e." << endl; // what it would say if it was not in a loop
		}
		if (multipleChoiceAnswer == 'b') {
			cout << "You are incorrect. He is. Guess again." << endl;
			// cout << "The correct answer is e." << endl; // what it would say if it was not in a loop
		}
		if (multipleChoiceAnswer == 'c') {
			cout << "You are incorrect. He is. Guess again." << endl;
			// cout << "The correct answer is e." << endl; // what it would say if it was not in a loop
		}
		if (multipleChoiceAnswer == 'd') {
			cout << "You are incorrect. She is. Guess again." << endl;
			// cout << "The correct answer is e." << endl; // what it would say if it was not in a loop
		}
		if (multipleChoiceAnswer == 'e') {
			cout << "You are correct!" << endl;
			totalScore++;
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 3: boolean answer
	cout << "Question 3: True or False. The character Elle Greenaway leaves the BAU in Season 2 Episode 6? Please enter 0 for False or 1 for True." << endl;
	while (boolAnswer != true) {
		cin >> boolAnswer;
		static_cast<bool>(boolAnswer);
		if (boolAnswer == true) {
			cout << "You know your stuff!" << endl;
			totalScore++;
		}
		else if (boolAnswer == false) {
			cout << "Errr. Wrong." << endl;
			// cout << "The correct answer is 1." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 4: boolean answer
	cout << "Question 4: True or False. In the Episode 'Seven Seconds,' Gideon goes missing? Please enter 0 for False or 1 for True." << endl;
	while (boolAnswer != false) {
		cin >> boolAnswer;
		static_cast<bool>(boolAnswer);
		if (boolAnswer == false) {
			cout << "Ding, ding, ding!" << endl;
			totalScore++;
		}
		else if (boolAnswer == true) {
			cout << "Maybe next time." << endl;
			// cout << "The correct answer is 0." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 5: numerical answer
	cout << "Question 5: How many murders does one have to commit in order to be considered a serial killer? Please enter an integer number." << endl;
	while (numericAnswer != 3) {
		cin >> numericAnswer;
	
		if (numericAnswer == 3) {
			cout << "Point!" << endl;
			totalScore++;
		}
		else if (numericAnswer > 3) {
			cout << "Too high. Guess lower." << endl;
			// cout << "The correct answer is 3." << endl; // what it would say if it was not in a loop
		}
		else {
			cout << "Too low. Guess higher." << endl;
			// cout << "The correct answer is 3." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 6: multiple choice answer
	cout << "Question 6: What episode is Hotchner's wife Haley killed? Please answer a character a to e." << endl;
	cout << "a. Faceless, Nameless" << endl;
	cout << "b. 100" << endl;
	cout << "c. Rembrance Of Things Past" << endl;
	cout << "d. Mayhem" << endl;
	cout << "e. The Slave Of Duty" << endl;
	while (multipleChoiceAnswer != 'b') {
		cin >> multipleChoiceAnswer;
			
		if (multipleChoiceAnswer == 'a') {
			cout << "Nope, a little to early in the season. Try again." << endl;
			// cout << "The correct answer is b." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'b') {
			cout << "Bingo!" << endl;
			totalScore++;
		}
		else if (multipleChoiceAnswer == 'c') {
			cout << "She's sadly been long gone. Try again." << endl;
			// cout << "The correct answer is b." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'd') {
			cout << "She's stil alive and kicking. Try again." << endl;
			// cout << "The correct answer is b." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'e') {
			cout << "You are close, but not right. Try again." << endl;
			// cout << "The correct answer is b." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 7: multiple choice answer
	cout << "Question 7: What type of mental disorder does Dr. Reid's mother suffer from? Please answer a character a to e." << endl;
	cout << "a. schizophrenia" << endl;
	cout << "b. dimentia" << endl;
	cout << "c. depression" << endl;
	cout << "d. bipolar disorder" << endl;
	cout << "e. anxiety disorder" << endl;
	while (multipleChoiceAnswer != 'a') {
		cin >> multipleChoiceAnswer;
			
		if (multipleChoiceAnswer == 'a') {
			cout << "Perfect!" << endl;
			totalScore++;
		}
		else if (multipleChoiceAnswer == 'b') {
			cout << "Unfortunately she does not. Attempt again." << endl;
			// cout << "The correct answer is a." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'c') {
			cout << "Unfortunately she does not. Attempt again." << endl;
			// cout << "The correct answer is a." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'd') {
			cout << "Unfortunately she does not. Attempt again." << endl;
			// cout << "The correct answer is a." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'e') {
			cout << "Unfortunately she does not. Attempt again." << endl;
			// cout << "The correct answer is a." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 8: boolean answer
	cout << "Question 8: True or False. Agent Jennifer Jareau has two daughters with William LaMontagne? Please enter 0 for False or 1 for True." << endl;
	boolAnswer = true; // would not enter the while loop
	while (boolAnswer != false) {
		cin >> boolAnswer;
		static_cast<bool>(boolAnswer);
		if (boolAnswer == false) {
			cout << "Fact. She had two boys." << endl;
			totalScore++;
		}
		else if (boolAnswer == true) {
			cout << "Really?! You're joking right." << endl;
			// cout << "The correct answer is 0." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 9: multiple choice answer
	cout << "Question 9: Who were named as godparents to JJ's son Henry? Please answer a character a to e." << endl;
	cout << "a. Emily Prentiss and Derek Morgan" << endl;
	cout << "b. Peneloe Garcia and Derek Morgan" << endl;
	cout << "c. Kate Callahan and Aaron Hotchner" << endl;
	cout << "d. Penelope Garcia and Spencer Reid" << endl;
	cout << "e. Alex Blake and Spencer Reid" << endl;
	while (multipleChoiceAnswer != 'd') {
		cin >> multipleChoiceAnswer;
			
		if (multipleChoiceAnswer == 'a') {
			cout << "They are not. Give it another shot." << endl;
			// cout << "The correct answer is d." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'b') {
			cout << "Only one of is. Give it another shot." << endl;
			// cout << "The correct answer is d." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'c') {
			cout << "They are not. Give it another shot." << endl;
			// cout << "The correct answer is d." << endl; // what it would say if it was not in a loop
		}
		else if (multipleChoiceAnswer == 'd') {
			cout << "Great job! You betcha they are." << endl;
			totalScore++;
		}
		else if (multipleChoiceAnswer == 'e') {
			cout << "Only one of is. Gice it another shot." << endl;
			// cout << "The correct answer is d." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Ask Question 10: numerical answer
	cout << "Question 10: As of today, how many seasons are there? Please enter an integer answer." << endl;
	while (numericAnswer != 14) {
		cin >> numericAnswer;
	
		if (numericAnswer == 14) {
			cout << "Spot on!" << endl;
			totalScore++;
		}
		else if (numericAnswer > 14) {
			cout << "Hopefully there will be more, but as of right now, too many." << endl;
			// cout << "The correct answer is 14." << endl; // what it would say if it was not in a loop
		}
		else {
			cout << "Seriously?! It's too good to have ended with such few seasons!" << endl;
			// cout << "The correct answer is 14." << endl; // what it would say if it was not in a loop
		}
	}
	cout << "Score: " << totalScore << endl << endl;
	
	// Calculate the player's score and tell them how they did
	if (totalScore >= 7) {
		cout << "Right on. Your score is " << totalScore << "/10. You are on fire and a true fan of Criminal Minds!" << endl;
	}
	else if (totalScore >= 4) {
		cout << "You know some of your stuff. Your score is " << totalScore << "/10. Learn more to become a master fan." << endl;
	}
	else if (totalScore >= 0) {
		cout << "You fail. Your score is " << totalScore << "/10. Come back and try again once you've become a true fan." << endl;
	}
	
	return 0;
}
