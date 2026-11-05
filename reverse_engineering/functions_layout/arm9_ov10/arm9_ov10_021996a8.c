
int FUN_021996a8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02198c00();
  iVar2 = 0;
  if ((*(int *)(iVar1 + 0x2270) != 0) && (0xc < *(uint *)(iVar1 + 0x2274))) {
    for (iVar2 = *(int *)(*(int *)(iVar1 + 0x2270) + 4);
        (iVar2 != 0 && (*(int *)(iVar2 + 4) != param_1)); iVar2 = *(int *)(iVar2 + 0xc)) {
    }
  }
  return iVar2;
}

