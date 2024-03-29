
class MyCalendarThree {
    
    map<int, int> timeline;
public:
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        timeline[start]++;
        timeline[end]--;
        int ongoing = 0, k=0;
        for(pair<int, int> t:timeline)
            k = max(k, ongoing+=t.second);
        
        return k;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */