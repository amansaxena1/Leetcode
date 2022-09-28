class Solution {
public:
    double angleClock(int hour, int minutes) {
        if(hour == 12) hour = 0;
        double min = (minutes/60.0)*360.0;
        double hr = (hour/12.0)*360.0 + (minutes/60.0) * 30;
        return abs(min-hr) < 360 - abs(hr - min) ? abs(min-hr) : 360 - abs(min-hr);
    }
};