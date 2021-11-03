//Liam Knapp
//Assignment 3
//CSCN71020

#include <stdio.h>
#include "Header.h"
#include <string.h>
#include <stdlib.h>

void main()
{
	
	char* p1[] = { "rock" }; // initialize the player 1 choice
	char* p2[] = { "test" }; // initialize player 2 choice

	Game(p1, p2); // call the Game function
	
}

char Game(char* p1[], char* p2[]) { // initiallized function in header


	char* out[] = { "Player1", "Player2", "Draw", "Invalid" }; // array for output
	int Player1 = 1, Player2 = 2, Draw = 3, Invalid = 4; // what value to return depending on outcome. this is for proper testing.

		if (strcmp(p1[0], p2[0]) == 0) { // if player 1 and player 2 choices are the same return "draw"
			printf("%s\n", out[2]);
			return Draw; // return 3 to testing
		}

		if (p1[0] == "Rock") { // if player 1 choose rock
			if (p2[0] == "Scissors") {
			printf("%s\n", out[0]);
			return Player1; // return 1 to testing
			}
			if (p2[0] == "Paper") {
			printf("%s\n", out[1]);
			}
		return Player2; // return 2 to testing
		}

		if (p1[0] == "Paper") { // if player 1 choose paper
			if (p2[0] == "Rock") {
				printf("%s\n", out[0]);
				return Player1; // return 1 to testing
			}
			if (p2[0] == "Scissors") {
				printf("%s\n", out[1]);
			}
		return Player2; // return 2 to testing
		}

		if (p1[0] == "Scissors") { // if player 1 choose scissors
			if (p2[0] == "Paper") {
				printf("%s\n", out[0]);
				return Player1; // return 1 to testing
			}
			if (p2[0] == "Rock") {
				printf("%s\n", out[1]);
			}
			return Player2;// return 2 to testing
		}

		printf("%s\n", out[3]);// if none of the win conditions match return invalid
		return Invalid; // return 4 to testing
	}