
void FUN_0216ac20(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  while (iVar1 != 0) {
    while (iVar1 != 0) {
      *(ushort *)(iVar1 + 0x26) = *(ushort *)(iVar1 + 0x26) | 0x200;
      FUN_02037c24(param_1,iVar1);
      FUN_02037b98(param_1 + 2,iVar1);
      iVar1 = *param_1;
    }
    FUN_0216b220(param_1);
    iVar1 = *param_1;
  }
  return;
}

