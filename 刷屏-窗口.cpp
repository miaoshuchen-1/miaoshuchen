#include<stdio.h>
#include<Windows.h>

int main()
{
	int n;
	char name[100];
	printf("�����봰�����֣�");
	scanf("%s", &name);//��������
	printf("������ˢ��������");
	scanf("%d", &n);
	HWND H = FindWindow(0, name);//��������������name���������Ӵ���

	while (n--)
	{
		SendMessage(H, WM_PASTE, 0, 0);//ճ����ǰ��������
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//���»س���
	}
	return 0;
}//����
