//  Tic Tac Toe GUI v1.0
//  Developed BY Rabiul Emon

#define _WIN32_WINNT 0x0501
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include "resource.h"


#define Button_1 1
#define Button_2 2
#define Button_3 3
#define Button_4 4
#define Button_5 5
#define Button_6 6
#define Button_7 7
#define Button_8 8
#define Button_9 9
#define Menu_Button_Exit 10
#define OK_Button_P1_Sign 11
#define OK_Button_P2_Sign 12
#define PLAY_AGAIN_Button 13
#define All_RESULT_Button 14

const char g_szClassName[] = "myWindowClass";
void AddMenu(HWND);
void AddWindow(HWND);
int winCheck();
HMENU hmenu;
HBRUSH hbrushEditBox = 0;
HWND hEdit,h_Win_Box,h_All_Result; HFONT hFront;
HWND h_Button_1, h_Button_2, h_Button_3, h_Button_4, h_Button_5,
     h_Button_6, h_Button_7, h_Button_8, h_Button_9, h_Name1_box,
     h_name2_box, h_Sign_Player1, h_Sign_Player2;

    char* signs[]={"1","2","3","4","5","6","7","8","9"};
    char player1_sign[2],player2_sign[2],player1_Name[100],player2_Name[100],win_satus[]=" Won",tie_Status[]="It's a Tie...";
    char record[500];
    int player_Flag=0,switch_1=1,switch_2=1,switch_3=1,switch_4=1,
        switch_5=1,switch_6=1,switch_7=1,switch_8=1,switch_9=1,
        switch_SignP1=1,switch_SignP2=1,player1_Win=0,player2_Win=0, tie_count=0;


LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)
    {
    case WM_COMMAND:
        {
            switch(wParam){
            case Menu_Button_Exit:
                DestroyWindow(hwnd);
                break;
            case Button_1:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_1==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[0]="X";
                            }
                            else if(strcmp("O",player1_sign)==0){
                                signs[0]="O";
                            }
                                SetWindowText(h_Button_1,signs[0]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[0]="X";
                            }
                            else if(strcmp("O",player2_sign)==0){
                                signs[0]="O";
                            }
                                SetWindowText(h_Button_1,signs[0]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_1=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;
            case Button_2:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_2==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[1]="X";
                            }
                            else if(strcmp("O",player1_sign)==0){
                                signs[1]="O";
                            }
                                SetWindowText(h_Button_2,signs[1]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[1]="X";
                            }
                            if(strcmp("O",player2_sign)==0){
                                signs[1]="O";
                            }
                                SetWindowText(h_Button_2,signs[1]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_2=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;
            case Button_3:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_3==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[2]="X";
                            }
                            if(strcmp("O",player1_sign)==0){
                                signs[2]="O";
                            }
                                SetWindowText(h_Button_3,signs[2]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[2]="X";
                            }
                            if(strcmp("O",player2_sign)==0){
                                signs[2]="O";
                            }
                                SetWindowText(h_Button_3,signs[2]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_3=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;
            case Button_4:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_4==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[3]="X";
                            }
                            if(strcmp("O",player1_sign)==0){
                                signs[3]="O";
                            }
                                SetWindowText(h_Button_4,signs[3]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[3]="X";
                            }
                            if(strcmp("O",player2_sign)==0){
                                signs[3]="O";
                            }
                                SetWindowText(h_Button_4,signs[3]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_4=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;
            case Button_5:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_5==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[4]="X";
                            }
                            if(strcmp("O",player1_sign)==0){
                                signs[4]="O";
                            }
                                SetWindowText(h_Button_5,signs[4]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[4]="X";
                            }
                            if(strcmp("O",player2_sign)==0){
                                signs[4]="O";
                            }
                                SetWindowText(h_Button_5,signs[4]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_5=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;
            case Button_6:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_6==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[5]="X";
                            }
                            if(strcmp("O",player1_sign)==0){
                                signs[5]="O";
                            }
                                SetWindowText(h_Button_6,signs[5]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[5]="X";
                            }
                            if(strcmp("O",player2_sign)==0){
                                signs[5]="O";
                            }
                                SetWindowText(h_Button_6,signs[5]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_6=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;
            case Button_7:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_7==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[6]="X";
                            }
                            if(strcmp("O",player1_sign)==0){
                                signs[6]="O";
                            }
                                SetWindowText(h_Button_7,signs[6]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[6]="X";
                            }
                            if(strcmp("O",player2_sign)==0){
                                signs[6]="O";
                            }
                                SetWindowText(h_Button_7,signs[6]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_7=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;
            case Button_8:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_8==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[7]="X";
                            }
                            if(strcmp("O",player1_sign)==0){
                                signs[7]="O";
                            }
                                SetWindowText(h_Button_8,signs[7]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[7]="X";
                            }
                            if(strcmp("O",player2_sign)==0){
                                signs[7]="O";
                            }
                                SetWindowText(h_Button_8,signs[7]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_8=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;
            case Button_9:{
                if(winCheck()!=0 && tie_count!=9){
                    if(switch_9==1){
                        if(player_Flag==1){
                            if(strcmp("X",player1_sign)==0){
                                signs[8]="X";
                            }
                            if(strcmp("O",player1_sign)==0){
                                signs[8]="O";
                            }
                                SetWindowText(h_Button_9,signs[8]);
                                player_Flag=2;
                        }
                        else if(player_Flag==2){
                            if(strcmp("X",player2_sign)==0){
                                signs[8]="X";
                            }
                            if(strcmp("O",player2_sign)==0){
                                signs[8]="O";
                            }
                                SetWindowText(h_Button_9,signs[8]);
                                player_Flag=1;
                        }
                        tie_count++;
                        switch_9=0;
                    }
                    if(winCheck()==0){
                        if(player1_Win==1){
                            strcat(player1_Name,win_satus);
                            SetWindowText(h_Win_Box,player1_Name);
                        }
                        else if(player2_Win==1){
                            strcat(player2_Name,win_satus);
                            SetWindowText(h_Win_Box,player2_Name);
                        }
                    }
                    if(tie_count==9){
                        SetWindowText(h_Win_Box,tie_Status);
                    }
                }
            }
                break;

            case OK_Button_P1_Sign:{
                if(switch_SignP1==1){
                    GetWindowText(h_Name1_box,(LPSTR)player1_Name,100);
                    GetWindowText(h_Sign_Player1,(LPSTR)player1_sign,2);
                    if((strcmp(player1_sign,"X")==0) | (strcmp(player1_sign,"O")==0)){
                        player_Flag=1;
                        switch_SignP1=0;
                    }
                    else{
                        MessageBox(hwnd,"Please Enter X/O!","Sign Error!",MB_OK);
                        SetWindowText(h_Sign_Player1,"");
                        switch_SignP1=1;

                    }
                }
            }
                break;
            case OK_Button_P2_Sign:{
                if(switch_SignP2==1){
                    GetWindowText(h_name2_box,(LPSTR)player2_Name,100);
                    GetWindowText(h_Sign_Player2,(LPSTR)player2_sign,2);
                    if((strcmp(player2_sign,"X")==0) | (strcmp(player2_sign,"O")==0)){
                        player_Flag=1;
                        switch_SignP2=0;
                    }
                    else{
                        MessageBox(hwnd,"Please Enter X/O!","Sign Error!",MB_OK);
                        SetWindowText(h_Sign_Player2,"");
                        switch_SignP2=1;
                    }
                }
            }
                break;
            case PLAY_AGAIN_Button:
                {
                    signs[0]="1",signs[1]="2",signs[2]="3",
                    signs[3]="4",signs[4]="5",signs[5]="6",
                    signs[6]="7",signs[7]="8",signs[8]="9";
                    SetWindowText(h_Button_1,"");SetWindowText(h_Button_2,"");SetWindowText(h_Button_3,"");
                    SetWindowText(h_Button_4,"");SetWindowText(h_Button_5,"");SetWindowText(h_Button_6,"");
                    SetWindowText(h_Button_7,"");SetWindowText(h_Button_8,"");SetWindowText(h_Button_9,"");
                    SetWindowText(h_Name1_box,"");SetWindowText(h_name2_box,"");SetWindowText(h_Sign_Player1,"");
                    SetWindowText(h_Sign_Player2,"");SetWindowText(h_Win_Box,"");
                    player_Flag=0,switch_1=1,switch_2=1,switch_3=1,switch_4=1,switch_5=1,switch_6=1,switch_7=1,
                    switch_8=1,switch_9=1;
                    switch_SignP1=1,switch_SignP2=1,player1_Win=0,player2_Win=0, tie_count=0;
                }
                break;
            }
        }
        break;
    case WM_CTLCOLORSTATIC:{
        HDC hdcStatic = (HDC)wParam;
        SetTextColor(hdcStatic, RGB(255, 255, 255)); // text color
        SetBkColor(hdcStatic, RGB(0,0,0));
    return (LRESULT)GetStockObject(NULL_BRUSH);
    }
            break;

    case WM_CREATE:
        AddWindow(hwnd);
        AddMenu(hwnd);
        break;
    case WM_CTLCOLOREDIT:{
        HDC hdcStatic = (HDC) wParam;
        SetTextColor(hdcStatic, RGB(255, 255, 255));
        SetBkColor(hdcStatic, RGB(105,105,105));
    return (INT_PTR)CreateSolidBrush(RGB(105,105,105));
    }
        break;

            break;
        case WM_CLOSE:
            DestroyWindow(hwnd);
        break;
        case WM_DESTROY:
            PostQuitMessage(0);
        break;
        default:
            return DefWindowProc(hwnd, msg, wParam, lParam);
    }
    return 0;
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASSEX wc;
    HWND hwnd;
    MSG Msg;

    wc.cbSize        = sizeof(WNDCLASSEX);
    wc.style         = 0;
    wc.lpfnWndProc   = WndProc;
    wc.cbClsExtra    = 0;
    wc.cbWndExtra    = 0;
    wc.hInstance     = hInstance;
    wc.hIcon         = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+3);
    wc.lpszMenuName  = NULL;
    wc.lpszClassName = g_szClassName;
    wc.hIconSm       = (HICON)LoadImage(GetModuleHandle(NULL),MAKEINTRESOURCE(IDI_MYICON),IMAGE_ICON,16,16,0);

    if(!RegisterClassEx(&wc))
    {
        MessageBox(NULL, "Window Registration Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    hwnd = CreateWindowEx(
        WS_EX_LAYERED,
        g_szClassName,
        "Tic Tac Toe",
        WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, CW_USEDEFAULT, 600, 630,
        NULL, NULL, hInstance, NULL);

    SetLayeredWindowAttributes(hwnd,RGB(0,0,255),480,LWA_ALPHA);

    if(hwnd == NULL)
    {
        MessageBox(NULL, "Window Creation Failed!", "Error!",
            MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    while(GetMessage(&Msg, NULL, 0, 0) > 0)
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    return Msg.wParam;
}

void AddMenu(HWND hwnd){
    hmenu=CreateMenu();
    HMENU subMenu=CreateMenu();

    AppendMenu(hmenu,MF_POPUP,(UINT_PTR)subMenu,"File");
    AppendMenu(subMenu,MF_STRING,Menu_Button_Exit,"Exit");

    SetMenu(hwnd,hmenu);
}
void AddWindow(HWND hwnd){
    // 1st Row.
    h_Button_1 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,40,10,150,100,hwnd,(HMENU)Button_1,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_1,WM_SETFONT,WPARAM(hFront),TRUE);

    h_Button_2 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,200,10,150,100,hwnd,(HMENU)Button_2,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_2,WM_SETFONT,WPARAM(hFront),TRUE);

    h_Button_3 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,360,10,150,100,hwnd,(HMENU)Button_3,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_3,WM_SETFONT,WPARAM(hFront),TRUE);

    // 2nd Row
    h_Button_4 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,40,120,150,100,hwnd,(HMENU)Button_4,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_4,WM_SETFONT,WPARAM(hFront),TRUE);

    h_Button_5 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,200,120,150,100,hwnd,(HMENU)Button_5,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_5,WM_SETFONT,WPARAM(hFront),TRUE);

    h_Button_6 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,360,120,150,100,hwnd,(HMENU)Button_6,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_6,WM_SETFONT,WPARAM(hFront),TRUE);
    // 3rd Row
    h_Button_7 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,40,230,150,100,hwnd,(HMENU)Button_7,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_7,WM_SETFONT,WPARAM(hFront),TRUE);

    h_Button_8 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,200,230,150,100,hwnd,(HMENU)Button_8,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_8,WM_SETFONT,WPARAM(hFront),TRUE);

    h_Button_9 = CreateWindowEx((DWORD)0,"Button","",WS_VISIBLE | WS_CHILD | BS_HOLLOW,360,230,150,100,hwnd,(HMENU)Button_9,NULL,NULL);
    hFront     = CreateFont(50,30,4,8,FW_THIN,FALSE,FALSE,FALSE,ANSI_CHARSET,OUT_DEFAULT_PRECIS,CLIP_DEFAULT_PRECIS,DEFAULT_QUALITY,DEFAULT_PITCH | FF_SWISS,"Arial");
                 SendMessage(h_Button_9,WM_SETFONT,WPARAM(hFront),TRUE);

                  CreateWindowEx((DWORD)0,"Static","Player 1 name:",WS_VISIBLE | WS_CHILD ,40,355,150,20,hwnd,(HMENU)0,NULL,NULL);
    h_Name1_box = CreateWindowEx((DWORD)0,"Edit","",WS_VISIBLE | WS_CHILD | WS_BORDER,40,380,150,30,hwnd,(HMENU)0,NULL,NULL);

                  CreateWindowEx((DWORD)0,"Static","Player 2 name:",WS_VISIBLE | WS_CHILD ,40,430,150,20,hwnd,(HMENU)0,NULL,NULL);
    h_name2_box = CreateWindowEx((DWORD)0,"Edit","",WS_VISIBLE | WS_CHILD | WS_BORDER,40,455,150,30,hwnd,(HMENU)0,NULL,NULL);

                     CreateWindowEx((DWORD)0,"Static","Player 1 sign(X/O):",WS_VISIBLE | WS_CHILD ,200,355,150,20,hwnd,(HMENU)0,NULL,NULL);
                     CreateWindowEx((DWORD)0,"Button","OK",WS_VISIBLE | WS_CHILD | BS_HOLLOW ,245,380,30,30,hwnd,(HMENU)OK_Button_P1_Sign,NULL,NULL);
    h_Sign_Player1 = CreateWindowEx((DWORD)0,"Edit","",WS_VISIBLE | WS_CHILD | WS_BORDER | ES_UPPERCASE,200,380,40,30,hwnd,(HMENU)0,NULL,NULL);

                     CreateWindowEx((DWORD)0,"Static","Player 2 sign(X/O):",WS_VISIBLE | WS_CHILD ,200,430,150,20,hwnd,(HMENU)0,NULL,NULL);
                     CreateWindowEx((DWORD)0,"Button","OK",WS_VISIBLE | WS_CHILD | BS_HOLLOW ,245,455,30,30,hwnd,(HMENU)OK_Button_P2_Sign,NULL,NULL);
    h_Sign_Player2 = CreateWindowEx((DWORD)0,"Edit","",WS_VISIBLE | WS_CHILD | WS_BORDER | ES_UPPERCASE,200,455,40,30,hwnd,(HMENU)0,NULL,NULL);

                     CreateWindowEx((DWORD)0,"Static","Win Status:",WS_VISIBLE | WS_CHILD,340,355,100,20,hwnd,(HMENU)0,NULL,NULL);
    h_Win_Box      = CreateWindowEx((DWORD)0,"Edit","",WS_VISIBLE | WS_CHILD | WS_BORDER,340,380,170,30,hwnd,(HMENU)0,NULL,NULL);

                     CreateWindowEx((DWORD)0,"Button","Play Again",WS_VISIBLE | WS_CHILD | BS_HOLLOW,240,515,80,40,hwnd,(HMENU)PLAY_AGAIN_Button,NULL,NULL);
}

