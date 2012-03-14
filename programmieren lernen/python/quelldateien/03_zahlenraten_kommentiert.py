# Das ist das Spiel "Zahlenraten" (oder "guess the number" in englisch):
# Das Programm denkt sich eine Zahl aus, die der Spieler möglichst schnell
# erraten muss

# das Modul "random" wird eingebettet,
# damit wir später eine Zufallszahl erzeugen können
import random

# Spieler begrüßen
print("Hallo! Wie heißt du?")
spielerName = input()

# Zahl zwischen 1 und 20 "ausdenken"
zahl = random.randint(1, 20)
print("Also, " + spielerName + ", ich habe mir eine Zahl zwischen 1 und 20 ausgedacht.")

# den Spieler höchstens 6 Runden raten lassen
runde = 0
while runde < 6:
    # wieder eine Runde mehr
    runde = runde + 1

    # Spieler eine Zahl raten lassen und in "geraten" merken
    print("Du darfst jetzt raten:")
    geraten = input()
    # von einer Zeichenkette in eine wirkliche Zahl umwandeln
    geraten = int(geraten)

    # wenn die geratene Zahl kleiner als die gedachte Zahl ist
    if geraten < zahl:
        print("Du hast zu niedrig geraten!")

    # wenn die geratene Zahl größer als die gedachte Zahl ist
    if geraten > zahl:
        print("Du hast zu hoch geraten")

    # wenn die geratene Zahl gleich der gedachten Zahl ist
    if geraten == zahl:
        # "runde" in eine Zeichenkette umwandeln, damit man sie ausgeben kann
        runde = str(runde)
        print("Gut gemacht, " + spielerName + ". Du hast die Zahl in " + runde + " Runden erraten!")
        # Spielschleife verlassen - wir müssen ja nicht mehr raten
        break

# wenn die geatene Zahl zum Schluss immer noch falsch ist
if geraten != zahl:
    # "zahl" in eine Zeichenkette umwandeln, damit man sie ausgeben kann
    zahl = str(zahl)
    print("Falsch. Ich habe an die " + zahl + " gedacht...")
