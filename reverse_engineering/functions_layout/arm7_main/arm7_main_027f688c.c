
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f688c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort local_10;
  ushort local_e;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffde8"] */
  FUN_027f7554(&local_10);
  FUN_027f74fc(&local_e);
  if ((((local_10 & 0xff) >> 7 != 0) || ((local_10 & 0x7f) >> 6 != 0)) ||
     ((local_e & 0xff) >> 7 != 0)) {
    local_10 = local_10 & 0xfffe | 1;
    FUN_027f7528(&local_10);
  }
  if (((local_10 & 0x1f) >> 4 != 0) || ((local_10 & 0x3f) >> 5 != 0)) {
    local_e = local_e & 0xffb0;
    FUN_027f74d0(&local_e);
  }
  FUN_027f7810(&DAT_027ffde8);
  iVar1 = FUN_027f6798(DAT_027ffde8);
  uVar2 = FUN_027f6798((_DAT_027ffde8 & 0x1fff) >> 8);
  uVar3 = FUN_027f6798((_DAT_027ffde8 & 0x3fffff) >> 0x10);
  uVar4 = FUN_027f6810(iVar1 + 2000,uVar2,uVar3);
  if ((_DAT_027ffde8 & 0x7ffffff) >> 0x18 != uVar4) {
    _DAT_027ffde8 = _DAT_027ffde8 & 0xf8ffffff | (uVar4 & 7) << 0x18;
    FUN_027f77e4(&DAT_027ffde8);
  }
  FUN_027f783c(1);
  return;
}

