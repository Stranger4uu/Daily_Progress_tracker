# to change class attribute 

class Person:
    name = "Stranger"
    '''def changeName(self, name):
        self.name = name
        # Person.name = name ( this will change the class attribute )
        # Or
        # self.__class__.name = "Hemant"
    '''
    # Or
    @classmethod
    def changeName(cls,name):
        cls.name = name
        

p1 = Person()
p1.changeName("Hemant")
print(p1.name)
print(Person.name)

# Polymorphism



