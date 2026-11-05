
void FUN_02180690(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xad) == '\0') {
    iVar3 = FUN_0217335c(param_1,0,param_3,param_4,param_4);
    if (iVar3 == 0) {
      return;
    }
    if ((*(uint *)(param_1 + 0xd4) & 2) != 0) {
      *(char *)(param_1 + 0xad) = *(char *)(param_1 + 0xad) + '\x01';
    }
    return;
  }
  iVar3 = *(int *)(**(int **)(param_1 + 0x24) + 0xc);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0xad) = 0;
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0x105) = 1;
    return;
  }
  iVar1 = FUN_021733b4(0xb);
  if (iVar1 < 0) {
    piVar2 = (int *)0x0;
  }
  else {
    iVar1 = *(int *)(iVar3 + iVar1 * 4 + 8);
    if (iVar1 < 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(iVar3 + iVar1);
    }
  }
  if (piVar2 == (int *)0x0) {
    *(undefined1 *)(param_1 + 0xad) = 0;
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined1 *)(param_1 + 0x105) = 1;
    return;
  }
  if (*piVar2 == 1) {
    *(undefined1 *)(param_1 + 0xac) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0xac) = 1;
    FUN_0217d8d0(param_1,0xb);
  }
  *(undefined1 *)(param_1 + 0xad) = 0;
  return;
}

