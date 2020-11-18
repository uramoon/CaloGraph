#pragma once
#include <vector>
#include <string>
#include "Graph.h"
#include "Simple_window.h"

#define GRAPH_WIDTH 200
using namespace Graph_lib;

class Drawing {
public:
	Drawing(Point tl,int width,int height,string name);
	~Drawing();

	void attachAxis(int x, int y);	//x,y�� �������� �ϴ� �� ����
	
	Simple_window* winp() { return win; };
private:
	Simple_window* win;
};