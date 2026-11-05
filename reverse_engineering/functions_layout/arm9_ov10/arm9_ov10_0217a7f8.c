
int FUN_0217a7f8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 1;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0xd) != '\0') {
    iVar8 = 2;
    iVar1 = 4;
    do {
      iVar2 = FUN_02178448();
      iVar3 = FUN_02178448();
      iVar4 = FUN_02178448();
      iVar5 = FUN_02178448();
      iVar6 = FUN_02178448();
      iVar2 = FUN_0217c024(10,*(undefined4 *)(iVar2 + iVar1 + 0xf4),
                           *(undefined4 *)(iVar3 + iVar1 + 0x24),
                           *(undefined2 *)(iVar4 + iVar8 + 0xa4),iVar5 + 0x340,
                           *(int *)(iVar6 + 0x340) + 1);
      if (iVar2 != 0) {
        return iVar2;
      }
      iVar8 = iVar8 + 2;
      iVar1 = iVar1 + 4;
      iVar7 = iVar7 + 1;
      iVar2 = FUN_02178448();
    } while (iVar7 <= (int)(uint)*(byte *)(iVar2 + 0xd));
  }
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x17) = 0;
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x20) = 0;
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a0) = 1;
  iVar1 = FUN_02178448();
  FUN_0218a888(**(undefined4 **)(iVar1 + 4));
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x1a0) = 0;
  return 0;
}

