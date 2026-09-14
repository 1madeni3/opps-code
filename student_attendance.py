# Student Attendance Management System

students = {
    "Raj": 63,
    "Prem": 69,
    "Apurva": 73,
    "Suyash": 72,
    "Nitin": 16
}

print("Student Attendance Record")
print("--------------------------")

# Display attendance of all students
for name, attendance in students.items():
    print(name, ":", attendance, "%")

# Assume first student is highest and lowest
highest_student = list(students.keys())[0]
lowest_student = list(students.keys())[0]

# Find highest and lowest attendance
for name in students:
    if students[name] > students[highest_student]:
        highest_student = name

    if students[name] < students[lowest_student]:
        lowest_student = name

print("\nHighest Attendance")
print("Student:", highest_student)
print("Attendance:", students[highest_student], "%")

print("\nLowest Attendance")
print("Student:", lowest_student)
print("Attendance:", students[lowest_student], "%")

# Appreciation message
print("\nAppreciation Message")
if students[highest_student] >= 90:
    print("Congratulations", highest_student + "!")
    print("Excellent attendance. Keep up the great work!")
else:
    print("Good job", highest_student + "!")
    print("You have the highest attendance in the class. Keep it up!")
