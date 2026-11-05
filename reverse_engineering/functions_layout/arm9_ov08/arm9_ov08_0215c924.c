
undefined4 FUN_0215c924(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_021622d4();
  if (*(char *)(iVar1 + 0x40) == '\0') {
    return 0;
  }
  if (((*(char *)(iVar1 + 0xf6) == '\0') && (iVar2 = FUN_0206a23c(iVar1 + 200), iVar2 == 0)) &&
     (iVar2 = FUN_0206a23c(iVar1 + 0xcc), iVar2 == 0)) {
    return 0;
  }
  if (*(char *)(iVar1 + 0xf5) == '\0') {
    iVar2 = FUN_0206a23c(iVar1 + 0xc0);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = FUN_0206a23c(iVar1 + 0xc4);
    if (iVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_0206a25c(iVar1 + 0xc0,iVar1 + 0xf0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

