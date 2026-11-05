
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e97c0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_0380fff4;
  iVar2 = FUN_037fdc58();
  if (iVar2 == 0) {
    *(ushort *)(iVar1 + 0x33e) = *(ushort *)(iVar1 + 0x33e) | 0x40;
  }
  else {
    FUN_037fdc48(iVar1 + 0x608);
    FUN_037fdc48(iVar1 + 0x634);
    FUN_037fdc48(iVar1 + 0x660);
  }
  return;
}

