#include <Windows.h>

DWORD WINAPI Fun1Proc()
{
	for (;;)
	{
		for (int i = 0; i < 14640000; i++)
		{
			;
		}
		//Sleep(10);
	}
}
//cpuÊ¹ÓÃÂÊ
void CpuRate()
{
	HANDLE hThread = CreateThread(NULL, 0, Fun1Proc, NULL, 0, NULL);
	CloseHandle(hThread);
	for (;;)
	{
		for (int i = 0; i < 14640000; i++)
		{
			;
		}
		//Sleep(10);
	}
}

