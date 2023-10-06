




def cesar(mot,deca):
    alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
                'v', 'w', 'x', 'y', 'z']
    return ''.join([chr((ord(i) - 97 + ord(alphabet[deca]) - 97) % 26 + 97) for i in mot])

print(cesar("manger",2))
#--> ocpigt

for i in range(26):
    print(cesar("ocpigt",i))
