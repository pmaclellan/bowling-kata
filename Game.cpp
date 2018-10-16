#include "Game.h"

void Game::Roll(int pins)
{
	if(frame[currentFrame].IsComplete())
	{
		currentFrame++;
	}

	frame[currentFrame].Roll(pins);
}

int Game::Score()
{
	int totalScore = 0;
	for(int i = 9; i >= 0; i--)
	{
		if (frame[i].Score() == 10)
		{
			// We rolled a spare
			totalScore += frame[i].Score();
			totalScore += frame[i + 1].RollOne();
		}
		else
		{
			totalScore += frame[i].Score();
		}

	}
	return totalScore;
}
