#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){
    while (1){
        POINT pNow = {0,0};
        if (GetCursorPos(&pNow)){// 获取鼠标当前位置
            HWND hwndPointNow = NULL;
            hwndPointNow = WindowFromPoint(pNow);  // 获取鼠标所在窗口的句柄
            if (hwndPointNow){
                //cout << "Success!!" << endl;
                char szWindowTitle[5000];
                GetWindowTextA(hwndPointNow, szWindowTitle, sizeof(szWindowTitle));  // 获取窗口标题
                cout <<"鼠标所在窗口的标题:"<< szWindowTitle << endl;  // 鼠标所在窗口的标题
                cout <<"鼠标所在窗口的句柄:"<< hex << hwndPointNow << endl;  // 鼠标所在窗口的句柄
                cout<<"\n"; 
            }
            else cout << "Error!!" << endl;
        }
        else cout << "Error!!" << endl;
        Sleep(500);
    }
    return 0;
}

