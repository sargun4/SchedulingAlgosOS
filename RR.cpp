#include <iostream>
#include <queue>

using namespace std;

struct Process {
    int id;
    int burst_time;
};

int main() {
    queue<Process> ready_queue;
    
    // Add processes to the ready queue
    ready_queue.push({1, 10});
    ready_queue.push({2, 5});
    ready_queue.push({3, 8});
    
    int time_quantum = 2; // Time quantum for RR
    
    while (!ready_queue.empty()) {
        Process current_process = ready_queue.front();
        ready_queue.pop();
        
        cout << "Executing process " << current_process.id << " for time quantum " << time_quantum << endl;
        
        if (current_process.burst_time > time_quantum) {
            current_process.burst_time -= time_quantum;
            ready_queue.push(current_process);
        } else {
            cout << "Process " << current_process.id << " completed" << endl;
        }
    }
    
    return 0;
}
