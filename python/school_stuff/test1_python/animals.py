class Animal:
    def __init__(self, species, sound):
        self.species = species
        self.sound = sound

    def speak(self):
        return f"{self.species} makes a {self.sound} sound."
Animals = [
    Animal("Dog", "Bark"),
    Animal("Cat", "Meow"),
    Animal("Cow", "Moo"),
    Animal("Sheep", "Baa"),
    Animal("Duck", "Quack")
]
user_input = input("Enter an animal species: ")
while user_input != "end":
    for animal in Animals:
        if user_input in animal.species:
            print(animal.speak())
            break
    user_input = input("Enter an animal species or 'end' to quit: ")

