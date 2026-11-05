
void FUN_02071bb8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  do {
    iVar1 = param_1 * 0xc + 0x20b02b8U + iVar2 * 4;
    uVar3 = *(uint *)(iVar1 + 0x70f0);
    if ((uVar3 & 0x40000000) != 0) {
      *(uint *)(iVar1 + 0x70f0) = uVar3 & 0x7fffffff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

