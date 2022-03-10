#include <iostream>

int main()
{
    int days, hours, minutes, sec;
    days = 365;//Всего дней в году
    hours = 24;//часов
    minutes = 60;//минут
    sec = 60;//секунд
    int SecInYear = days * hours * minutes * sec;//Всего секунд в году
    long long hYear = 100;
    long long thYear = 1000;//кол-во лет
    int sec1 = hYear * (days + (hYear / 4)) * hours * minutes * sec;
    int sec2 = thYear * (days + (thYear / 4)) * hours * minutes * sec;
    long long lsec1 = hYear * (days + (hYear / 4)) * hours * minutes * sec; //Секунд в 100 лет
    long long lsec2 = thYear * (days + (thYear / 4)) * hours * minutes * sec;//Секунд в 1000 лет



}