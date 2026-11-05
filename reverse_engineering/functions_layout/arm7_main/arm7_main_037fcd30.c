
void FUN_037fcd30(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x70) = iVar1;
  }
  else {
    *(int *)(iVar2 + 0x14) = iVar1;
  }
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x6c) = iVar2;
  }
  else {
    *(int *)(iVar1 + 0x10) = iVar2;
  }
  return;
}

