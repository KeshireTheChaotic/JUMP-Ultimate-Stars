
int FUN_021996e4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02198c00();
  iVar2 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if ((*(int *)(iVar1 + 0x2270) != 0) && (0xc < *(uint *)(iVar1 + 0x2274))) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x2270) + 4);
    while ((iVar2 != 0 && (iVar1 = FUN_02199dec(iVar2 + 0x14,param_1), iVar1 == 0))) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  return iVar2;
}

