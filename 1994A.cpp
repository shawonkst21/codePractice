#include <bits/stdc++.h>
using namespace std;

struct Process {
    int id;
    int arrival_time;
    int burst_time;
    int priority;
    int completion_time;
    int turnaround_time;
    int waiting_time;
};

//................................
implement here
..............................
void display(const vector<Process>& p, int n) {
    cout << "ID\tArrival\tBurst\tPriority\tCompletion\tTurnaround\tWaiting\n";
    for (int i = 0; i < n; i++) {
        cout << p[i].id << "\t"
             << p[i].arrival_time << "\t"
             << p[i].burst_time << "\t"
             << p[i].priority << "\t\t"
             << p[i].completion_time << "\t\t"
             << p[i].turnaround_time << "\t\t"
             << p[i].waiting_time << "\n";
    }
}

int main() {
    int n;
    cin >> n;

    vector<Process> p(n);
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cin >> p[i].arrival_time >> p[i].burst_time >> p[i].priority;
    }

    preemptivePriorityScheduling(p, n);
    display(p, n);

    return 0;
}
