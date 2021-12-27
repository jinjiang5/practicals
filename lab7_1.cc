#include <iostream>

using namespace std;

int tile = 0;
int board[4][4];

void chessBoard(int tr, int tc, int dr, int dc, int size)
{
    if (size == 1)
        return;
    int t = tile++,   // L型骨牌号
        s = size / 2; // 分割棋盘
    // 覆盖左上角子棋盘
    if (dr < tr + s && dc < tc + s)
        // 特殊方格在此棋盘中
        chessBoard(tr, tc, dr, dc, s);
    else
    { // 此棋盘中无特殊方格
        // 用 t 号L型骨牌覆盖右下角
        board[tr + s - 1][tc + s - 1] = t;
        // 覆盖其余方格
        chessBoard(tr, tc, tr + s - 1, tc + s - 1, s);
    }
    // 覆盖右上角子棋盘
    if (dr < tr + s && dc >= tc + s)
        // 特殊方格在此棋盘中
        chessBoard(tr, tc + s, dr, dc, s);
    else
    { // 此棋盘中无特殊方格
        // 用 t 号L型骨牌覆盖左下角
        board[tr + s - 1][tc + s] = t;
        // 覆盖其余方格
        chessBoard(tr, tc + s, tr + s - 1, tc + s, s);
    }
    // 覆盖左下角子棋盘
    if (dr >= tr + s && dc < tc + s)
        // 特殊方格在此棋盘中
        chessBoard(tr + s, tc, dr, dc, s);
    else
    { // 用 t 号L型骨牌覆盖右上角
        board[tr + s][tc + s - 1] = t;
        // 覆盖其余方格
        chessBoard(tr + s, tc, tr + s, tc + s - 1, s);
    }
    // 覆盖右下角子棋盘
    if (dr >= tr + s && dc >= tc + s)
        // 特殊方格在此棋盘中
        chessBoard(tr + s, tc + s, dr, dc, s);
    else
    { // 用 t 号L型骨牌覆盖左上角
        board[tr + s][tc + s] = t;
        // 覆盖其余方格
        chessBoard(tr + s, tc + s, tr + s, tc + s, s);
    }
}

int main()
{
    chessBoard(0, 0, 0, 1, 4);
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}