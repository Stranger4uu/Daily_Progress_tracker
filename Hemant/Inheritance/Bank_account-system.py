""" 🏦 Project: Bank Account System

Create:
Parent Class: Account
It should have:
name
balance
deposit()
show_balance()

Child Class: SavingsAccount
Add:
add_interest() (5% interest)

Child Class: CurrentAccount
Add:
withdraw() with no interest

👉 This project will help you understand:
how parent data is shared
how children add their own features
how real systems use inheritance      """

class Account:
    def __init__(self, name, balance):
        self.name = name
        self.balance = balance

    def deposit(self, amount):
        self.balance += amount
        print("Deposited:", amount)
        print("Updated Balance:", self.balance)
    def show_balance(self):
        print("Account Holder:", self.name)
        print("Balance:", self.balance)



class SavingsAccount(Account):
    def add_interest(self):
        interest = self.balance * 0.05   
        self.balance += interest
        print("Interest added:", interest)
        print("Updated Balance:", self.balance)



class CurrentAccount(Account):
    def withdraw(self, amount):
        if amount <= self.balance:
            self.balance -= amount
            print("Withdrawn:", amount)
            print("Remaining Balance:", self.balance)
        else:
            print("Insufficient balance")



s1 = SavingsAccount("Hemant", 1000)
c1 = CurrentAccount("Rahul", 2000)

print("\n--- Savings Account ---")
s1.show_balance()
s1.deposit(500)
s1.add_interest()

print("\n--- Current Account ---")
c1.show_balance()
c1.deposit(300)
c1.withdraw(1000)
c1.withdraw(5000)
