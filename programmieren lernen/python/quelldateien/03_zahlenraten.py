# Das ist das Spiel "Zahlenraten" (oder "guess the number" in englisch):
# Das Programm denkt sich eine Zahl aus, die der Spieler möglichst schnell
# erraten muss

import random

print("Hallo! Wie heißt du?")
spielerName = input()

zahl = random.randint(1, 20)
print("Also, " + spielerName + ", ich habe mir eine Zahl zwischen 1 und 20 ausgedacht.")

runde = 0
while runde < 6:
    runde = runde + 1
    
    print("Du darfst jetzt raten:")
    geraten = input()
    geraten = int(geraten)

    if geraten < zahl:
        print("Du hast zu niedrig geraten!")

    if geraten > zahl:
        print("Du hast zu hoch geraten")

    if geraten == zahl:
        runde = str(runde)
        print("Gut gemacht, " + spielerName + ". Du hast die Zahl in " + runde + " Runden erraten!")
        break

if geraten != zahl:
    zahl = str(zahl)
    print("Falsch. Ich habe an die " + zahl + " gedacht...")
