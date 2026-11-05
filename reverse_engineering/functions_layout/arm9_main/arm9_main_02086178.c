
void FUN_02086178(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x30);
  iVar2 = (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x68) + 0x68))();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *piVar3;
  if (*(char *)((int)piVar3 + 0x35) == '\0') {
    if (iVar2 != 0) {
      *(undefined1 *)(*(short *)((int)piVar3 + 0x1a) * 0x18 + *(int *)(iVar2 + 0x18) + 0x15) = 0;
    }
    *(undefined1 *)((int)piVar3 + 0x35) = 1;
  }
  else {
    if (iVar2 != 0) {
      iVar1 = *(short *)((int)piVar3 + 0x1a) * 0x18;
      iVar2 = *(int *)(iVar2 + 0x18) + 0x15;
      *(byte *)(iVar2 + iVar1) = *(byte *)(iVar2 + iVar1) | 4;
    }
    *(undefined1 *)((int)piVar3 + 0x35) = 0;
  }
  if (param_1 != 0) {
    FUN_0207a878(*(undefined4 *)(param_1 + 0x14));
  }
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),
               piVar3[0xc] + (uint)*(byte *)((int)piVar3 + 0x35),0);
  (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x68) + 0x6c))();
  return;
}

