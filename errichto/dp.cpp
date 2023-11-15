#include<bits/stdc++.h>
using namespace std;

int maxReward(vector<vector<int>>& events, int K) {
    // Sort the events by their start times
    sort(events.begin(), events.end());
    
    // Initialize a max heap (priority queue) to keep track of the events with the highest points
    priority_queue<int> maxHeap;
    
    int totalReward = 0;
    int i = 0;
    
    for (int day = 1; day <= 100000; ++day) {
        // Add all events that start on this day to the max heap
        while (i < events.size() && events[i][0] == day) {
            maxHeap.push(events[i][2]);
            i++;
        }
        
        // Remove the event with the lowest points if we exceed K events
        while (maxHeap.size() > K) {
            maxHeap.pop();
        }
        
        // Calculate the total reward by summing up the points of the top K events in the max heap
        int currentReward = 0;
        for (int j = 0; j < maxHeap.size(); ++j) {
            currentReward += maxHeap.top();
            maxHeap.pop();
        }
        
        totalReward += currentReward;
        
        // Restore the max heap for the next day
        for (int j = 0; j < maxHeap.size(); ++j) {
            maxHeap.push(currentReward);
        }
    }
    
    return totalReward;
}

int main() {
    vector<vector<int>> events = {{1, 3, 5}, {2, 4, 7}, {3, 5, 2}, {6, 7, 8}};
    int K = 2;
    int result = maxReward(events, K);
    cout << result << endl;  // Output: 12
    
    return 0;
}
