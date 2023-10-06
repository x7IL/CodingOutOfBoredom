




a = list("ABCDE")
b = list("FGHIK")
c = list("LMNOP")
d = list("QRSTU")
e = list("VWXYZ")

all = [a]+[b]+[c]+[d]+[e]
mot = "CARRE"
res = ""
for k in mot:
    for i in range(len(all)):
        for j in range(len(all[i])):
            if k==all[i][j]:
                res+=str(i+1)+str(j+1)
                break
print(res)