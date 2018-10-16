#include "Frame.h"

void Frame::Roll(int pins)
{
	if (pins <=  10 && pins >= 0 &&
		  (this->score + pins) <= 10)
	{
		rolls[rollCount] = pins;
		rollCount++;
		score += pins;
	}
}

int Frame::Score()
{
	return score;
}

bool Frame::IsComplete()
{
	return rollCount == 2;
}

int Frame::RollOne()
{
	return rolls[0];
}

int Frame::RollTwo()
{
	return rolls[1];
}
