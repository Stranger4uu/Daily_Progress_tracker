/*

Set Questions

Create a set with duplicate numbers and print result.

void main(){
  Set<int> numbers = {1,2,3,4,5,6,7,8,9,0,0,1,2,3,6,7};
  print(numbers);
}

Add a new value to a set.

void main(){
  Set<int> numbers = {1,2,3,4,5,6,7,8,9,0,0,1,2,3,6,7};
  numbers.add(11);
  print(numbers);

}

Remove a value from a set.

void main(){
  Set<int> numbers = {1,2,3,4,5,6,7,8,9,0,0,1,2,3,6,7};
  numbers.add(11);
  numbers.remove(11);
  print(numbers);

}


Convert a list into a set.

void main(){
  List<String> names = ["Rahul", "Aman", "Rahul", "Riya"];
  Set<String> uniqueNames = names.toSet();
  print(uniqueNames);
  
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
*/

void main(){
  List<int> numbers = [1, 2, 2, 3, 4, 4, 5];
  // Set<int> uniqueNumbers = numbers.toSet();
  // List<int> finalNumbers = uniqueNumbers.toList();
  // print(finalNumbers);

  // Or

  List<int> uniqueNumbers = numbers.toSet().toList();
  print(uniqueNumbers);

  
}
