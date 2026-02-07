def show_balance(balance):
    print(f"Your balance is ${balance:.2f}")
      
def deposit():
    amount = float(input("Enter the amount to be deposited : ")) 

    if amount < 0:
        print("That's not a valid amount")
        return 0 
    else:
        return amount

def withdrawn(balance):
    amount = float(input("Enter the amount to be withdrawn : "))

    if amount > balance:
        print("Insufficient Funds")
        return 0
    elif amount < 0:
        print("Amount must be greater than 0")
        return 0    
    else:
        return amount

def main():
    balance = 0 
    is_running = True

    while is_running:
        print("----------------------")
        print("  Welcome to Banking  ")
        print("1. Show balance")
        print("2. Deposit")
        print("3. withdrawn")
        print("4. Exit")
        print("-----------------------")
        choose = input("Enter any option(1-4) : ")

        if choose == "1":
            show_balance(balance)
        elif choose =="2":
            balance += deposit()
        elif choose == "3":
            balance -= withdrawn(balance)
        elif choose == "4":
            is_running = False
        else:
            print("-----------------------")
            print("Invalid option")

    print("Thanks! Have a nive day ")

if __name__ == "__main__":
    main()
