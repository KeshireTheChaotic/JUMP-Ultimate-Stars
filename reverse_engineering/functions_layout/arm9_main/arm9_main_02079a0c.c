
void FUN_02079a0c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*param_1 == 0) {
    return;
  }
  if (*(char *)(*param_1 + 0x5d6) != '\0') {
    iVar3 = 0;
    do {
      FUN_02079db0(param_1[iVar3 + 0x19],param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
  }
  if ((char)param_1[0x34] != '\0') {
    iVar3 = 0;
    do {
      if (*(char *)(*param_1 + iVar3 + 0x5d7) != -1) {
        FUN_02079db0(param_1[iVar3 + 0x1b],param_2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
  }
  if (*(char *)((int)param_1 + 0xd1) == '\0') {
    return;
  }
  iVar3 = 0;
  for (puVar4 = *(undefined4 **)(*param_1 + 0x558); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    uVar2 = (*(byte *)((int)puVar4 + 0xe) & 0xf) + (uint)*(byte *)((int)puVar4 + 0x43);
    iVar1 = FUN_02077584(*param_1,uVar2 & 0xff,
                         ((int)(*(byte *)((int)puVar4 + 0xe) & 0xf0) >> 4) +
                         (uint)*(byte *)(puVar4 + 0x11) & 0xff,uVar2,param_4);
    if (iVar1 != 0) {
      iVar1 = iVar3 + 0x1e;
      iVar3 = iVar3 + 1;
      FUN_02079db0(param_1[iVar1],param_2);
    }
  }
  return;
}

