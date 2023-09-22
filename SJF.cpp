#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int id;
    int burst_time;
};

bool compare(Process a, Process b) {
    return a.burst_time < b.burst_time;
}

int main() {
    vector<Process> processes = {{1, 6}, {2, 8}, {3, 7}, {4, 3}};
    
    sort(processes.begin(), processes.end(), compare);
    
    int current_time = 0;
    
    for (const Process& p : processes) {
        cout << "Executing process " << p.id << endl;
        current_time += p.burst_time;
        cout << "Process " << p.id << " completed at time " << current_time << endl;
    }
    
    return 0;
}
