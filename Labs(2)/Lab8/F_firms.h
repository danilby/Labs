#pragma once
#include "S_firms.h"
#ifndef _F_FIRMS_H_
#define _F_FIRMS_H_
Firms* CreateListByHand();
Firms* CreateListByRandom();
Firms* LoadFile();
void ClearList(Firms** begin);
bool isNull(Firms* begin);
void PrintList(Firms* begin);
void SearchListByFirm(Firms* begin);
void SearchListByNop(Firms* begin);
void SearchListByVolume(Firms* begin);
void SearchListByPart(Firms* begin);
void AddFirmBegin(Firms** begin);
void AddFirmEnd(Firms* begin);
void AddFirmByKey(Firms* begin);
void DeleteFirmBegin(Firms** begin);
void DeleteFirmEnd(Firms** begin);
void DeleteFirmByKey(Firms** begin);
void SortFirm(Firms* begin);
void SaveFile(Firms* begin);
#endif // !_F_FIRMS_H_


