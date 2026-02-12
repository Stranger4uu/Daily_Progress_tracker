""" Create a class Employee with a method work().
Create a child class Manager and use that method.  """
class Employee():
    def work(self):
        print("Get your work done")

class manager(Employee):
    pass

m = manager()
m.work()