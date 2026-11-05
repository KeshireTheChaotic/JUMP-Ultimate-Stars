
undefined4 FUN_0200a290(int param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_2 + 5) == '\0') {
      return 0;
    }
    return 1;
  }
  if (*(char *)(param_2 + 5) == '\0') {
    return 0;
  }
  if (*(short *)(param_1 + 2) != *(short *)(param_2 + 2)) {
    if (*(short *)(param_1 + 2) < *(short *)(param_2 + 2)) {
      return 1;
    }
    return 0;
  }
  uVar6 = (uint)*(byte *)(param_1 + 4);
  uVar5 = (uint)*(byte *)(param_2 + 4);
  uVar4 = uVar6;
  if (uVar5 < uVar6) {
    uVar4 = uVar5;
  }
  iVar3 = 0;
  if (uVar4 != 0) {
    do {
      bVar1 = *(byte *)(param_2 + iVar3 + 5);
      bVar2 = *(byte *)(param_1 + iVar3 + 5);
      if (bVar2 < bVar1) {
        return 1;
      }
      if (bVar1 < bVar2) {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar4);
  }
  if ((uVar4 == uVar6) && (iVar3 < (int)uVar5)) {
    do {
      if (*(char *)(param_2 + iVar3 + 5) != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(byte *)(param_2 + 4));
  }
  return 0;
}

