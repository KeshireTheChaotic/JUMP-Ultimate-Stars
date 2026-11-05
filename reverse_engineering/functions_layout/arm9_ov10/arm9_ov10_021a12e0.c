
int FUN_021a12e0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < *(int *)(param_1 + 0x18)) {
    iVar1 = iVar1 + 0x8000;
  }
  return iVar1 - *(int *)(param_1 + 0x18);
}

