s='L3t_ME_T3ll_Y0u_S0m3th1ng_1mp0rtant_A_{FL4G}_W0nt_b3_3X4ctly_th4t_345y_t0_c4ptur3_H0wev3r_1T_w1ll_b3_C00l_1F_Y0u_g0t_1t'
a=[0x24,0x0,0x5,0x36,0x65,0x7,0x27,0x26,0x2d,0x1,0x3,0x0,0xd,0x56,0x1, 0x3,0x65,0x3,0x2d,0x16,0x2,0x15,0x3,0x65,0x0,0x29,0x44,0x44,0x1,0x44,0x2b]
flag=''
for i in a:
    x=int(str(i)) 
    flag+=s[x]

print(flag)
