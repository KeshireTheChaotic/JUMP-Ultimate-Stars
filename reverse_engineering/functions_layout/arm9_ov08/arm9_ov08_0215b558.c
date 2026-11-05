
void FUN_0215b558(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)*(byte *)(DAT_0216e778 + 0x29);
  uVar3 = uVar2 & 0xf;
  iVar1 = (int)uVar2 >> 4;
  if (0x1f < uVar2) {
    uVar3 = 0xf;
    iVar1 = 1;
  }
  **(uint **)(DAT_0216e778 + 4) =
       (uint)(byte)(&DAT_0216aa0c)[uVar3] << 0x10 |
       **(uint **)(DAT_0216e778 + 4) & 0xfe00ff00 | (uint)(byte)(&DAT_0216a9f4)[iVar1];
  return;
}

