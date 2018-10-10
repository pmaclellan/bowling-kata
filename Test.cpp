#include "Game.h"
#include <iostream>
#include <string>
#include <cstring>

void bowl_a_frame(Game G, const char* name, int rollOne, int rollB, int expected)
{
	G.Roll(rollOne);
	G.Roll(rollB);

	if (G.Score() != expected)
	{
		printf("FAIL | %s | expected score: %d observed score: %d\n",
			name, expected, G.Score());
	}

	else
	{
		printf("PASS | %s\n", name);
	}

}

void gutter_ball()
{
	Game g = Game();
	g.Roll(0);

	if (g.Score() != 0)
	{
		printf("Gutter ball test failed!\n");
	}
}

void okay_bowl()
{
	Game g = Game();
	g.Roll(7);

	if (g.Score() != 7)
	{
		printf("Oh come on! Your test failed!\n");
	}
}

void extraordinary_bowl()
{
	Game g = Game();
	int tempScore = g.Score();
	g.Roll(11);

	if (g.Score() != tempScore)
	{
		printf("There are only 10 pins, ya doofus!\n");
	}
}

void consecutive_rolls()
{
	Game g = Game();
	g.Roll(7);
	g.Roll(2);

	if (g.Score() != 9)
	{
		printf("My favorite insult is calling people a Doink!\n");
	}
}

void consecutive_rolls_over_10()
{
	Game g = Game();
	g.Roll(7);
	g.Roll(4);

	if (g.Score() != 7)
	{
		printf("Can't get over that 10 limit, brad!\n");
	}
}

void next_turn()
{
	Game g = Game();

	// Frame 1
	g.Roll(7);
	g.Roll(2);

	// Frame 2
	g.Roll(3);
	g.Roll(4);

	if (g.Score() != 16)
	{
		printf("Can you handle the second frame, Brad?\n");
	}
}

int main()
{
	//gutter_ball();
	bowl_a_frame(Game(), "Gutter Frame", 0, 0, 0);
	bowl_a_frame(Game(), "Okay Frame", 3, 4, 7);
	bowl_a_frame(Game(), "Impossible Frame", 11, 0, 0);
	bowl_a_frame(Game(), "Impossible Frame", 7, 7, 7);
	consecutive_rolls();
	consecutive_rolls_over_10();
	next_turn();
	printf("\nFinished Running!\n\n");
	return 0;
}