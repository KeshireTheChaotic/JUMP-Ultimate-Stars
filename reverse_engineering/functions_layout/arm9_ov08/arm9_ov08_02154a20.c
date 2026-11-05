
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02154a20(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = _DAT_04000208;
  iVar3 = 0;
  _DAT_04000208 = 0;
  iVar2 = FUN_0205889c();
  if (iVar2 != 0x8000) {
    iVar3 = FUN_020587f4();
  }
  _DAT_04000208 = uVar1;
  FUN_02166014(0,(&DAT_0216a4ac)[iVar3 + (char)DAT_0216e6d8[2] * 4],*DAT_0216e6d8);
  *(uint *)*DAT_0216e6d8 =
       (DAT_0216a4a8 & 0x1ff) << 0x10 | *(uint *)*DAT_0216e6d8 & 0xfe00ff00 | DAT_0216a4aa & 0xff;
  *(ushort *)(*DAT_0216e6d8 + 4) = *(ushort *)(*DAT_0216e6d8 + 4) & 0xf3ff | 0x800;
  return;
}

