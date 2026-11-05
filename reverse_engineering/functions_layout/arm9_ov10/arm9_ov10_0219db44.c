
bool FUN_0219db44(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_021766fc();
  uVar4 = *(uint *)(DAT_0214ccf8 + 0x1c38);
  uVar2 = FUN_0217668c();
  uVar3 = FUN_0217668c();
  return ((uVar4 | 1 << (uVar1 & 0xff)) & uVar2) == uVar3;
}

