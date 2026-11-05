
void FUN_0215d1fc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02086bd4();
  if (iVar1 == 0) {
    iVar1 = **(int **)(iVar3 + 0x1c);
    uVar2 = *(uint *)(iVar1 + *(int *)(iVar1 + 0x70) * 4 + 0x18) &
            ~*(uint *)(iVar1 + *(int *)(iVar1 + 0x74) * 4 + 0x18);
  }
  else {
    uVar2 = 0;
  }
  iVar1 = *(int *)(iVar3 + 0xb8);
  *(int *)(iVar3 + 0xb8) = iVar1 + 1;
  if ((iVar1 < 0x85) && ((uVar2 & 0x10) == 0)) {
    return;
  }
  FUN_02073ebc(3,1);
  FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 0x18) + 4),FUN_0215c668);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d294);
  return;
}

