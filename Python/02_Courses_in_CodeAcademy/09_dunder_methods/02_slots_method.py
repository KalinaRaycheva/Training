class Car:
    '''Contains information about a car such as make, model, etc.
    '''
    __slots__ = ['make', 'model', 'year', 'color']
    def __init__(self, make, model, year, color):
        self.make = make
        self.model = model
        self.year = year
        self.color = color

car = Car('Subaru', 'Crosstrek', '2018', 'Blue')
print(car.make)
# output: 'Subaru'
print(car.year)
# output: '2018'
# --> try to set a new attribute, I dare you!
car.all_wheel_drive = True