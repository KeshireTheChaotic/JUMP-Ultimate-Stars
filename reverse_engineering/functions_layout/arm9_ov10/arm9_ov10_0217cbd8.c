
int FUN_0217cbd8(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_02178448();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_02178448();
  *param_1 = iVar1 + 0x2c8;
  iVar1 = FUN_02178448();
  return *(byte *)(iVar1 + 0xd) + 1;
}

