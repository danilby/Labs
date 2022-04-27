#pragma once
#ifndef _S_GAME_H_
#define _S_GAME_H_
struct Game {
	int cows;
	int bulls;
};
struct Player {
	Player* next;
	char nick[10];
	int count;
};
#endif // !_S_GAME_H_
