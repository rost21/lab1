#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string>
using namespace std;
class Parket {
private:
	float lenght, width;
public:
	Parket(float l, float w) {
		lenght = l;
		width = w;
	}
	
	float getParketL()
	{
		return lenght;
	}
	float getParketW()
	{
		return width;
	}
};

class Room : public Parket{
private:
	float lenght, height, width;
	string color;
	float litres;
	
public:
	Room(float l, float h, float w, string col, float litr, float len, float wid): Parket(len, wid) {
		lenght = l;
		height = h;
		width = w;
		color = col;
		litres = litr;
	}
	
	void getRoom()
	{
		cout << "Объект Room: " << lenght << "/" << height << "/" << width << "/" << color << "/" << litres << "/" << getParketL() << "/" << getParketW() << endl;
	}
};


class Window {
private:
	float width, height;
public:
	Window(float w, float h) {
		setWindow(w, h);
	}
	void setWindow(float w, float h)
	{
		width = w;
		height = h;
	}
	void getWindow()
	{
		cout << "Объект Window: " << width << "/" << height << endl;
	}
};
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	Parket p1(1,2);
	cout << p1.getParketL() << "/" << p1.getParketW() << endl;
	Room r1(100, 200, 300, "grey", 500, p1.getParketL(), p1.getParketW());
	r1.getRoom();
	return 0;
}