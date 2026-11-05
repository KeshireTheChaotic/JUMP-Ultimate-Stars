
void FUN_02150c20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x14); iVar3 = iVar3 + 1) {
    iVar2 = param_1 + iVar3 * 4;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
      if ((iVar3 != iVar1) && (*(int *)(iVar2 + 0x1c) < *(int *)(param_1 + iVar1 * 4 + 0x1c))) {
        *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
      }
    }
    iVar1 = param_1 + iVar3 * 4;
    if (*(int *)(iVar1 + 0x5c) != *(int *)(iVar1 + 0x4c)) {
      if ((*(int *)(iVar1 + 0x5c) == 0) && (*(byte *)(param_1 + iVar3 + 0xc0) < 0xfe)) {
        *(char *)(param_1 + iVar3 + 0xc0) = *(char *)(param_1 + iVar3 + 0xc0) + '\x01';
      }
      *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(iVar1 + 0x4c);
    }
  }
  FUN_0214f998();
  return;
}

