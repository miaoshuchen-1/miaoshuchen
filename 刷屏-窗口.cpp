#include<stdio.h>
#include<Windows.h>

int main()
{
	int n;
	char name[100];
	printf("请输入窗口名字：");
	scanf("%s", &name);//窗口名字
	printf("请输入刷屏次数：");
	scanf("%d", &n);
	HWND H = FindWindow(0, name);//检索处理顶级窗口name，不搜索子窗口

	while (n--)
	{
		SendMessage(H, WM_PASTE, 0, 0);//粘贴当前复制内容
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//摁下回车键
	}
	return 0;
}//在吗
