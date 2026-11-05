
bool FUN_02177c00(int param_1,uint param_2)

{
  return (*(uint *)(param_1 + ((int)param_2 >> 5) * 4 + 0x34) &
         1 << (param_2 - (param_2 & 0xffffffe0) & 0xff)) != 0;
}

