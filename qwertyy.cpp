#include <iostream>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <Windows.h>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <dos.h>

using namespace std;

const int SIZEf = 10;
int field[SIZEf][SIZEf] = {};


char s1[256];


void menu()
{
    int f = 1, k, code;

    cout << "\n\n"; // * ������
    for (int x = 0; x < 13; x++)
    {
        for (int y = 0; y < 13; y++)
        {
            if (x == 0 || x == y && y < 13 / 2 || x + y == 13 - 1 && y > 13 / 2 - 1)
            {
                cout << "    \t* ";
            }
            else
            {
                cout << "    \t  ";
            }
        }
        cout << endl;
    } // *

    GotoXY(27, 12);
    cout << "\t\t\t--> ����� ���� <--";
    GotoXY(30, 13);
    cout << "\t\t\t       �����    ";
    cout << "\n\n\t\t�������� ��� � ���� ��� ���� ����������, � ������� ������ �� ������� �������� ���������� �� ����������� �� ����� ���������. ���� � ��������� �� ���� ����������� ������� ������� (���������� ������), �� ������� ��� ��� ����� ���������, � �������� �������� ����� ������� ��� ���� ���";
    do
    {
        k = 0;
        code = _getch();
        if (code == 224 || code == 0)
        {
            code = _getch();
        }

        if (code == 80)
        {
            f = f * (-1);
            if (f == 1)
            {
                GotoXY(27, 12);
                cout << "\t\t\t--> ����� ���� <--";
                GotoXY(30, 13);
                cout << "\t\t\t       �����    ";
            }
            else if (f == 2)
            {
                GotoXY(27, 12);
                cout << "\t\t\t    ����� ����    ";
                GotoXY(30, 13);
                cout << "\t\t\t       �����    ";
            }
            else
            {
                GotoXY(27, 12);
                cout << "\t\t\t    ����� ����    ";
                GotoXY(30, 13);
                cout << "\t\t\t   --> ����� <--";
            }
        }
        else if (code == 72)
        {
            f = f * (-1);
            if (f == 1)
            {
                GotoXY(27, 12);
                cout << "\t\t\t--> ����� ���� <--";
                GotoXY(30, 13);
                cout << "\t\t\t       �����    ";
            }
            else if (f == 2)
            {
                GotoXY(27, 12);
                cout << "\t\t\t    ����� ����    ";
                GotoXY(30, 13);
                cout << "\t\t\t       �����    ";
            }
            else
            {
                GotoXY(27, 12);
                cout << "\t\t\t    ����� ����    ";
                GotoXY(30, 13);
                cout << "\t\t\t   --> ����� <--";
            }
        }
        else if (code == 13)
        {
            k = 1;
        }
        cout << endl << endl << endl << endl << endl;
    }

    while (k == 0);
    {
        if (f != 1)
        {
            exit(0);
        }
    }
    system("cls");
    cout << endl << endl;
}

void figure1()
{
    system("cls");
    for (int x = 0; x < 15; x++) // * ������� �������
    {
        for (int y = 0; y < 15; y++)
        {
            if (x == 0 || x == 15 - 1 || y == 0 || y == 15 - 1)
            {
                cout << "    \t* ";
            }
            else
            {
                cout << "    \t ";
            }
            if (x == 6) // ** ���������� ����, ����� �������� ����� ������ ��������
            {
                cout << "      \t\t\t\t\t";
                string h = "������� ���!";
                for (int i = 0; i < h.length(); i++)
                {
                    Sleep(60);
                    cout << h[i];
                }
                break;
            } // **
        }
        cout << endl; // ���� ����� ��������� ������ ��� ��������
    }
    Sleep(1500); // ����� // *
    cout << "\a"; // ���� ������������ ����
}

void reminder1()
{
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t    �����������:\n";
    cout << "\t\t\t    ������� ������� ������, ����� ����� �� ����\n\t\t\t       ��� ���� ���������� �� �����������!";
    cout << "\n\t\t\t\t";
    string h = "................................."; // ** ������������� �������� � ������� �������� �������� ����������������� �������
    for (int i = 0; i < h.length(); i++)
    {
        Sleep(50);
        cout << h[i];
    } // **
    cout << "\n\n";
    Sleep(1000);
    system("cls");
}

