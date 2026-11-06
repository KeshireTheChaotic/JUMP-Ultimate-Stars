
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec0ec(uint param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_027ec2bc();
  if ((iVar2 == 0x40) && (((uint)*(ushort *)(_DAT_0380fff4 + 0x534) & 1 << (param_1 & 0xff)) == 0))
  {
    uVar5 = (uint)*(ushort *)(_DAT_0380fff4 + 0x3d8);
    uVar3 = OS_DisableIrqMask(0x1000000);
    if (param_1 == 0) {
      bVar1 = FUN_027e93b0(uVar5 + 0x4804260);
      FUN_027e93d0(uVar5 + 0x4804260,bVar1 | 1);
    }
    else {
      uVar4 = FUN_027ec1e4(param_1);
      iVar2 = uVar5 + 0x4804261 + (uVar4 >> 3);
      uVar5 = FUN_027e93b0(iVar2);
      FUN_027e93d0(iVar2,(uVar5 | 1 << (uVar4 & 7)) & 0xff);
    }
    OS_EnableIrqMask(uVar3);
  }
  return;
}

