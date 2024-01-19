#include <iostream>
#include <algorithm>
#include <vector>
#define all(x), x.begin(), x.end()

using namespace std;

int main()
{
        setlocale(LC_ALL, "ru");
    
        char a[3][3] = { {'А', 'К', 'Ш'}, {'Л', 'Г', 'Н'}, {'Э', 'Й', 'Ф'} };
        char b[3][3] = { {'Л', 'З', 'П'}, {'Я', 'О', 'Р'}, {'Н', 'Б', 'Д'} };
        char c[3][3] = { {'Ъ', 'М', 'Б'}, {'Ж', 'Х', 'Т'}, {'П', 'Ч', 'Л'} };
        char d[3][3] = { {'О', 'Э', 'Ж'}, {'Ц', 'К', 'С'}, {'В', 'И', 'Д'} };
        char e[3][3] = { {'Ь', 'Г', 'Ы'}, {'Е', 'А', 'Ь'}, {'Щ', 'И', 'У'} };
        char f[3][3] = { {'Р', 'В', 'Ё'}, {'И', 'Х', 'М'}, {'Ц', 'З', 'Ю'} };
    
        char M[6][9] = {};
        int x;
        for (int i = 0; i < 6; i++) {
            cout << "Введите номер подматрицы: ";
            cin >> x;
            for (int j = 0; j < 9; j++)
            {  
                switch (x)
                {
                    case 1:
                        for (int n = 0; n < 3; n++)
                        {
                            for (int m = 0; m < 3; m++) {
                                M[i][j] = a[n][m];
                            }
                        }
                        break;
                    case 2:
                        for (int n = 0; n < 3; n++)
                        {
                            for (int m = 0; m < 3; m++) {
                                M[i][j] = b[n][m];
                            }
                        }
                        break;
                    case 3:
                        for (int n = 0; n < 3; n++)
                        {
                            for (int m = 0; m < 3; m++) {
                                M[i][j] = c[n][m];
                            }
                        }
                        break;
                    case 4:
                        for (int n = 0; n < 3; n++)
                        {
                            for (int m = 0; m < 3; m++) {
                                M[i][j] = d[n][m];
                            }
                        }
                        break;
                    case 5:
                        for (int n = 0; n < 3; n++)
                        {
                            for (int m = 0; m < 3; m++) {
                                M[i][j] = e[n][m];
                            }
                        }
                        break;
                    case 6:
                        for (int n = 0; n < 3; n++)
                        {
                            for (int m = 0; m < 3; m++) {
                                M[i][j] = f[n][m];
                            }
                        }
                        break;
                }
            }
        }
        for (int i = 0; i < 6; i++) {
            int  x, mi;
            for (int k = 0; k < 3; k++) {
                if (k == 0) {
                    i = 3;
                    x = 4;
                }
                if (k == 1) {
                    i = 5;
                    x = 8;
                }
                if (k == 2) {
                    i = 8;
                    x = 9;
                }
                mi = i;
                do {
                    cout << "M[" << i << "][" << x - i << "] " << M[i][x - i] << "\n";
                    i -= 1;
                } while ((mi - i) < 3);
            }
        }
    }
