
undefined4 FUN_0204121c(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + -1;
  *(int *)(param_1 + 4) = iVar1;
  iVar1 = param_1 + 0x10 + iVar1 * 0x20;
  *(short *)(iVar1 + 6) = (short)(*param_2 >> 4);
  *(short *)(iVar1 + 0xe) = (short)(param_2[1] >> 4);
  *(short *)(iVar1 + 0x16) = (short)(param_2[2] >> 4);
  *(short *)(iVar1 + 0x1e) = (short)(param_2[3] >> 4);
  return *(undefined4 *)(param_1 + 4);
}

