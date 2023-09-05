#include <iostream>
#include <cmath>

//https://pl.spoj.com/problems/SIL/

using namespace std;

int calculateArea(const int a, const int b, const int c, const int d)
{
    int side_A = abs(a - c);
    int side_B = abs(b - d);

    int area = side_A * side_B;

    return area;
}
int calculateIntersection(const int x1, const int y1, const int x2, const int y2, const int x3, const int y3, const int x4, const int y4)
{
    int inter_x_bot = max(x1, x3);
    int inter_x_top = min(x2, x4);
    int inter_y_bot = max(y1, y3);
    int inter_y_top = min(y2, y4);

    if(inter_x_bot < inter_x_top && inter_y_bot < inter_y_top)
    {
        return calculateArea(inter_x_bot, inter_y_bot, inter_x_top, inter_y_top);
    }
    return 0;
}

int main()
{
    int x_prost_bot_1, y_prost_bot_1, x_prost_top_1, y_prost_top_1,
        x_prost_bot_2, y_prost_bot_2, x_prost_top_2, y_prost_top_2;

    cin >> x_prost_bot_1 >> y_prost_bot_1 >> x_prost_top_1 >> y_prost_top_1
        >> x_prost_bot_2 >> y_prost_bot_2 >> x_prost_top_2 >> y_prost_top_2;

    int AreaRectangle_1 = calculateArea(x_prost_bot_1, y_prost_bot_1, x_prost_top_1, y_prost_top_1);
    int AreaRectangle_2 = calculateArea(x_prost_bot_2, y_prost_bot_2, x_prost_top_2, y_prost_top_2);
    
    int intersection = calculateIntersection(x_prost_bot_1, y_prost_bot_1, x_prost_top_1, y_prost_top_1,
                                             x_prost_bot_2, y_prost_bot_2, x_prost_top_2, y_prost_top_2);

    int result = AreaRectangle_1 + AreaRectangle_2 - intersection;

    cout << result << endl;
    return 0;
}