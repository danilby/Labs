#pragma once
#ifndef _PLAYBULL_H_
#define _PLAYBULL_H_
#include "Game.h"
#include "S_Game.h"
int Bot_Number(int difficult,bool zero);
int* Player_Number(const int& player,const int difficult);
int* ConvertNumberToArray(int bot, const int difficult);
void PlayBullCow(int& count, int& bot_t, int& player, int difficult, int& bulls, int& cows,bool zero, bool flag);
void CheckNumbers(Game& game, int* player_array, int* bot_array, const int difficult);
int GetBulls(Game game);
int GetCows(Game game);
#endif // !_PLAYBULL_H_