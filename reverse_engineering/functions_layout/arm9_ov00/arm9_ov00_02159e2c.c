
void FUN_02159e2c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  if (piVar2[5] == 0) {
    return;
  }
  iVar1 = piVar2[5] + -1;
  piVar2[5] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  if ((char)piVar2[7] == *(char *)((int)piVar2 + 0x1f)) {
    return;
  }
  *(char *)((int)piVar2 + 0x1f) = (char)piVar2[7];
  func_0x021bd590(*(undefined4 *)(*piVar2 + 0x88),(int)(char)piVar2[7]);
  func_0x021bd730(*(undefined4 *)(*piVar2 + 0x88),piVar2[4],0);
  return;
}

