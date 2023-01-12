class SlotsFreezer:
    __slots__ = []
    _frozen = False

    def __init__(self):
        for attr_name in dir(self):
            self.__slots__.append(attr_name)
        self._frozen = True

    def __delattr__(self, *args, **kwargs):
        if self._frozen:
            raise AttributeError('This object is frozen!')
        object.__delattr__(self, *args, **kwargs)

    def __setattr__(self, *args, **kwargs):
        if self._frozen:
            raise AttributeError('This object is frozen!')
        object.__setattr__(self, *args, **kwargs)


class SlotsFreezerCar(SlotsFreezer):
    def __init__(self, make, model, year, color):
        self.make = make
        self.model = model
        self.year = year
        self.color = color

        super().__init__()


class NormalCar:
    def __init__(self, make, model, year, color):
        self.make = make
        self.model = model
        self.year = year
        self.color = color


slots_freezer_car = SlotsFreezerCar('Subaru', 'Crosstrek', '2018', 'Blue')
#slots_freezer_car.something_new = True -> will raise attribute error
normal_car = NormalCar('Subaru', 'Crosstrek', '2018', 'Blue')
#normal_car.something_new = True -> will be ok