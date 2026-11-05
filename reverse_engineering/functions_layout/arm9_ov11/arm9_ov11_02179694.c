
void FUN_02179694(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  do {
    iVar3 = iVar5 + iVar4 * 2;
    sVar1 = *(short *)(iVar3 + 0x3c);
    iVar4 = iVar4 + 1;
    if (sVar1 != 0) {
      *(short *)(iVar3 + 0x3c) = sVar1 + -1;
    }
  } while (iVar4 < 0xd);
  uVar2 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  *(undefined4 *)(iVar5 + 0x38) = uVar2;
  return;
}

