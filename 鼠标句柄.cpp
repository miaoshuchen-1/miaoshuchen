#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
    while (1){
        POINT pNow = {0,0};
        if (GetCursorPos(&pNow)){// ��ȡ��굱ǰλ��
            HWND hwndPointNow = NULL;
            hwndPointNow = WindowFromPoint(pNow);  // ��ȡ������ڴ��ڵľ��
            if (hwndPointNow){
                //cout << "Success!!" << endl;
                char szWindowTitle[5000];
                GetWindowTextA(hwndPointNow, szWindowTitle, sizeof(szWindowTitle));  // ��ȡ���ڱ���
                cout <<"������ڴ��ڵı���:"<< szWindowTitle << endl;  // ������ڴ��ڵı���
                cout <<"������ڴ��ڵľ��:"<< hex << hwndPointNow << endl;  // ������ڴ��ڵľ��
                cout<<"\n"; 
            }
            else cout << "Error!!" << endl;
        }
        else cout << "Error!!" << endl;
        Sleep(500);
    }
    return 0;
}

