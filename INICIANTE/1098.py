i = 0
j1 = 1
j2 = 2
j3 = 3

for k in range(11):

    if k == 0 or k == 5 or k == 10:
        if k == 5:
            j1 = 2
        elif k == 10:
            i = 2
        print("I=%d " % i + "J=%.d" % j1)
        print("I=%d " % i + "J=%.d" % j2)
        print("I=%d " % i + "J=%.d" % j3)
    else:
        print("I=%.1f " % i + "J=%.1f" % j1)
        print("I=%.1f " % i + "J=%.1f" % j2)
        print("I=%.1f " % i + "J=%.1f" % j3)

    i += 0.2
    j1 += 0.2
    j2 += 0.2
    j3 += 0.2