int winCheck(){
    //For X
    if((strcmp("X",signs[0])==0) && (strcmp("X",signs[1])==0) && (strcmp("X",signs[2])==0)){
        if((strcmp("X",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("X",signs[3])==0) && (strcmp("X",signs[4])==0) && (strcmp("X",signs[5])==0)){
        if((strcmp("X",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("X",signs[6])==0) && (strcmp("X",signs[7])==0) && (strcmp("X",signs[8])==0)){
        if((strcmp("X",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("X",signs[0])==0) && (strcmp("X",signs[3])==0) && (strcmp("X",signs[6])==0)){
        if((strcmp("X",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("X",signs[1])==0) && (strcmp("X",signs[4])==0) && (strcmp("X",signs[7])==0)){
        if((strcmp("X",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("X",signs[2])==0) && (strcmp("X",signs[5])==0) && (strcmp("X",signs[8])==0)){
        if((strcmp("X",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("X",signs[0])==0) && (strcmp("X",signs[4])==0) && (strcmp("X",signs[8])==0)){
        if((strcmp("X",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("X",signs[2])==0) && (strcmp("X",signs[4])==0) && (strcmp("X",signs[6])==0)){
        if((strcmp("X",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    //For O
    else if((strcmp("O",signs[0])==0) && (strcmp("O",signs[1])==0) && (strcmp("O",signs[2])==0)){
        if((strcmp("O",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("O",signs[3])==0) && (strcmp("O",signs[4])==0) && (strcmp("O",signs[5])==0)){
        if((strcmp("O",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("O",signs[6])==0) && (strcmp("O",signs[7])==0) && (strcmp("O",signs[8])==0)){
        if((strcmp("O",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("O",signs[0])==0) && (strcmp("O",signs[3])==0) && (strcmp("O",signs[6])==0)){
        if((strcmp("O",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("O",signs[1])==0) && (strcmp("O",signs[4])==0) && (strcmp("O",signs[7])==0)){
        if((strcmp("O",player1_sign)==0)){
                player2_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("O",signs[2])==0) && (strcmp("O",signs[5])==0) && (strcmp("O",signs[8])==0)){
        if((strcmp("O",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("O",signs[0])==0) && (strcmp("O",signs[4])==0) && (strcmp("O",signs[8])==0)){
        if((strcmp("O",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }
    else if((strcmp("O",signs[2])==0) && (strcmp("O",signs[4])==0) && (strcmp("O",signs[6])==0)){
        if((strcmp("O",player1_sign)==0)){
                player1_Win=1;
            return 0;
        }
        else{
            player2_Win=1;
            return 0;
        }
    }

    return 1;
}
//                                END OF CODE
//                                   Thanks
