
void FUN_0214ea34(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((DAT_020b0b90 & 8) == 0) {
    return;
  }
  piVar1 = (int *)FUN_02028920(0);
  iVar2 = *piVar1;
  if ((*(uint *)(iVar2 + *(int *)(iVar2 + 0x70) * 4 + 0x18) &
      ~*(uint *)(iVar2 + *(int *)(iVar2 + 0x74) * 4 + 0x18)) != 0x8000) {
    iVar2 = FUN_020208ec(0);
    iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x130))();
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_0214ec4c(iVar3,2);
  *(undefined1 *)(iVar3 + 0x18) = 1;
  return;
}

