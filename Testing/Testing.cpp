#include "pch.h"
#include "CppUnitTest.h"
#include <string.h>
#include <stdlib.h>

extern "C" { // call functions from Main.c
	char Game(char* p1[], char* p2[]);
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testing
{
	TEST_CLASS(Testing)
	{
	public:
		TEST_METHOD(TestPlayer1Wins) // Tests to see if Player 1 will win. You can enter any situation where player 1 will win and it will pass if they did.
		{
			int Player1 = 0;
			char* p1[] = { "Rock" };
			char* p2[] = { "Scissors" };
			Player1 = Game(p1, p2);
			Assert::AreEqual(1, Player1); // 1 is returned if there is a Player 1 victory
		}
		TEST_METHOD(TestPlayer2Wins) // Tests to see if Player 2 will win. You can enter any situation where Player 2 will win and it will pass if they did.
		{
			int Player2 = 0;
			char* p1[] = { "Paper" };
			char* p2[] = { "Scissors" };
			Player2 = Game(p1, p2);
			Assert::AreEqual(2, Player2); // 2 is returned if there is a Player 2 victory
		}
		TEST_METHOD(TestDraw) // Tests to see if the text enetered is the same if it is pass the test otherwise the test will fail
		{
			int Draw = 0;
			char* p1[] = { "Rock" };
			char* p2[] = { "Rock" };
			Draw = Game(p1, p2);
			Assert::AreEqual(3, Draw); // 3 is returned if there is a draw
		}
		TEST_METHOD(TestInvalid) // Tests to see if the text enetered is the invalid if it is pass the test otherwise the test will fail
		{
			int Invalid = 0;
			char* p1[] = { "Invalid" };
			char* p2[] = { "Paper" };
			Invalid = Game(p1, p2);
			Assert::AreEqual(4, Invalid); // 4 is returned if there is invalid text
		}
	};
}