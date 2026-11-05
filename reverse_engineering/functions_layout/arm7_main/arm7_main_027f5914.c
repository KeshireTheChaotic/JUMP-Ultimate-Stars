
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027f5914(uint *param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = (uint)*(ushort *)(*(int *)(_DAT_0380fff4 + 0x318) + 2);
  if ((uVar5 < 0xa4) || (0x1d6 < uVar5)) {
    uVar3 = 2;
  }
  else {
    iVar6 = *(int *)(_DAT_0380fff4 + 0x318) + 2;
    uVar4 = 0;
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      uVar2 = FUN_027e93b0(iVar6);
      iVar6 = iVar6 + 1;
      uVar4 = FUN_027e92bc(uVar2,uVar4 & 0xffff);
    }
    uVar1 = **(ushort **)(_DAT_0380fff4 + 0x318);
    if (param_1 != (uint *)0x0) {
      *param_1 = (uint)uVar1 | uVar4 << 0x10;
    }
    if (uVar4 == uVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

