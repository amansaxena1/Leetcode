#define llint long long int
class Solution {
public:
    bool checkOverlap(int r, int a, int b, int x1, int y1, int x2, int y2) {
        x1-=a;
        x2-=a;
        y1-=b;
        y2-=b;
        // cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
        if(x1*x2<=0 && y2*y1 <=0) return true;
        if((sqrt(r*r - x1*x1) - y1) * (sqrt(r*r - x1*x1) - y2) <= 0) return true;
        if((sqrt(r*r - x2*x2) - y1) * (sqrt(r*r - x2*x2) - y2) <= 0) return true;
        if((sqrt(r*r - y2*y2) - x1) * (sqrt(r*r - y2*y2) - x2) <= 0) return true;
        if((sqrt(r*r - y1*y1) - x1) * (sqrt(r*r - x2*x2) - x1) <= 0) return true;
        if(((-r-x1) * (r-x1) <= 0 && (-r-y1) * (r-y1) <=0) || ((-r-x2) * (r-x2) <= 0 && (-r-y2) * (r-y2) <=0)) return true;
        return false;
        
    }
};