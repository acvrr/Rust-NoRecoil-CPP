#include <windows.h>
#include <iostream>
#include <conio.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>



using namespace std;


///////////////////////////////////////	
void Ates();
INPUT input; // INPUT structure
void Python();
void PythonScope();


int main()
{
	while(1)
	{
		printf("Silah Secin\n1 = Python\n 2 = Python 8x\n3 = LR");
		
		char g = getch();

		
		if (g =='1')
		{
			printf("\n Python Secildi!");
			while(true)
			{
				if((GetKeyState(VK_LBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
				{
					Python();
				}
			}
		}
		if (g =='2')
		{
			printf("\nPython 8x Secildi");
			while(true)
			{
				if((GetKeyState(VK_LBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
				{
					int i = 10;
					while(i>1)
					{
						PythonScope();
						i--;
					}
					
				}
			}
		}
	}
}

void Ates()
{

	memset(&input,0,sizeof(input));

	// fill it out for keyboard key presses...
	input.type=INPUT_KEYBOARD;
	input.ki.wVk=VkKeyScanA('l');

	SendInput(1,&input,sizeof(INPUT)); // 3rd param is size of an INPUT structure
	input.ki.dwFlags=KEYEVENTF_KEYUP;
	SendInput(1,&input,sizeof(INPUT));
}

void Python()
{
	
 	POINT xypos;
	INPUT buffer;
	ZeroMemory(&buffer, sizeof(buffer));
	buffer.type = INPUT_MOUSE;
	buffer.mi.dx = 0;
	buffer.mi.dy = 30;
	buffer.mi.mouseData = 0;
	buffer.mi.dwFlags = MOUSEEVENTF_MOVE;
	buffer.mi.time = 0;
	buffer.mi.dwExtraInfo = 0;
	int delay = 1000000;
	
	printf("\n\nBasladi");
	SendInput(1, &buffer, sizeof(INPUT));
	printf("\nSpray Tamam!");
	printf("\nbeklendi");
	Sleep(50);
}

void PythonScope()
{
	
 	POINT xypos;
	INPUT buffer;
	ZeroMemory(&buffer, sizeof(buffer));
	buffer.type = INPUT_MOUSE;
	buffer.mi.dx = 0;
	buffer.mi.dy = 30;
	buffer.mi.mouseData = 0;
	buffer.mi.dwFlags = MOUSEEVENTF_MOVE;
	buffer.mi.time = 0;
	buffer.mi.dwExtraInfo = 0;
	int delay = 1000000;
	
	printf("\n\nBasladi");
	SendInput(1, &buffer, sizeof(INPUT));
	printf("\nSpray Tamam!");
	printf("\nbeklendi");

}


