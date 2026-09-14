#include <iostream>
using namespace std;

int main()
{
    int n;

    // Input total number of students
    cout << "Enter the total number of students: ";
    cin >> n;

    int attendance[n];

    // Input attendance values
    cout << "Enter attendance values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> attendance[i];
    }

    int sum = 0;
    int max = attendance[0];
    int min = attendance[0];
    int zeroCount = 0;

    // Frequency array (Attendance values: 0–100)
    int freq[101] = {0};

    // Process attendance data
    for (int i = 0; i < n; i++)
    {
        sum += attendance[i];

        if (attendance[i] > max)
            max = attendance[i];

        if (attendance[i] < min)
            min = attendance[i];

        if (attendance[i] == 0)
            zeroCount++;

        freq[attendance[i]]++;
    }

    // Calculate average
    float average = (float)sum / n;

    // Find mode
    int mode = 0;
    int maxFreq = freq[0];

    for (int i = 1; i <= 100; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            mode = i;
        }
    }

    // Display results
    cout << "\n------ Attendance Report ------\n";
    cout << "Average Attendance : " << average << endl;
    cout << "Maximum Attendance : " << max << endl;
    cout << "Minimum Attendance : " << min << endl;
    cout << "Students with Zero Attendance : " << zeroCount << endl;
    cout << "Mode Attendance : " << mode << endl;

    return 0;
}