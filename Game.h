#include "Frame.h"

class Game
{
public:
	void Roll(int pins);
	int Score();
private:
	Frame frame[10];
	int currentFrame;
};
