#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    // Validate number of students
    if (n <= 0 || n > 100) {
        cout << "Invalid number of students. Enter a value between 1 and 100.\n";
        return 1;
    }

    int attendance[100];

    cout << "Enter attendance for " << n << " students:\n";

    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> attendance[i];
    }

    int sum = 0;
    int highest = attendance[0];
    int lowest = attendance[0];
    int zeroCount = 0;

    // Calculate sum, highest, lowest and zero attendance
    for (int i = 0; i < n; i++) {
        sum += attendance[i];

        if (attendance[i] > highest) {
            highest = attendance[i];
        }

        if (attendance[i] < lowest) {
            lowest = attendance[i];
        }

        if (attendance[i] == 0) {
            zeroCount++;
        }
    }

    float average = (float)sum / n;

    // Find mode
    int mode = attendance[0];
    int maxCount = 0;

    for (int i = 0; i < n; i++) {
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (attendance[i] == attendance[j]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = attendance[i];
        }
    }

    // Display results
    cout << "\nAverage = " << average;
    cout << "\nHighest Attendance = " << highest;
    cout << "\nLowest Attendance = " << lowest;
    cout << "\nStudents with Zero Attendance = " << zeroCount;

    if (maxCount > 1)
        cout << "\nMode = " << mode;
    else
        cout << "\nNo mode";

    cout << "\nTime Complexity: Average O(n), Highest/Lowest O(n), "
            "Zero Count O(n), Mode O(n^2)";

    cout << "\nSpace Complexity: O(n)";

    return 0;
}