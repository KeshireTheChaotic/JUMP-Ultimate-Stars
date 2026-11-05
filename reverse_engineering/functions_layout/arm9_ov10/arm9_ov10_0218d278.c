
undefined4 FUN_0218d278(int param_1,int param_2)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = param_1;
  do {
    if (param_2 == *(int *)(iVar1 + 0xd8)) {
      return 1;
    }
    iVar1 = iVar1 + 4;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  FUN_0200d12c(*(int *)(param_1 + 0x100) + 1,10);
  *(int *)(param_1 + 0x100) = extraout_r1;
  *(int *)(param_1 + *(int *)(param_1 + 0x100) * 4 + 0xd8) = param_2;
  return 0;
}

