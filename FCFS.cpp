#include <iostream>
#include <queue>

using namespace std;

struct Process {
    int id;
    int arrival_time;
    int burst_time;
};

int main() {
    queue<Process> ready_queue;
    
    // Add processes to the ready queue
    ready_queue.push({1, 0, 10});
    ready_queue.push({2, 2, 5});
    ready_queue.push({3, 4, 8});
    
    int current_time = 0;
    
    while (!ready_queue.empty()) {
        Process current_process = ready_queue.front();
        ready_queue.pop();
        
        cout << "Executing process " << current_process.id << endl;
        current_time += current_process.burst_time;
        
        cout << "Process " << current_process.id << " completed at time " << current_time << endl;
    }
    
    return 0;
}
