### First-Come, First-Served (FCFS):
- aka FIFO (First-In-First-Out).
- Processes are executed in the order they arrive in the ready queue.
- Simple and easy to implement.
- Can suffer from poor average waiting times, especially for long processes (convoy effect).

### Shortest Job First (SJF):

- Selects the process with the shortest burst time first.
- Minimizes waiting times and turnaround times.
- Requires knowledge of each process's execution time, which is often not available in practice.
- Can lead to starvation for long processes if short ones keep arriving.

### Priority Scheduling:

- Each process is assigned a priority, and the scheduler selects the highest-priority process.
Can be either preemptive (can be interrupted) or non-preemptive (runs until completion).
Priority assignment can be static or dynamic.
Requires a mechanism to prevent starvation of lower-priority processes.

### Round Robin (RR):

Each process is assigned a fixed time quantum (time slice).
Processes are executed in a cyclic manner for their allotted time quantum.
Preemptive and ensures fairness.
High context-switching overhead for small time quanta.


| Scheduling Algorithm                 | Optimize Average Completion Time | Optimize Average Waiting Time | Prevent Starvation | Prevent Convoy Effect | Psychic Skills NOT Needed |
| ----------------------------------- | --------------------------------- | ----------------------------- | ------------------ | --------------------- | --------------------------- |
| Round Robin (RR)                    | Moderate                          | Moderate                      | No                 | No                    | Yes                       |
| Shortest Job First (SJF)            | Low                               | Low                           | Yes                | No                    | No                        |
| Shortest Time-to-Completion First (STCF) | Low                          | Low                           | Yes                | No                    | No                        |
| First-Come, First-Served (FCFS)     | High                              | High                          | Yes                | Yes                   | Yes                       |
