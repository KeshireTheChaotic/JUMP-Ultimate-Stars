
undefined4 FUN_02077974(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = ((int)*(short *)(param_2 + 0x16) + *(char *)(param_3 + 2) * 0x40) * 0x10000 >> 0x10;
  if (0x4000 < iVar1) {
    iVar1 = 0x4000;
  }
  *(short *)(param_2 + 0x16) = (short)iVar1;
  *(undefined2 *)(param_2 + 0x18) = *(undefined2 *)(param_2 + 0x16);
  return 1;
}

