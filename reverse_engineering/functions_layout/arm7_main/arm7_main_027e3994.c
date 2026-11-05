
undefined4 FUN_027e3994(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  if (uVar1 == 0) {
    return 0;
  }
  if (0x20 < uVar1) {
    return 0;
  }
  iVar2 = 0;
  while( true ) {
    if ((int)uVar1 <= iVar2) {
      return 0;
    }
    if (*(char *)(param_1 + iVar2 + 0xc) != '\0') break;
    iVar2 = iVar2 + 1;
  }
  return 1;
}

