""" Create a class Vehicle with method start().
Create a child class Bike and call start().  """

class vehicle:
    def start(self):
        print("Vehicle is starting")

class bike(vehicle):
    pass
bike = bike()
bike.start()
