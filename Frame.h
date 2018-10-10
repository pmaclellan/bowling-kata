class Frame
{
public:
	void Roll(int pins);
	int Score();
	bool IsComplete();
private:
	int score;
	int rollCount;

};