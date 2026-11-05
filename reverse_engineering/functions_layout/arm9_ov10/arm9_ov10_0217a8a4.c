
undefined4 FUN_0217a8a4(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) == '\x03') {
    iVar1 = FUN_02178448();
    if (*(char *)(iVar1 + 0xd) != '\0') {
      FUN_02179e44();
    }
    FUN_0217d118(6,0xfffec5d2);
    return 0;
  }
  iVar1 = FUN_02178448();
  iVar2 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x14) = *(undefined1 *)(iVar2 + 0xd);
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x200) = 0;
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0x194) != 0) {
    iVar1 = FUN_02178448();
    FUN_0218c8bc(*(undefined4 *)(iVar1 + 0x194));
    iVar1 = FUN_02178448();
    *(undefined4 *)(iVar1 + 0x194) = 0;
  }
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0xd) == '\0') {
    FUN_02178434(4);
    uVar3 = FUN_0217ab10(0);
  }
  else {
    FUN_02179f60();
  }
  return uVar3;
}

