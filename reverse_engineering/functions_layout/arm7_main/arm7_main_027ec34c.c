
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_027ec34c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  iVar2 = _DAT_0380fff4;
  uVar1 = FUN_037fbc10(0x1000000);
  uVar4 = 1;
  uVar3 = 2;
  while( true ) {
    if (0xf < uVar4) {
      FUN_037fbc4c(uVar1);
      return 0;
    }
    if ((*(ushort *)(iVar2 + 0x53a) & uVar3) == 0) break;
    uVar4 = uVar4 + 1;
    uVar3 = uVar3 << 1;
  }
  *(ushort *)(iVar2 + 0x53a) = *(ushort *)(iVar2 + 0x53a) | uVar3;
  *(short *)(iVar2 + 0x538) = *(short *)(iVar2 + 0x538) + 1;
  if (*(short *)(iVar2 + 0x538) == 1) {
    FUN_027ea2e8();
  }
  iVar2 = FUN_027ec1ac(param_1);
  *(short *)(iVar2 + 2) = (short)uVar4;
  FUN_037fbc4c(uVar1);
  return uVar4;
}

