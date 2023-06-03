#include<iostream>
#include<windows.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	Sleep(5000);
	for(int i=1;i<=1000000000;i++){
	keybd_event(VK_CONTROL,(BYTE)0,0,0);
	keybd_event('V',(BYTE)0,0,0);
	keybd_event('V',(BYTE)0,KEYEVENTF_KEYUP,0);
	keybd_event(VK_CONTROL,(BYTE)0,KEYEVENTF_KEYUP,0);
	keybd_event(VK_RETURN,(BYTE)0,0,0);
	keybd_event(VK_RETURN,(BYTE)0,KEYEVENTF_KEYUP,0);
	printf("%d\n",i);
	Sleep(15);
	}
} //Ëµ»°Ñ½

