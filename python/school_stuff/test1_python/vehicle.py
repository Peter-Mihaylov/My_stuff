class Vehicle:
    def __init__(self, brand, model, price):
        self.brand = brand
        self.model = model
        self.price = price

    def __str__(self):
        return f"{self.brand} {self.model} - {self.price}$"


class Car(Vehicle):
    pass


class Bus(Vehicle):
    pass


class Van(Vehicle):
    pass


class Truck(Vehicle):
    pass


vehicles = [
    Car("Audi", "A6", 10000),
    Car("Mercedes", "C220", 15000),
    Car("Opel", "Astra", 4000),
    Car("Toyota", "Corolla", 7000),
    Bus("Mercedes", "Sprinter", 20000),
    Bus("Iveco", "Daily", 18000),
    Van("Volkswagen", "Transporter", 12000),
    Van("Ford", "Transit", 11000),
    Truck("MAN", "TGS", 30000)
]

search_type = input("Enter a vehicle type: ")

type_mapping = {
    "Cars": Car,
    "Buses": Bus,
    "Vans": Van,
    "Trucks": Truck
}

if search_type in type_mapping:
    vehicle_class = type_mapping[search_type]
    for vehicle in vehicles:
        if isinstance(vehicle, vehicle_class):
            print(vehicle)
else:
    print("Invalid vehicle type.")
