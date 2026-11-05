
int FUN_02011494(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_020114e4();
  return param_1 + ((int)*(short *)(param_1 + ((uint)*(ushort *)(param_1 + 0xc) +
                                              (uint)*(ushort *)(param_1 + 0xe)) * 4 +
                                              (iVar1 / 2) * 2 + param_2 * 2 + 0x12) / 2 + 2) * 2;
}

