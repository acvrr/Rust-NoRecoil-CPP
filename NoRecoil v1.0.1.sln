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
bool Dongu = false;
void SAR();
void SARScope();


int main()
{
	while(1)
	{
		printf("\n\n\nSilah Secin\nCTRL + 1 = Python\nCTRL + 2 = Python 8x\nCTRL + 3 = SAR\nCTRL + 4 = SAR 8x");
		
		char g = getch();

		
		if ((GetKeyState(VK_NUMPAD1) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
		{
			printf("\nPython Secildi!");
			printf("\nMakro Suanda Kapali | Acip / Kapatmak icin CTRL + farenin tekerlegine bas");
			while(true)
			{
				if ((GetKeyState(VK_MBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
				{
					Dongu = true;
					printf("\nAcik");
				}
				while(Dongu == true){
					PlaySound("beep-07.wav", NULL, SND_FILENAME|SND_LOOP);
					while(true)
					{
						if((GetKeyState(VK_LBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
						{
							int i = 50;
							while (i>1)
							{
								Python();
								i--;
							}
							Sleep(100);
						}
						else if ((GetKeyState(VK_MBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
						{
							printf("\nKapali");
							Dongu = false;
							PlaySound("beep-08b.wav", NULL, SND_FILENAME|SND_LOOP);
							Sleep(1000);
							break;
						}
					}
				}
			}
		}
		
		
		if ((GetKeyState(VK_NUMPAD2) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
		{
			printf("\nPython 8x Secildi!");
			printf("\nMakro Suanda Kapali | Acip / Kapatmak icin CTRL + farenin tekerlegine bas");
			while(true)
			{
				if ((GetKeyState(VK_MBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
				{
					Dongu = true;
					printf("\nAcik");
				}
				while(Dongu == true){
					PlaySound("beep-07.wav", NULL, SND_FILENAME|SND_LOOP);
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
							Sleep(200);
						}
						else if ((GetKeyState(VK_MBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
						{
							printf("\nKapali");
							Dongu = false;
							PlaySound("beep-08b.wav", NULL, SND_FILENAME|SND_LOOP);
							Sleep(1000);
							break;
						}
					}
				}
			}
		}
		
		if ((GetKeyState(VK_NUMPAD3) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
		{
			printf("\nSemi-Auto Rifle Secildi!");
			printf("\nMakro Suanda Kapali | Acip / Kapatmak icin CTRL + farenin tekerlegine bas");
			while(true)
			{
				if ((GetKeyState(VK_MBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
				{
					Dongu = true;
					printf("\nAcik");
				}
				while(Dongu == true){
					PlaySound("beep-07.wav", NULL, SND_FILENAME|SND_LOOP);
					while(true)
					{
						if((GetKeyState(VK_LBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
						{
							SAR();
						}
						
						else if ((GetKeyState(VK_MBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
						{
							printf("\nKapali");
							Dongu = false;
							PlaySound("beep-08b.wav", NULL, SND_FILENAME|SND_LOOP);
							Sleep(1000);
							break;
						}
					}
				}
			}
		}
		
		if ((GetKeyState(VK_NUMPAD4) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
		{
			printf("\nSAR 8x Secildi!");
			printf("\nMakro Suanda Kapali | Acip / Kapatmak icin CTRL + farenin tekerlegine bas");
			while(true)
			{
				if ((GetKeyState(VK_MBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
				{
					Dongu = true;
					printf("\nAcik");
				}
				while(Dongu == true){
					PlaySound("beep-07.wav", NULL, SND_FILENAME|SND_LOOP);
					while(true)
					{
						if((GetKeyState(VK_LBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
						{
							int i = 10;
							while(i>1)
							{
								SARScope();
								i--;
							}
							Sleep(100);
						}
						else if ((GetKeyState(VK_MBUTTON) & 0x08000) != 0 && (GetKeyState(VK_CONTROL) & 0x8000) != 0)
						{
							printf("\nKapali");
							Dongu = false;
							PlaySound("beep-08b.wav", NULL, SND_FILENAME|SND_LOOP);
							Sleep(1000);
							break;
						}
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
	buffer.mi.dy = 1;
	buffer.mi.mouseData = 0;
	buffer.mi.dwFlags = MOUSEEVENTF_MOVE;
	buffer.mi.time = 0;
	buffer.mi.dwExtraInfo = 0;
	int delay = 1000000;
	
	SendInput(1, &buffer, sizeof(INPUT));
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
	
	SendInput(1, &buffer, sizeof(INPUT));
}

void SAR()
{
	
 	POINT xypos;
	INPUT buffer;
	ZeroMemory(&buffer, sizeof(buffer));
	buffer.type = INPUT_MOUSE;
	buffer.mi.dx = 0;
	buffer.mi.dy = 10;
	buffer.mi.mouseData = 0;
	buffer.mi.dwFlags = MOUSEEVENTF_MOVE;
	buffer.mi.time = 0;
	buffer.mi.dwExtraInfo = 0;
	int delay = 1000000;
	
	SendInput(1, &buffer, sizeof(INPUT));
}

void SARScope()
{
	
 	POINT xypos;
	INPUT buffer;
	ZeroMemory(&buffer, sizeof(buffer));
	buffer.type = INPUT_MOUSE;
	buffer.mi.dx = 0;
	buffer.mi.dy = 10;
	buffer.mi.mouseData = 0;
	buffer.mi.dwFlags = MOUSEEVENTF_MOVE;
	buffer.mi.time = 0;
	buffer.mi.dwExtraInfo = 0;
	int delay = 1000000;
	
	SendInput(1, &buffer, sizeof(INPUT));
}




