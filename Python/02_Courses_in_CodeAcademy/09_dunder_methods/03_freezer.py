class Freezer:
    _frozen = False

    def __init__(self):
        self._frozen = True

    def __delattr__(self, *args, **kwargs):
        if self._frozen:
            raise AttributeError('This object is frozen!')
        object.__delattr__(self, *args, **kwargs)
    
    def __setattr__(self, *args, **kwargs):
        if self._frozen:
            raise AttributeError('This object is frozen!')
        object.__setattr__(self, *args, **kwargs)


class FreezerCar(Freezer):
    def __init__(self, make, model, year, color):
        self.make = make
        self.model = model
        self.year = year
        self.color = color

        super().__init__()


freezer_car = FreezerCar('Subaru', 'Crosstrek', '2018', 'Blue')
print(freezer_car.make)
# if we freezer_car.all_wheel_drive = True, we will get AttributeError