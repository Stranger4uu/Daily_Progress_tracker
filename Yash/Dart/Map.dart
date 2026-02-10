/* 
A Map is a collection of data stored as key → value pairs.

👉 Every value is connected to a unique key.

Think of it like a dictionary:

Word (Key)	Meaning (Value)
apple	fruit
car	vehicle

In Dart:

Map<String, String>


means:

key → String

value → String
*/

/*

Q1️⃣

Create a map storing:

name

age

city

Print only the age.

ANS.

void main(){
    Map Data = {

        'name' : 'Yash',
        'age' : 19,
        'city' : 'Jaipur'
    };

    print(Data['age']);
}

Q2️⃣

Create a map of fruits and prices.
Add one new fruit later and print the map.

ANS.

void main(){
    Map<String,int> Data = {
        'Apple' : 70,
        'banana' : 35,
        

    };

    Data['orange'] = 40;
    Data.forEach((key,value){
        print('$key : $value');
    });

}


Q3️⃣

Create a map of student marks.
Update one student’s marks.

ANS.

void main(){
    Map<String,int> StudentData = {
        'Yash' : 99,
        'Tanishk' : 69,
        'Jayy' : 80,
        'harsh' : 80,
    };
    StudentData['Tanishk'] = 85;

    StudentData.forEach((key,value){
        print('$key : $value');
    });
}



Q4️⃣

Create a map and print all keys using loop.

ANS. 

void main() {
  Map<String, int> marks = {
    "Rahul": 85,
    "Aman": 90,
    "Neha": 88
  };

 for ( var entry in marks.entries){
    print('${entry.key} : ${entry.value}');
 }
}



*/


/*

🧩 Question: Student Result Checker

Create a map storing student names and marks:

Example:

Rahul → 75
Aman → 40
Priya → 90
Riya → 32


Task:

Loop through the map

Print:

Rahul : Pass
Aman : Fail
Priya : Pass
Riya : Fail


Condition:

Marks ≥ 50 → Pass

Marks < 50 → Fail

This helps you understand logic + map iteration.

*/

// void main(){
//     Map<String,int> StudentData = {
//         'Rahul' :75,
//         'Aman' : 40,
//         'Priya' : 90,
//         'Riya' : 32,
//     };
//     for (var entry in StudentData.entries){
//         if(entry.value >= 50){
//             print('${entry.key} : Pass');
//         }
//         else{print('${entry.key} : Fail');
//         }

//     }


// }

/* 
📚 Project: Student Information System
Objective

Store and manage student details using Map.

Requirements

1️⃣ Create a map storing:

name
age
branch
college


2️⃣ Print all details.

3️⃣ Update the branch.

4️⃣ Add a new field:

CGPA


5️⃣ Remove one field.

6️⃣ Finally print updated data.

Rules

✔ Use Map only
✔ Use add, update, remove operations
✔ Use loop to print data

*/

void main(){
    Map StudentData = {
        'name' : 'Yash',
        'age' : 19,
        'branch' : 'CSE',
        'college' : 'JECRC',
    };
    print("----- OLD DATA -----");
    print("\n");
    for(var entry in StudentData.entries){
        print('${entry.key} : ${entry.value} ');
    
    }
    print("\n");

    StudentData['branch'] = 'ESE';
    StudentData['GPA'] = 8.5;
    StudentData.remove('branch');

     print("----- NEW DATA -----");
     print("\n");
    for(var entry in StudentData.entries){
        print('${entry.key} : ${entry.value} ');
    
    }

}