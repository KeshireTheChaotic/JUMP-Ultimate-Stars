
int FUN_02033cb4(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = iRam02033d20;
  uVar3 = 0;
  for (uVar2 = 0; uVar2 < 0x100; uVar2 = uVar2 + 1) {
    if (*(char *)(param_1 + uVar2) == '/') {
      uVar3 = uVar2 + 1;
    }
    if (*(char *)(param_1 + uVar2) == '\0') break;
  }
  for (uVar4 = uVar3;
      (uVar4 < 0x100 - uVar2 &&
      (*(undefined1 *)(iVar1 + (uVar4 - uVar3)) = *(undefined1 *)(param_1 + uVar4),
      *(char *)(param_1 + uVar4) != '\0')); uVar4 = uVar4 + 1) {
  }
  return iRam02033d20;
}

