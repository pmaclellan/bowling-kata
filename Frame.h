#ifndef FRAME_H
#define FRAME_H

class Frame
{
public:
	void Roll(int pins);
	int Score();
	bool IsComplete();
	int RollOne();
	int RollTwo();
private:
	int score;
	int rollCount;
	int rolls[2];
};

#endif
