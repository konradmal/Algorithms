class Student:
    def __init__(self, surname, average_grade):
        self.surname = surname
        self.average_grade = average_grade

    def display_info(self):
        print(f"{self.surname} : {self.average_grade}")

#O(n^2)
def sort_students_lexically(students: list) -> None:
    count = len(students)
    for i in range(count):
        for j in range(count - i - 1):
            if (students[j].surname > students[j + 1].surname or
               (students[j].surname == students[j + 1].surname and
                students[j].average_grade > students[j + 1].average_grade)):
                students[j], students[j + 1] = students[j + 1], students[j]

students = [
    Student("A", 4.25),
    Student("H", 3.37),
    Student("B", 6.00),
    Student("G", 4.63),
    Student("B", 3.33),
    Student("C", 5.32),
    Student("D", 2.78),
    Student("F", 5.21),
    Student("G", 3.45),
    Student("F", 4.56)
]

print("Before sort:")
for student in students:
    student.display_info()
sort_students_lexically(students)
print("\nAfter sort:")
for student in students:
    student.display_info()