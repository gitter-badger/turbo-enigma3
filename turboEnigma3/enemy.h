#ifndef ENEMY_H
#define ENEMY_H
#endif

#pragma once

#include <iostream>
#include <string>

using namespace std;


class enemy
{
protected:
	int health;
	string name;

public:
	enemy();
	enemy(string n);

	~enemy();

	int getHealth();
	void damage(int amount);
	string getName();
	void setName(string n);
};