void win()
{
    system("cls");
    for (int x = 0; x <= 2; x++)
    {
        if (x <= 1)
        {
            system("Color 05");
            Sleep(200);
            cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t�";
            system("Color 15");
            Sleep(200);
            cout << " �";
            system("Color 25");
            Sleep(200);
            cout << " �";
            system("Color 35");
            Sleep(200);
            cout << " �";
            system("Color 48");
            Sleep(200);
            cout << " �";
            system("Color 65");
            Sleep(200);
            cout << " �";
            system("Color 85");
            Sleep(200);
            cout << " �";
            system("Color 93");
            Sleep(200);
            cout << " �";
            system("Color A5");
            Sleep(200);
            cout << " �";
            system("Color B5");
            Sleep(200);
            cout << " �";
            system("Color C0");
            Sleep(200);
            cout << " �";
            system("Color E5");
            Sleep(200);
            cout << "\n\n\t\t\t\t\t\t\t\t�";
            system("Color F5");
            Sleep(200);
            cout << " �";
            system("Color 75");
            Sleep(200);
            cout << " �";
            Sleep(200);
        }
        else
        {
            system("cls");
            for (int x = 0; x < 15; x++) // * ������� �������
            {
                for (int y = 0; y < 15; y++)
                {
                    if (x == 0 || x == 15 - 1 || y == 0 || y == 15 - 1)
                    {
                        cout << "    \t* ";
                    }
                    else
                    {
                        cout << "    \t ";
                    }
                    if (x == 6) // ** ���������� ����, ����� �������� ����� ������ ��������
                    {
                        cout << "      \t\t\t\t\t";
                        string h = "�� ��������!";
                        for (int i = 0; i < h.length(); i++)
                        {
                            Sleep(60);
                            cout << h[i];
                        }
                        break;
                    } // **
                }
                cout << endl; // ���� ����� ��������� ������ ��� ��������
            } // *
        }
    }
}

void ad() // ��������� ������� 1
{
    system("cls");
    for (int x = 0; x < 15; x++) // * ������� �������
    {
        for (int y = 0; y < 15; y++)
        {
            if (x == 0 || x == 15 - 1 || y == 0 || y == 15 - 1)
            {
                cout << "    \t* ";
            }
            else
            {
                cout << "    \t ";
            }
            if (x == 6) // ** ���������� ����, ����� �������� ����� ������ ��������
            {
                cout << "      \t\t\t\t��������� ��������� ����������:\n\n      \t\t\t\t             ";
                string h = "������ �� ������! ���� ������ �����!\n\n      \t\t\t\t             ������� ��������! ���� ������ �����!\n\n      \t\t\t\t             ������� �������! ���� ������ �����!\n\n      \t\t\t\t             �������� ���������! ���� ������ �����!\n\n      \t\t\t\t               ��������� �� ������ ������ ������\n\n      \t\t\t\t                     ����� ��� �����...\n\n";
                for (int i = 0; i < h.length(); i++)
                {
                    Sleep(40);
                    cout << h[i];
                }
                break;
            } // **
        }
        cout << endl; // ���� ����� ��������� ������ ��� ��������
    } //
    Sleep(3300);
    system("cls");
}

void tableShow() {
    system("cls");
    cout << endl << endl << "\t\t\t\t";
    int counter = 0;
    for (int i = 0; i < SIZEf; i++)
    {
        counter++;
        cout << counter;
        cout << "\t";
    }
    cout << "\n\t\t\t\t==========================================================================";

    counter = 0;

    cout << endl << endl << "\t\t";
    for (int i = 0; i < SIZEf; i++)
    {
        for (int j = 0; j < SIZEf; j++)
        {
            if (i >= 0 && j == 0)
            {
                counter++;
                cout << "\t" << counter << " |";
            }
            if (field[i][j] == 5) {
                cout << "\t" << field[i][j];
            }
            else if (i < 5) {
                cout << "\t0";
            }
            else {
                cout << "\t" << field[i][j];
            }
        }
        cout << endl << endl << endl << "\t\t";
    }
}

