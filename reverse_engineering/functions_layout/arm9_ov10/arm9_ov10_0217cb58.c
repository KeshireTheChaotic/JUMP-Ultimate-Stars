
int FUN_0217cb58(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = FUN_02178448();
  if (iVar1 == 0) {
    return 0;
  }
  FUN_020517fc(&DAT_021a75b8,0,0x20);
  iVar1 = 0;
  FUN_02178448();
  puVar4 = &DAT_021a75b8;
  do {
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    if ((*(uint *)(iVar2 + 0x2e8) & 1 << (uint)*(byte *)(iVar3 + iVar1 + 0x2c8)) == 0) break;
    iVar2 = FUN_02178448();
    *puVar4 = *(undefined1 *)(iVar2 + iVar1 + 0x2c8);
    puVar4 = puVar4 + 1;
    iVar1 = iVar1 + 1;
    iVar2 = FUN_02178448();
  } while (iVar1 <= (int)(uint)*(byte *)(iVar2 + 0xe));
  *param_1 = &DAT_021a75b8;
  iVar1 = FUN_02178448();
  return *(byte *)(iVar1 + 0xe) + 1;
}

