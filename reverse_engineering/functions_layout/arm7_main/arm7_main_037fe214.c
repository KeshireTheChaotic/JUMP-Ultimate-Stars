
void FUN_037fe214(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    DAT_03808488 = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x14) = iVar2;
  }
  if (iVar2 == 0) {
    DAT_03808484 = iVar1;
  }
  else {
    *(int *)(iVar2 + 0x18) = iVar1;
  }
  return;
}

