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
	for(int i = 0; i <= currentFrame; i++)
	{
		totalScore += frame[i].Score();
	}
	return totalScore;
}