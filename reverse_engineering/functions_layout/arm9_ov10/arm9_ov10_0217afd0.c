
int FUN_0217afd0(int param_1,undefined4 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_20;
  uint local_1c;
  
  iVar2 = FUN_02178448();
  if ((*(char *)(iVar2 + 0x17) != '\0') &&
     (iVar2 = FUN_02178448(), param_1 == *(int *)(iVar2 + 0x20))) {
    return 0;
  }
  iVar2 = FUN_02178448();
  *(undefined1 *)(iVar2 + 0x17) = 1;
  iVar2 = FUN_02178448();
  *(int *)(iVar2 + 0x20) = param_1;
  iVar2 = FUN_02178448();
  *(undefined4 *)(iVar2 + 0x1b4) = 0;
  iVar2 = FUN_02178448();
  *(undefined4 *)(iVar2 + 0x1c0) = 0;
  iVar2 = FUN_02178448();
  FUN_0218dbe8(*(undefined4 *)(iVar2 + 0x10));
  iVar2 = FUN_02178448();
  *(undefined4 *)(iVar2 + 0x1fc) = 0;
  iVar2 = FUN_02178448();
  iVar3 = FUN_02178448();
  *(int *)(iVar2 + (*(byte *)(iVar3 + 0x14) + 1) * 4 + 0xf4) = param_1;
  iVar2 = FUN_02178448();
  iVar3 = FUN_02178448();
  *(undefined4 *)(iVar2 + (*(byte *)(iVar3 + 0x14) + 1) * 4 + 0x24) = param_2;
  iVar2 = FUN_02178448();
  iVar3 = FUN_02178448();
  *(undefined2 *)(iVar2 + (*(byte *)(iVar3 + 0x14) + 1) * 2 + 0xa4) = param_3;
  iVar2 = FUN_02178448();
  *(undefined4 *)(iVar2 + 0x1b0) = param_2;
  iVar2 = FUN_02178448();
  *(undefined2 *)(iVar2 + 0x1ac) = param_3;
  iVar2 = FUN_02178448();
  iVar3 = FUN_02178448();
  uVar1 = FUN_0217967c();
  *(undefined1 *)(iVar2 + (uint)*(byte *)(iVar3 + 0x14) + 0x2c9) = uVar1;
  local_20 = param_1;
  iVar2 = FUN_02178448();
  iVar3 = FUN_02178448();
  local_1c = (uint)*(byte *)(iVar2 + (uint)*(byte *)(iVar3 + 0x14) + 0x2c9);
  iVar3 = 1;
  iVar2 = FUN_02178448();
  if (*(char *)(iVar2 + 0x14) != '\0') {
    iVar7 = 2;
    iVar2 = 4;
    do {
      iVar4 = FUN_02178448();
      iVar5 = FUN_02178448();
      iVar6 = FUN_02178448();
      iVar4 = FUN_0217c024(7,*(undefined4 *)(iVar4 + iVar2 + 0xf4),
                           *(undefined4 *)(iVar5 + iVar2 + 0x24),
                           *(undefined2 *)(iVar6 + iVar7 + 0xa4),&local_20,2);
      if (iVar4 != 0) {
        return iVar4;
      }
      iVar7 = iVar7 + 2;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      iVar4 = FUN_02178448();
    } while (iVar3 <= (int)(uint)*(byte *)(iVar4 + 0x14));
  }
  FUN_02179474(1);
  return 0;
}

