
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f258c(int param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  short *psVar11;
  int *piVar12;
  int local_34;
  
  iVar3 = _DAT_0380fff4;
  psVar11 = (short *)(param_1 * 0x14 + _DAT_0380fff4 + 0x42c);
  piVar12 = (int *)(param_1 * 0xc + _DAT_0380fff4 + 0x194);
  if ((short)piVar12[2] != 0) {
    uVar4 = OS_DisableIrqMask(0x1000000);
    if (*psVar11 == 0) {
      iVar5 = *piVar12;
      while (local_34 = iVar5, local_34 != -1) {
        iVar5 = FUN_037f8b44();
        iVar10 = local_34 + 0x10;
        uVar1 = *(undefined2 *)(local_34 + 0x12);
        uVar9 = *(int *)(iVar3 + 0x3ec) - (uint)*(ushort *)(local_34 + 0x14) & 0xffff;
        if (((*(ushort *)(iVar3 + 0x3d0) < uVar9) &&
            ((*(ushort *)(local_34 + 0x24) & 0xf) >> 2 != 0)) ||
           ((uint)*(ushort *)(iVar3 + 0x3d0) * 8 < uVar9)) {
          *(short *)(iVar3 + 0x4da) = *(short *)(iVar3 + 0x4da) + 1;
          *(undefined2 *)(local_34 + 0x18) = 2;
          psVar11[2] = psVar11[2] + 1;
          (**(code **)(psVar11 + 8))(iVar10,0);
        }
        else {
          if ((param_1 != 0) && ((param_1 != 1 || (iVar6 = FUN_027ec2bc(uVar1), iVar6 != 0x40))))
          goto LAB_027f26fc;
          iVar6 = FUN_027ec29c(uVar1);
          if (iVar6 != 0) {
            iVar6 = FUN_027ec2bc(uVar1);
            if (iVar6 == 0x40) {
LAB_027f26fc:
              *psVar11 = 1;
              psVar11[1] = psVar11[1] + 1;
              *(int *)(psVar11 + 6) = iVar10;
              uVar9 = *(uint *)(psVar11 + 4);
              if (*(short *)(iVar3 + 0x354) == 0) {
                FUN_027ea4f0(2);
              }
              FUN_027f2420(uVar9,local_34);
              if ((*(short *)(iVar3 + 0x350) == 1) && (uVar7 = FUN_027ec1c8(uVar1), 1 < uVar7)) {
                *(ushort *)(uVar9 + 0xc) = *(ushort *)(uVar9 + 0xc) | 0x2000;
              }
              puVar8 = (ushort *)(&DAT_048080a0 + param_1 * 4);
              uVar2 = (ushort)((uVar9 & 0x3fff) >> 1);
              if ((*(ushort *)(local_34 + 0x24) & 0xc) == 4) {
                *puVar8 = uVar2 | 0xa000;
              }
              else if ((*(ushort *)(local_34 + 0x24) & 0xfc) == 0x50) {
                *puVar8 = uVar2 | 0x9000;
              }
              else {
                *puVar8 = uVar2 | 0x8000;
              }
              OS_EnableIrqMask(uVar4);
              return;
            }
            *(undefined2 *)(local_34 + 0x18) = 2;
            FUN_027efb30(piVar12,local_34);
            FUN_027ec62c(iVar10);
          }
        }
      }
      OS_EnableIrqMask(uVar4);
    }
    else {
      OS_EnableIrqMask();
    }
  }
  return;
}

