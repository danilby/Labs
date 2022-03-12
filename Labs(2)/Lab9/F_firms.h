#pragma once
#include "S_firms.h"
#ifndef _F_FIRMS_H_
#define _F_FIRMS_H_
void CreateListByHand();
void CreateListByRandom();
void LoadFile();
void ClearList();
bool isNull();
void PrintList();
void PrintListReverse();
void SearchListByFirm(Firms* p);
void SearchListByNop(Firms* p);
void SearchListByVolume(Firms *p);
void SearchListByPart(Firms* p);
void AddFirmBegin();
void AddFirmEnd();
void AddFirmByKey();
void DeleteFirmBegin();
void DeleteFirmEnd();
void DeleteFirmByKey();
void SortFirm();
void SaveFile();
#endif // !_F_FIRMS_H_


