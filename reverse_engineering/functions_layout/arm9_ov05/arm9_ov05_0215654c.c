
bool FUN_0215654c(uint param_1,int param_2)

{
  return (*(uint *)(&DAT_020b0d48 + (param_1 >> 5) * 4 + param_2 * 0xc) & 1 << (param_1 & 0x1f)) !=
         0;
}

