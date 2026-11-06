
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec040(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN_027ec2bc();
  if (iVar1 == 0x40) {
    uVar4 = (uint)*(ushort *)(_DAT_0380fff4 + 0x3d8);
    uVar2 = OS_DisableIrqMask(0x1000000);
    if (param_1 == 0) {
      uVar3 = FUN_027e93b0(uVar4 + 0x4804260);
      FUN_027e93d0(uVar4 + 0x4804260,uVar3 & 0xfe);
    }
    else {
      uVar3 = FUN_027ec1e4(param_1);
      iVar1 = uVar4 + 0x4804261 + (uVar3 >> 3);
      uVar4 = FUN_027e93b0(iVar1);
      FUN_027e93d0(iVar1,~(1 << (uVar3 & 7)) & uVar4 & 0xff);
    }
    OS_EnableIrqMask(uVar2);
  }
  return;
}

