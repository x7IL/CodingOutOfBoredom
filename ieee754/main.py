



def float_bin(nombre):

    a,d = map(int,str(nombre).split("."))
    binaire = bin(a)[2:]
    sn=str((a>0)*str(0) or str(1))
    expo = bin(127+len(binaire)-1)[2:]
    c = ''

    d = float('0.'+str(d))
    for i in range(23):
        d = d*2
        c+=str(d)[0]
        if int(str(d)[0]) > 0:
            d = float('0.'+str(d)[-1])

    return sn+" "+expo+" "+binaire[1:]+c
def bin_float(bin):
    tot = 0
    for i,j in enumerate(bin[1][::-1]):
        tot += int(j) * 2**(i)
    exp = tot - 127
    tot2 = 0
    for i,j in enumerate(bin[-1]):
        tot2+= int(j)*2**(-(i+1))

    fin = (-1)**(int(bin[0])) * (1 + tot2) * 2**exp
    return fin

print(float_bin(432.3))
print(bin_float(float_bin(432.3).split()))