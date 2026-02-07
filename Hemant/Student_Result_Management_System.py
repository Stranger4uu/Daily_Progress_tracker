def marks(m1, m2, m3):
    return m1 + m2 + m3

def calculate_percentage(total):
    return (total/300) * 100

def calculate_grade(percentage):
    if percentage >= 90:
       return "A+"
    elif percentage >= 75:
        return "A"
    elif percentage >= 60:
        return "B"
    elif percentage >= 45:
        return "C"
    else:
        return "D"

name = input("ENTER STUDENT NAME : ")

m1 = float(input("Enter no of 1st subject : "))
m2 = float(input("Enter no of 2nd subject : "))
m3 = float(input("Enter no of 3rd subject : "))
 
total = marks(m1, m2, m3)
percentage = calculate_percentage(total)
grade = calculate_grade(percentage)

print("\n -------- RESULT -------")
print("Name : ", name)
print("Total Marks : ", total)
print("Percentage : ", round(percentage,2))
print("Grade : ", grade)