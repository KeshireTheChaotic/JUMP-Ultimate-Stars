
void FUN_02153b44(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  *(short *)(piVar1 + 7) = (short)piVar1[7] + -1;
  if (-1 < (short)piVar1[7]) {
    return;
  }
  iVar2 = 0;
  do {
    (**(code **)(**(int **)(piVar1[iVar2 + 2] + 4) + 0xd8))(*(int **)(piVar1[iVar2 + 2] + 4),0);
    FUN_020282f4(*(undefined4 *)(piVar1[iVar2 + 2] + 4));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  *(undefined2 *)((int)piVar1 + 0x1e) = 0;
  FUN_020282f4(*(undefined4 *)(*piVar1 + 4));
  *(undefined1 *)(piVar1 + 8) = 1;
  return;
}

