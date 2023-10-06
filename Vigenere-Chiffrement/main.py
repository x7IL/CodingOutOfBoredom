
import re
import string

mot ="texteclair"
alphabet = string.ascii_lowercase
cle = "sexus"

def chiffrer(mot,cle):
    mot = re.sub(pattern='[^a-z]',repl='',string=mot)
    cle = re.sub(pattern='[^a-z]',repl='',string=cle)
    c = ''
    g = 0
    e = len(cle)
    for i in mot:
        c += chr((ord(i) - 97 + alphabet.index(cle[g])) % 26 + 97)
        g = (g + 1) % e

    print(*[' ' + c[j] if j % 5 == 0 else c[j] for j in range(len(c))], sep="")

def dechiffrer(mot, cle):
    mot = re.sub(pattern='[^a-z]', repl='', string=mot)
    cle = re.sub(pattern='[^a-z]', repl='', string=cle)
    c = ''
    g = 0
    e = len(cle)
    for i in mot:
        c += chr((ord(i) - 97 - alphabet.index(cle[g])) % 26 + 97)
        g = (g + 1) % e

    print(*[' ' + c[j] if j % 5 == 0 else c[j] for j in range(len(c))], sep="")

chiffrer(mot,cle)

dechiffrer("liunw upxcj",cle)