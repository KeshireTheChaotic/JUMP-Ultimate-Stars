
void FUN_0215bd58(void)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(DAT_0216e77c + 0x14);
  if (3 < uVar1) {
    uVar1 = 3;
  }
  **(uint **)(DAT_0216e77c + 4) =
       (uint)(byte)(&DAT_0216aa36)[uVar1 * 3] << 0x10 |
       **(uint **)(DAT_0216e77c + 4) & 0xfe00ff00 | 0x28;
  return;
}

