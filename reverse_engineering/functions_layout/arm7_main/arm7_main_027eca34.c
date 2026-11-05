
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eca34(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = _DAT_0380fff4;
  iVar2 = FUN_037f8910(_DAT_0380fff4 + 0x188,*(ushort *)(_DAT_0380fff4 + 0x3e4) + 0x3e);
  if (iVar2 == 0) {
    FUN_027e904c(1);
    uVar3 = 0;
  }
  else {
    *(undefined2 *)(iVar2 + 0xc) = 0x8d;
    sVar1 = FUN_038078c0(*(ushort *)(iVar4 + 0x3e4) + 1,2);
    *(short *)(iVar2 + 0xe) = sVar1 + 0x16;
    FUN_027e93d0(iVar2 + 0x1f,*(ushort *)(param_1 + 0x12) & 0xff);
    FUN_027e93d0(iVar2 + 0x1e,*(ushort *)(param_1 + 0xe) & 0xff);
    FUN_027ea0c8(iVar2 + 0x2e,param_1 + 0x1e);
    *(undefined2 *)(iVar2 + 0x16) = *(undefined2 *)(iVar4 + 0x3e4);
    if (*(ushort *)(iVar2 + 0x16) != 0) {
      if ((*(ushort *)(iVar4 + 0x3e6) & 1) == 0) {
        MIi_CpuCopy16(*(undefined4 *)(iVar4 + 0x3e0),iVar2 + 0x3c,*(ushort *)(iVar2 + 0x16) + 1);
      }
      else {
        iVar4 = *(int *)(iVar4 + 0x3e0);
        iVar5 = iVar2 + 0x3c;
        for (uVar6 = 0; iVar4 = iVar4 + 1, uVar6 < *(ushort *)(iVar2 + 0x16); uVar6 = uVar6 + 1) {
          uVar3 = FUN_027e93b0(iVar4);
          FUN_027e93d0(iVar5,uVar3);
          iVar5 = iVar5 + 1;
        }
      }
    }
    FUN_037f8e64(_DAT_0380fff4 + 0x188,iVar2);
    uVar3 = 1;
  }
  return uVar3;
}

