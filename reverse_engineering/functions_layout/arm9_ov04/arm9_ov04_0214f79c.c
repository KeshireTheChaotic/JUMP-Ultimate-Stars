
undefined1 FUN_0214f79c(char param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(DAT_02161de8 + 0x14);
  iVar1 = DAT_02161de8 + uVar2;
  *(char *)(DAT_02161de8 + 0x16 + uVar2) = *(char *)(DAT_02161de8 + 0x16 + uVar2) + param_1;
  return *(undefined1 *)(iVar1 + 0x16);
}

