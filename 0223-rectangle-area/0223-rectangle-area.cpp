class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    
        int x = 0, y = 0;
        
        if (ax1 <= bx1 && bx1 < ax2) x = abs (min (ax2,bx2)-bx1);
        else if (ax1 < bx2 && bx2 <= ax2) x = abs (max (ax1,bx1)-bx2);        
        else if (bx1 <= ax1 && ax1 < bx2) x = abs (min (bx2,ax2)-ax1);
        else if (bx1 < ax2 && ax2 <= bx2) x = abs (max (bx1,ax1)-ax2);
        
        if (ay1 <= by1 && by1 < ay2) y= abs (by1-min (by2,ay2));
        else if (ay1 < by2 && by2 <= ay2) y = abs (max (ay1, by1)-by2);
        else if (by1 <= ay1 && ay1 < by2) y = abs (ay1 - min (by2,ay2));
        else if (by1 < ay2 && ay2 <= by2) y = abs (ay2 - max (ay1,by1)); 
        
        return abs(ax1-ax2)*abs(ay1-ay2) + abs (bx1-bx2)*abs(by1-by2) - x*y;
    }
};