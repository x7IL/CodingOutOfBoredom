import random

min = 0
max = 100
a = random.randint(min, max)
b = None
nb = 0
print(a)
while True:
    b = input("Quel est le chiffre donné au hasard?\n")
    if b.isdigit():
        b = int(b)
        if a == b:
            print("bien joué, vous avez trouvé le nombre en", nb, "coups", "\n")
            break
        else:
            if b > a < max:
                max = b
                print("Oups, le nombre est inférieur à", b, ". Soit entre", min, "et", max, "\n")
            elif b < a:
                min = b
                print("Oups, le nombre est supérieur à", b, ". Soit entre", min, "et", max, "\n")
        nb += 1
    else:
        print("Veuillez saisir un nombre")
