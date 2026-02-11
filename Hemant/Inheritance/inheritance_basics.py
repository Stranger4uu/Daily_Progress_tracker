class person():
    def __init__(self, name):
        self.name = name

class student(person):
    def show(self):
        print("hello", self.name)

Students = student("Hemant")
Students.show