int main()
{
    int Direction = -1;
    bool BotHit = false;
    bool BotHitForSecondBotHit = false;
    bool SecondBotHit = false;
    bool BotMiss[4] = { false, false, false, false };
    setlocale(LC_ALL, "Rus");
    srand(unsigned(time(0)));
    system("Color 75");

    menu();
    figure1();
    reminder1();

    int Botx, Boty;

    int enemyShipCounter = 0; // * ������������ � ���������� ��������� ��������
    while (true)
    {
        Botx = rand() % SIZEf;
        if (Botx <= 4)
        {
            Boty = rand() % SIZEf;
            field[Botx][Boty] = 1;
            enemyShipCounter++;
            if (enemyShipCounter == 10)
            {
                break;
            }
        }
    } // *


    int myShipCounter = 0; // * ������������ � ���������� ���� ��������
    while (true)
    {
        Botx = rand() % SIZEf;
        if (Botx >= 5)
        {
           Boty = rand() % SIZEf;
            field[Botx][Boty] = 1;
            myShipCounter++;
            if (myShipCounter == 10)
            {
                break;
            }
        }
    } // *

    tableShow();

    bool isMyRound = false;

    while (true)
    {
        cout << "\t\t������� ����������: ";
        do
        {
            cin >> Botx;
            cin >> Boty;
            if (Botx >= 6 || Botx <= 0 || Boty <= 0)
            {
                cout << "\n\t\t\t\t������� ���������� ������� ���� 6 ������ (6, 5, 4, 3, 2, 1), ����� �������� �� ���������� ����!\n\n";
                cout << "\t\t\t\t������� ����������: ";
            }
        } while (Botx >= 6 || Botx <= 0 || Boty <= 0);
        {
            Botx--;
            Boty--;
        }
        cout << "\t\t��� ����...\n\n";
        int CoutBotX = Botx + 1;
        int CoutBotY = Boty + 1;
        cout << "\t\t\t\t��� ���� ����������: x[" << CoutBotX << "] � y[" << CoutBotY << "]\n";
        if (BotHit == true) {
            if (SecondBotHit == false) {
                while (true) {
                    Direction = 1 + rand() % 4;
                    if (Direction == 1 && BotMiss[0] == false && Boty > 0) {
                        Boty--; //�������� �����
                        break;
                    }
                    else if (Direction == 2 && BotMiss[1] == false && Botx > 5) {
                        Botx--; //�������� ����
                        break;
                    }
                    else if (Direction == 3 && BotMiss[2] == false && Boty < 9) {
                        Boty++; //�������� ������
                        break;
                    }
                    else if (Direction == 4 && BotMiss[3] == false && Botx < 9) {
                        Botx++; //�������� ����
                        break;
                    }

                    else {
                        BotMiss[Direction - 1] = true; //���� ������ �� ���������� ����������
                    }
                    if (field[Botx][Boty] != -1) {
                        cout << "\n\t\t\t\t��� �����������! ���� �������..." << endl;
                        isMyRound = true;
                    }
                    if (BotMiss[0] == true && BotMiss[1] == true && BotMiss[2] == true && BotMiss[3] == true) {
                        break; //���� ��� ���� ������� ���������� �� ���� ��������
                    }
                }
            }
            else { //��� ������ ��������� �������� � �����������, � ������� ������ �������
                if (Direction == 1 && Boty > 0) {
                    Boty--;
                }
                else if (Direction == 2 && Botx > 5) {
                    Botx--;
                }
                else if (Direction == 3 && Boty < 9) {
                    Boty++;
                }
                else if (Direction == 4 && Botx < 9) {
                    Botx++;
                }
                else {
                    SecondBotHit = false;
                }
            }
        }
        else {
            Botx = rand() % 4 + 5;
            Boty = rand() % 10;
        }
        if (field[Botx][Boty] == 1)
        {
            cout << "\n\t\t\t\t�� ������ �� ���������� �������!\a" << endl;
            field[Botx][Boty] = 5;
            Sleep(3300);

            tableShow();

            field[Botx][Boty] = 0;

            bool ship_detect = false;
            for (int i = 0; i < SIZEf - 5; i++)
            {
                for (int j = 0; j < SIZEf; j++)
                {
                    if (field[i][j] == 1)
                    {
                        ship_detect = true;
                        break;
                    }
                }
                if (ship_detect == true)
                {
                    break;
                }
            }
            if (ship_detect == false)
            {
                cout << "\t\t�� ��������!!! ��� ������� ��������� ���������!" << endl;
                Sleep(4000);
                win();
                Sleep(2000);
                ad();
                break;
            }
            isMyRound = true;
        }
        else
        {
            cout << "\n\t\t\t\t�� ������������!" << endl;
            field[Botx][Boty] = 0;
            isMyRound = false;
            Sleep(3400);
            tableShow();
        }

        while (isMyRound == false) // * ��� ����
        {
            cout << "\t\t��� ����...\n\n";
            if (BotHit == true) {
                if (SecondBotHit == false) {
                    while (true) {
                        Direction = 1 + rand() % 4;
                        if (Direction == 1 && BotMiss[0] == false && Boty > 0) {
                            Boty--; //�������� �����
                            break;
                        }
                        else if (Direction == 2 && BotMiss[1] == false && Botx > 5) {
                            Botx--; //�������� ����
                            break;
                        }
                        else if (Direction == 3 && BotMiss[2] == false && Boty < 9) {
                            Boty++; //�������� ������
                            break;
                        }
                        else if (Direction == 4 && BotMiss[3] == false && Botx < 9) {
                            Botx++; //�������� ����
                            break;
                        }
                        else {
                            BotMiss[Direction - 1] = true; //���� ������ �� ���������� ����������
                        }
                        if (BotMiss[0] == true && BotMiss[1] == true && BotMiss[2] == true && BotMiss[3] == true) {
                            break; //���� ��� ���� ������� ���������� �� ���� ��������
                        }
                    }
                }
                else { //��� ������ ��������� �������� � �����������, � ������� ������ �������
                    if (Direction == 1 && Boty > 0) {
                        Boty--;
                    }
                    else if (Direction == 2 && Botx > 5) {
                        Botx--;
                    }
                    else if (Direction == 3 && Boty < 9) {
                        Boty++;
                    }
                    else if (Direction == 4 && Botx < 9) {
                        Botx++;
                    }
                    else {
                        SecondBotHit = false;
                    }
                }
            }
            else {
                Botx = rand() % 4 + 5;
                Boty = rand() % 10;
            }
            int CoutBotX = Botx + 1;
            int CoutBotY = Boty + 1;
            cout << "\t\t\t\t��� ���� ����������: x[" << CoutBotX << "] � y[" << CoutBotY << "]\n";

            if (field[Botx][Boty] == 1)
            {
                if (BotHit == true) {
                    BotHitForSecondBotHit = true;
                }
                if (BotHitForSecondBotHit == true) {
                    SecondBotHit = true;
                }
                BotHit = true;
                cout << "\n\t\t\t\t��� ����� �� ������ �������!\a" << endl;
                field[Botx][Boty] = 5;

                Sleep(5500);

                tableShow();

                field[Botx][Boty] = -1;

                bool ship_detect = false;
                for (int i = 6; i < SIZEf; i++)
                {
                    for (int j = 0; j < SIZEf; j++)
                    {
                        if (field[i][j] == 1)
                        {
                            ship_detect = true;
                            break;
                        }
                    }
                    if (ship_detect == true)
                    {
                        break;
                    }
                }
                if (ship_detect == false)
                {
                    cout << "\t\t\t\t��� �������!!! ��� ���� ������� ���������!" << endl;
                    Sleep(5500);
                    ad();
                    break;
                }
            }
            else
            {
                if (field[Botx][Boty] != -1) {
                    cout << "\n\t\t\t\t��� �����������! ���� �������..." << endl;
                    isMyRound = true;
                }
                BotHitForSecondBotHit = false;
                if (Direction != -1) {
                    BotMiss[Direction - 1] = true;
                    if ((BotMiss[0] == true && BotMiss[1] == true && BotMiss[2] == true && BotMiss[3] == true) || SecondBotHit == true) {
                        BotHit = false;
                        for (int x = 0; x != 4; x++) {
                            BotMiss[x] = false;
                        }
                    }
                    if (SecondBotHit == false && BotHit == true) {
                        if (Direction == 1) {
                            Boty++; //���������� ���������� ������
                        }
                        else if (Direction == 2) {
                            Botx++; //���������� ���������� ����
                        }
                        else if (Direction == 3) {
                            Boty--; //���������� ���������� �����
                        }
                        else if (Direction == 4) {
                            Botx--; //���������� ���������� ����
                        }
                    }
                }
                SecondBotHit = false;
                Sleep(5500);
                tableShow();
            }
        } // *


        cout << endl << endl << endl;

        system("pause");
        return 0;
    }
}