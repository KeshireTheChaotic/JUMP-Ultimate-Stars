
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f55dc(undefined2 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  
  psVar9 = (short *)(_DAT_0380fff4 + 0x23c);
  uVar2 = FUN_027e93b0(param_3 + 1);
  if (uVar2 < 0x21) {
    uVar6 = 4;
    uVar2 = 4;
    uVar4 = 0x400;
    for (uVar8 = 0; uVar8 < 4; uVar8 = uVar8 + 1) {
      if (*psVar9 == 0) {
        uVar6 = uVar8;
      }
      else {
        iVar5 = FUN_027e9cfc(psVar9 + 3,param_2 + 0x24);
        if (iVar5 != 0) goto LAB_027f5688;
        if ((ushort)psVar9[0x18] < uVar4) {
          uVar2 = uVar8;
          uVar4 = psVar9[0x18];
        }
      }
      psVar9 = psVar9 + 0x19;
    }
    uVar8 = uVar6;
    if ((uVar6 != 4) || (uVar8 = uVar2, uVar2 != 4)) {
LAB_027f5688:
      iVar5 = _DAT_0380fff4 + 0x23c;
      iVar7 = iVar5 + uVar8 * 0x32;
      MIi_CpuClear16(0,iVar7);
      *(undefined2 *)(iVar7 + 0x30) = 0x400;
      *(ushort *)(iVar5 + uVar8 * 0x32) = *(ushort *)(param_2 + 0x12) & 0xff;
      *(undefined2 *)(iVar7 + 2) = param_1;
      FUN_027ea0c8(iVar7 + 6,param_2 + 0x24);
      uVar1 = FUN_027e93b0(param_3 + 1);
      *(undefined2 *)(iVar7 + 0xc) = uVar1;
      for (uVar2 = 0; uVar2 < *(ushort *)(iVar7 + 0xc); uVar2 = uVar2 + 1) {
        uVar3 = FUN_027e93b0(param_3 + 2 + uVar2);
        FUN_027e93d0(iVar7 + 0xe + uVar2,uVar3);
      }
      *(undefined2 *)(iVar7 + 0x2e) = *(undefined2 *)(param_2 + 0x34);
      *(undefined2 *)(iVar7 + 4) = *(undefined2 *)(param_2 + 0x36);
    }
  }
  return;
}

