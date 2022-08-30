/***********************************************************************\
|      _____   ____    _____               _    _   _____   __  __      |
|     |_   _| |  _ \  |  __ \      /\     | |  | | |_   _| |  \/  |     |
|       | |   | |_) | | |__) |    /  \    | |__| |   | |   | \  / |     |
|       | |   |  _ <  |  _  /    / /\ \   |  __  |   | |   | |\/| |     |
|      _| |_  | |_) | | | \ \   / ____ \  | |  | |  _| |_  | |  | |     |
|     |_____| |____/  |_|  \_\ /_/    \_\ |_|  |_| |_____| |_|  |_|     |
|                                                                       |
|                   COMPUTER SCIENCE AND ENGINEERING                    |
|  Bangabandhu Sheikh Mujibur Rahman Science and Technology University  |
\***********************************************************************/
#include <iostream>
using namespace std;
typedef unsigned int ui;

int main()
{
    ui n, m, count = 1;
    cin >> n >> m;
    for (int row = 1; row <= n; row++)
    {
        if (row % 2 != 0)
        {
            for (int col = 1; col <= m; col++)
            {
                cout << "#";
            }
        }
        else
        {
            if (count != 0 && count % 2 != 0)
            {
                for (int col = 1; col < m; col++)
                {
                    cout << ".";
                }
                cout << "#";
                count++;
            }
            else if (count != 0 && count % 2 == 0)
            {
                cout << "#";
                for (int col = 2; col <= m; col++)
                {
                    cout << ".";
                }
                count++;
            }
        }
        cout << endl;
    }

    return 0;
}