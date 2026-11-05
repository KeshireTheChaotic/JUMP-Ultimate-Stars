
void FUN_0214fe70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar2 + 0xab) == '\0') {
    FUN_0207342c(0x78,2);
    FUN_0214f814(iVar2);
    return;
  }
  FUN_0207342c(0x78,0);
  uVar1 = FUN_0214dd50();
  FUN_0214dd6c(uVar1,7);
  DAT_020afeb0 = 0;
  DAT_020afeb4 = 0;
  FUN_0214f7dc(iVar2);
  return;
}

