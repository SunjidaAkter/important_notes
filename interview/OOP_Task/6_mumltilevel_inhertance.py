
class Animal:
    def __init__(self, name):
        self.name = name

    def sound(self):
        print("This is an animal sound")


class Mammal(Animal):
    def __init__(self, name, type_of_mammal):
        super().__init__(name)
        self.type_of_mammal = type_of_mammal

    def mammal_info(self):
        print(f"{self.name} is a {self.type_of_mammal}")


class Dog(Mammal):
    def __init__(self, name, type_of_mammal, breed):
        super().__init__(name, type_of_mammal)
        self.breed = breed

    def dog_info(self):
        print(f"{self.name} is a {self.breed} breed")



dog = Dog("Buddy", "Domestic mammal", "Golden Retriever")
dog.sound()# Inherited from Animal class
dog.mammal_info()# Inherited from Mammal class
dog.dog_info()# Defined in Dog class
