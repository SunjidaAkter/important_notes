
class A:
    __value = 5
    def __init__(self) -> None:
        pass
    def display(self):
        print(self.__value)

obj = A()

obj.value = 10
# print(obj.__value)
obj.display()#this will not display 10 because value cannot be changed as it is private

