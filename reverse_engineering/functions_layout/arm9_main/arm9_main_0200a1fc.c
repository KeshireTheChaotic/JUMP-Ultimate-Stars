
undefined4 FUN_0200a1fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_2 + 5) == '\0') {
      return 1;
    }
    return 0;
  }
  if (*(char *)(param_2 + 5) != '\0') {
    if (*(short *)(param_1 + 2) != *(short *)(param_2 + 2)) {
      return 0;
    }
    uVar3 = (uint)*(byte *)(param_1 + 4);
    uVar2 = uVar3;
    if (*(byte *)(param_2 + 4) < uVar3) {
      uVar2 = (uint)*(byte *)(param_2 + 4);
    }
    iVar1 = 0;
    if (uVar2 != 0) {
      do {
        if (*(char *)(param_1 + iVar1 + 5) != *(char *)(param_2 + iVar1 + 5)) {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)uVar2);
    }
    if (uVar2 == uVar3) {
      param_1 = param_2;
    }
    if (iVar1 < (int)(uint)*(byte *)(param_1 + 4)) {
      do {
        if (*(char *)(param_1 + iVar1 + 5) != '\0') {
          return 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)*(byte *)(param_1 + 4));
    }
    return 1;
  }
  if (*(char *)(param_1 + 5) == '\0') {
    return 1;
  }
  return 0;
}

