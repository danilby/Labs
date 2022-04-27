
#include "PlayBull.h"
int Bot_Number(const int difficult,bool zero)
{
	int n = pow(10,difficult - 1);
	int bot_number, i = 0;
	int f_zero = 9;
	int *bot = new int [difficult];
	System::Random^ random = gcnew System::Random();
	int index;
	int chose[10] = { 1,2,3,4,5,6,7,8,9,0 };
	if (zero == true) {
		f_zero = 10;
		index = random->Next(0, f_zero - 1);
		bot[i] = chose[index];
		chose[index] = -1;
		bot_number += n * bot[i];
		n /= 10;
		i = 1;
	}
	for (; i < difficult; i++)
	{
		index = random->Next(0, f_zero);
		bot[i] = chose[index];
		if (bot[i] == -1) {
			i--; continue;
		}
		chose[index] = -1;
		bot_number += n * bot[i];
		n /= 10;
	}
	delete[] bot;
	return bot_number;
}
int* ConvertNumberToArray(int bot, const int difficult) {
	int* bot_array = new int [difficult];
	for (int i = difficult - 1; i >= 0; i--)
	{
		bot_array[i] = bot % 10;
		bot /= 10;
	}
	return bot_array;
}
int* Player_Number(int& player, const int difficult) {
	int temp = player;
	int* pl = new int [difficult];
	for (int i = difficult - 1; i >= 0; i--) {
		pl[i] = player % 10;
		player /= 10;
	}
	player = temp;
	return pl;
}
int GetBulls(Game game) {
	return game.bulls;
}
int GetCows(Game game) {
	return game.cows;
}
void CheckNumbers(Game& game, int* player_array, int* bot_array, const int difficult) {
	for (int i = 0; i < difficult; i++)
	{
		for (int j = 0; j < difficult; j++)
		{
			if (player_array[j] == bot_array[i]) {
				if (player_array[j] == bot_array[j])
					game.bulls++;
				else
					game.cows++;
				break;
			}
		}
	}
}
void PlayBullCow(int& count,int& bot_t, int& player, const int difficult, int& bulls, int& cows,bool zero, bool flag) {
	Game game;
	int* player_array, * bot_array;
	static int bot = Bot_Number(difficult,zero);
	if (flag)
		bot = Bot_Number(difficult,zero);
	bot_array = ConvertNumberToArray(bot, difficult);
	bot_t = bot;
	count++;
	game.bulls = 0, game.cows = 0;
	player_array = Player_Number(player, difficult);
	CheckNumbers(game, player_array, bot_array, difficult);
	delete[] player_array;
	delete[] bot_array;
	bulls = GetBulls(game);
	cows = GetCows(game);
}