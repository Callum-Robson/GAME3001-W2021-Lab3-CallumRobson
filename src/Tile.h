#pragma once
#ifndef __TILE__
#define __TILE__
#include "DisplayObject.h"

class Tile : public DisplayObject
{
public:
	Tile();
	~Tile();
	// Life-Cycle functions
	void draw() override;
	void update() override;
	void clean() override;
	
};
#endif //define (__TILE__)