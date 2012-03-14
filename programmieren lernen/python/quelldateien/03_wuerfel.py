# Ein Programm, das so oft eine Zahl würfelt, bis der Spieler "stopp" eintippt

import random

while True:
    zahl = random.randint(1, 6)
    zahl = str(zahl)
    
    print("Ich habe eine " + zahl + " gewürfelt.")

    befehl = input()
    
    if befehl == "stopp":
        print("Schade, schon vorbei.")
        break


