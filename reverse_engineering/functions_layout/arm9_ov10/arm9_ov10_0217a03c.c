
undefined4 FUN_0217a03c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_18;
  
  uVar6 = 0;
  local_18 = 0;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x17) != '\0') {
    iVar1 = FUN_02178448();
    if (*(int *)(iVar1 + 0x20) != 0) {
      iVar1 = FUN_02178448();
      iVar2 = FUN_02178448();
      if (*(int *)(iVar1 + 0x20) != *(int *)(iVar2 + 0x1f8)) {
        iVar1 = FUN_02178448();
        iVar2 = FUN_02178448();
        iVar3 = FUN_02178448();
        iVar4 = FUN_02178448();
        iVar5 = FUN_02178448();
        uVar6 = FUN_0217c024(0xc,*(undefined4 *)(iVar1 + 0x20),
                             *(undefined4 *)(iVar2 + (*(byte *)(iVar3 + 0xd) + 1) * 4 + 0x24),
                             *(undefined2 *)(iVar4 + (*(byte *)(iVar5 + 0xd) + 1) * 2 + 0xa4),
                             &local_18,1);
        iVar1 = FUN_02178448();
        *(undefined1 *)(iVar1 + 0x17) = 0;
        iVar1 = FUN_02178448();
        *(undefined4 *)(iVar1 + 0x20) = 0;
      }
    }
  }
  return uVar6;
}

