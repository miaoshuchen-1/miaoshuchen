#include<stdio.h>
#include<Windows.h>

int main()
{
	int n;
	HWND H ;
	printf("�����봰�ڵ�ַ��");
	scanf("%s", &H);//���ڵ�ַ
	printf("������ˢ��������");
	scanf("%d", &n);


	while (n--)
	{
		SendMessage(H, WM_PASTE, 0, 0);//ճ����ǰ��������
		SendMessage(H, WM_KEYDOWN, VK_RETURN, 0);//���»س���
	}
	return 0;
}//����
