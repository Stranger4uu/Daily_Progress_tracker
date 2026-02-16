/*
An extension allows you to add new methods or properties to an existing class.

👉 You are extending behavior, not inheritance.

✅ Basic Syntax
extension ExtensionName on ClassName {
  // new methods or properties
}

✅ Example 1 — Extension on String

Suppose you want to check if a string is an email.

extension EmailValidator on String {
  bool isEmail() {
    return contains("@");
  }
}

Usage:
void main() {
  String email = "abc@gmail.com";

  print(email.isEmail()); // true
}


✅ Now String has a new method.

✅ Example 2 — Extension on int
extension NumberExtension on int {
  bool isEvenNumber() {
    return this % 2 == 0;
  }
}


Usage:

print(10.isEvenNumber()); // true

✅ Real World Usage (Very Important)

Extensions are heavily used in Flutter apps.

✅ 1. UI Helpers (Flutter)

Example:

extension PaddingExtension on Widget {
  Widget withPadding() {
    return Padding(
      padding: EdgeInsets.all(8),
      child: this,
    );
  }
}


Usage:

Text("Hello").withPadding();


Cleaner UI code ✅

✅ 2. String Formatting
extension Capitalize on String {
  String capitalize() {
    return this[0].toUpperCase() + substring(1);
  }
}


Used in:

User names

Titles

Chat apps

✅ 3. Date Formatting

Used in real apps for:

Chat timestamps

Order dates

Notifications

✅ Extension vs Inheritance (Important Difference)
Extension	Inheritance
Adds method externally	Creates new child class
Cannot access private members	Can access protected members
No object creation needed	Requires subclass
✅ Why Developers Use Extensions

✅ Cleaner code
✅ Reusable functions
✅ Better readability
✅ No need to modify original class
✅ Very common in Flutter projects
*/