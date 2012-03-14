# Ein Programm, das so oft eine Zahl würfelt, bis der Spieler "stopp" eintippt

# das Modul "random" wird eingebettet,
# damit wir später eine Zufallszahl erzeugen können
import random

# eine Schleife - alle eingerückten Zeilen werden immer wieder wiederholt
while True:
    # eine Zufallszahl zwischen 1 und 6 wird in der Variablen "zahl" gespeichert
    zahl = random.randint(1, 6)
    # ...und in eine Zeichenkette umgewandelt (damit man sie später ausgeben kann)
    zahl = str(zahl)

    # die "gewürfelte" Zahl ausgeben
    print("Ich habe eine " + zahl + " gewürfelt.")

    # dem Benutzer die Chance geben, etwas einzutippen (oder ENTER zu drücken)
    befehl = input()

    # wenn der Benutzer "stopp" eingegeben hat...
    if befehl == "stopp":
        print("Schade, schon vorbei.")
        # ...die Schleife beenden
        break
