# # re07
# s = "Vjjp`Nf|roqSua}Ow}aKg%H{q{wpxpxE~mLTX"
# flag=""

# for i in range(0, 0x25):
#     flag+=chr(ord(s[i])^(i+1))

# print(flag)

# re05 = Whitehat{I_n33d_v1t4m1n_s34} - Fill the password : 76725167175623
key = [8, 19, 8, 18, 13, 8, 2, 4, 19, 14]

a=7
a1=3
v3=a*3+5
v4=15
print(key)
for i in range(0, 10):
    print((a*key[i]+a1)%v3, end="")