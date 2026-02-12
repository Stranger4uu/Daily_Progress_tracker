/* 
List Questions

Create a list of 5 numbers and print all elements.


void main(){
    List<int> numbers = [1,2,3,4,5];
    print(numbers);
}

Add a new element to a list and print updated list.

void main(){
    List<int> numbers = [1,2,3,4,5];
    numbers.add(6);
    print(numbers);
}

Remove one element from list.

void main(){
    List<int> numbers = [1,2,3,4,5];
    numbers.add(6);
    numbers.remove(3);
    print(numbers);
}

Find length of a list.

void main(){
    List<int> numbers = [1,2,3,4,5];
    numbers.add(6);
    numbers.remove(3);
    print(numbers);
    print(numbers.length);
}
*/

/*

Question:

You are given a list of numbers:

[1, 2, 2, 3, 4, 4, 5]


Task:

Remove duplicates using Set

Convert it back into List

Print the final list

👉 This teaches:

List → Set conversion

Removing duplicates

Data transformation logic

void main(){
  List<int> numbers = [1, 2, 2, 3, 4, 4, 5];
  // Set<int> uniqueNumbers = numbers.toSet();
  // List<int> finalNumbers = uniqueNumbers.toList();
  // print(finalNumbers);

  // Or

  List<int> uniqueNumbers = numbers.toSet().toList();
  print(uniqueNumbers);

  
}
*/

/*
Project: Student Attendance Manager

Requirements:

Use a List to store all students.

Use a Set to store students who attended today.

Add attendance.

Prevent duplicate attendance.

Print:

Total students

Present students

Absent students

This is very close to real-world app logic.
*/


  List<String> allStudents = [
    "Rahul",
    "Aman",
    "Priya",
    "Riya",
    "Karan",
    "Sneha"
  ];

  Set<String> presentStudents = {
    "Rahul",
    "Priya",
    "Sneha"
  };
void main(){
  print("All Students: $allStudents");
  print("Present Students: $presentStudents");
  print("Absent Students:");
  for (var student in allStudents) {
    if (!presentStudents.contains(student)) {
      print(student);
      
    }
  }
}