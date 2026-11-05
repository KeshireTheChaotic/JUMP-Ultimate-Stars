
uint FUN_021794e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_1 != 0) {
    iVar1 = FUN_02178448();
    return *(uint *)(iVar1 + 0x2e8) & 0xfffffffe;
  }
  iVar2 = 1;
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0xd) != '\0') {
    do {
      iVar1 = FUN_02178448();
      uVar3 = uVar3 | 1 << (uint)*(byte *)(iVar1 + iVar2 + 0x2c8);
      iVar2 = iVar2 + 1;
      iVar1 = FUN_02178448();
    } while (iVar2 <= (int)(uint)*(byte *)(iVar1 + 0xd));
  }
  return uVar3;
}

