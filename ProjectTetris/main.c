#include <stdio.h>
#include <windows.h>

typedef enum {
	RED = 41,
	GREEN,
	YELLOW,
	BLUE,
	PURPLE,
	CYCN,
	WHITE,
	BLACK = 0
} Color;

typedef enum {
	EMPTY = -1,
	I,
	J,
	L,
	O,
	S,
	T,
	Z
} ShapeId;

typedef struct {
	Color color;
	ShapeId shape;
} Block;

int main()
{
	SetConsoleOutputCP(CP_UTF8);
	printf("hello world");

	return 0;
}
