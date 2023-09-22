- Any scheduling policy that always favours a fixed property for scheduling leads starvation.
- Any non-preemptible scheduling policy suffers from convoy effect.

### First-Come, First-Served (FCFS):
- aka FIFO (First-In-First-Out).
- Processes are executed in the order they arrive in the ready queue.
- Simple and easy to implement.
- Can suffer from poor average waiting times, especially for long processes (convoy effect).
- High waiting time and average completion time.
- Psychic Skills NOT Needed: Yes (No need to predict process behavior).
- Non-preemptive.
- Prevents starvation as every process eventually gets its turn.
  
### Shortest Job First (SJF):

- Selects the process with the shortest burst time (execution time) first.
- Minimizes waiting times and turnaround times and average completion time .
- Requires knowledge of each process's execution time, which is often not available in practice.
- Can lead to starvation for long processes if short ones keep arriving.
- Psychic Skills NOT Needed: No (Requires predicting process execution times).
- Non-preemptive (or preemptive variant is Shortest Remaining Time First).
  
### Shortest Time-to-Completion First (STCF):
- Psychic Skills NOT Needed: No (Requires predicting process execution times).
- Selects the process with the shortest remaining time to completion.
- Preemptive and dynamically adjusts execution based on remaining time.
- Minimizes waiting time and average completion time.
- May lead to starvation for longer processes.(Any scheduling policy that always favours a fixed
property for scheduling leads starvation)
- A running task can be de-scheduled before completion.
- Schedule the task with the least amount of time left
- STCF is a preemptible policy - No convoy effect.

### Round Robin (RR):
- Psychic Skills NOT Needed: Yes (No need to predict process behavior)
- Each process is assigned a fixed time quantum (time slice).
- Processes are executed in a cyclic manner for their allotted time quantum.
- Preemptive and ensures fairness.
- High context-switching overhead for small time quanta.
- Prevent Starvation: No,due to time slicing
- Optimize Average Waiting Time, since it doesnt favour any fixed property.
- Optimize Average Completion Time, since avg comletion time is high incase of long running processes.

| Scheduling Algorithm                 | Optimize Average Completion Time | Optimize Average Waiting Time | Prevent Starvation | Prevent Convoy Effect | Psychic Skills NOT Needed |
| ----------------------------------- | --------------------------------- | ----------------------------- | ------------------ | --------------------- | --------------------------- |
| Round Robin (RR)                    | NO                          | YES                      | YES                 | YES                    | YES                       |
| Shortest Job First (SJF)            | YES                               | NO                           | NO                | NO                    | NO                        |
| Shortest Time-to-Completion First (STCF) | YES                          | NO                           | NO                | YES                    | NO                        |
| First-Come, First-Served (FCFS)     | NO                              | NO                          | YES                | NO                   | YES                       |
