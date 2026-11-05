
void FUN_0202a1f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    while (piVar1 != (int *)0x0) {
      piVar3 = (int *)piVar1[8];
      *(byte *)(piVar1 + 9) = *(byte *)(piVar1 + 9) & 0xbf;
      (**(code **)(*piVar1 + 0x54))(piVar1,&DAT_020a2144);
      piVar1 = piVar3;
    }
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x24) < '\0') {
    return;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 0x1c);
  if (iVar2 != param_1) {
    while (*(int *)(iVar2 + 0x20) != param_1) {
      iVar2 = *(int *)(iVar2 + 0x20);
    }
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    return;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x1c) = *(undefined4 *)(iVar2 + 0x20);
  }
  return;
}

