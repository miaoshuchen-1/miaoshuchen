#include<stdio.h>
#include<Windows.h>

int main()
{
	int n;
	HWND H ;
	printf("请输入窗口地址：");
	scanf("%s", &H);//窗口地址
	printf("请输入刷屏次数：");
	scanf("%d", &n);


	while (n--)
	{
		SendMessage(H, WM_PASTE, 0, 0);//粘贴当前复制内容
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//摁下回车键
	}
	return 0;
}//在吗
