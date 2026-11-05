
undefined4 FUN_02000d84(int param_1,int param_2,int param_3,uint *param_4)

{
  int iVar1;
  
  if (param_2 < 7) {
    return 1;
  }
  iVar1 = FUN_020024cc(param_3 + 4,&DAT_020a064c,4);
  if (iVar1 != 0) {
    return 1;
  }
  if (*(short *)(param_3 + 2) != DAT_020a064a) {
    return 1;
  }
  iVar1 = FUN_020024cc(param_1,&DAT_02092ee0,3);
  if (iVar1 == 0) {
    *param_4 = (int)*(char *)(param_1 + 3) << 0x18 | (uint)*(byte *)(param_1 + 4) << 0x10 |
               (uint)*(byte *)(param_1 + 5) << 8 | (uint)*(byte *)(param_1 + 6);
    return 0;
  }
  return 1;
}

