
int FUN_0205eab4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02002060(param_2);
  uVar2 = ~(iVar1 - 1U) & (iVar1 - 1U) + *(int *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x28) < uVar2) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(uint *)(param_1 + 0x28) - uVar2;
  }
  return iVar1;
}

