import random

def spin_row():
    symbols = ["💦", "🫦",   "💃",  "🎀"]

    return [random.choice(symbols) for _ in range(3)]    
    
    
def print_row(row):     
    print("-------------")
    print(" | ".join(row))
    print("-------------")

def get_payout(row, bet):
    if row [0] == row[1] == row[2]:
        if row == "💦" or row == "🫦" or row == "💃" or row == "🎀":
            return bet * 3
    return 0

def main():
    balance = 100
    
    print("****************************")
    print("\n")
    print("Welcome to python Slots game")
    print("Symbols : 💦  🫦   💃  🎀")
    print("\n")
    print("****************************")

    while balance > 0:
        print(f"Your current balance is ${balance:.2f}")

        bet = input("Enter the bet amount : ")
        
        if not bet.isdigit():
            print("Enter a valid amount")
            continue

        bet = int(bet)
        if bet > balance:
            print("Insufficient Funds")
            continue     

        if bet <= 0:
            print("Bet can't be zero")
            continue
        
        balance -= bet

        row = spin_row()
        print("spinning.....\n")
        print_row(row)
        
        payout = get_payout(row, bet)

        if payout > 0:
            print(f"You won ${payout}")
        else:
            print("You Lose! ")
        
        balance += payout

        play_again = input("Do you want to play again(Y/N): ").upper()

        if play_again != "Y":
            break

if __name__ == "__main__":
   main()