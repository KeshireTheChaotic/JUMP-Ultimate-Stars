
void FUN_02180d9c(int param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int unaff_r6;
  int iVar9;
  int iVar10;
  int unaff_r7;
  int iVar11;
  int unaff_r8;
  int iVar12;
  int iVar13;
  int local_38;
  int local_34;
  int local_30;
  short local_2c [4];
  
  uVar4 = *(uint *)(*(int *)(param_1 + 0x24) + 0x28);
  if (((uVar4 & 0x1000) == 0) && ((uVar4 & 0x2000) == 0)) {
    *(undefined1 *)(param_1 + 0x105) = 1;
    FUN_02180be4();
  }
  else {
    local_30 = 0;
    local_34 = 0;
    iVar8 = 0;
    local_38 = 0;
    iVar13 = 0;
    for (puVar7 = *(undefined4 **)(*(int *)(param_1 + 0x24) + 0x1c); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)*puVar7) {
      iVar12 = puVar7[2];
      if (((*(uint *)(iVar12 + 0x68) & 0x1000) != 0) || ((*(uint *)(iVar12 + 0x68) & 0x2000) != 0))
      {
        iVar9 = *(int *)(iVar12 + 0xc);
        iVar2 = FUN_02174f4c(iVar12);
        iVar2 = (iVar2 + -1) * 0x1000000 >> 0x18;
        if (iVar2 < 0) {
          iVar9 = 0;
        }
        else {
          iVar2 = *(int *)(iVar9 + iVar2 * 4 + 8);
          if (iVar2 < 0) {
            iVar9 = 0;
          }
          else {
            iVar9 = iVar9 + iVar2;
          }
        }
        iVar11 = 0;
        iVar10 = 0;
        iVar2 = 0;
        while (iVar2 < (int)(uint)*(byte *)(iVar9 + 0xc)) {
          iVar5 = *(int *)(iVar9 + iVar2 * 0x20 + 0xa8);
          if (iVar5 < 0) {
            iVar10 = iVar10 + iVar5;
          }
          iVar5 = *(int *)(iVar9 + iVar2 * 0x20 + 0xac);
          iVar2 = iVar2 + 1;
          if (iVar5 < 0) {
            iVar11 = iVar11 + iVar5;
          }
        }
        unaff_r6 = -iVar10;
        unaff_r7 = -iVar11;
        if (-local_38 != iVar10 && local_38 <= unaff_r6) {
          local_38 = unaff_r6;
          local_30 = iVar12;
        }
        if (-iVar13 != iVar11 && iVar13 <= unaff_r7) {
          iVar13 = unaff_r7;
          local_34 = iVar12;
        }
      }
      iVar2 = FUN_02174f4c(iVar12);
      if (((iVar2 == 1) && ((*(uint *)(iVar12 + 0x68) & 0x40000) != 0)) ||
         ((iVar2 = FUN_02174f4c(iVar12), iVar2 == 2 && ((*(uint *)(iVar12 + 0x68) & 0x80000) != 0)))
         ) {
        if (iVar8 == 0) {
          iVar8 = iVar12;
        }
        else if (unaff_r7 != 0 || unaff_r6 != 0) {
          iVar8 = iVar12;
        }
      }
    }
    sVar3 = 0;
    local_2c[3] = 0;
    piVar6 = *(int **)(param_1 + 0x24);
    if (*piVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(ushort *)(*piVar6 + 0xbc);
    }
    local_2c[0] = local_2c[0] + (short)((uVar4 << 7) >> 8);
    uVar4 = (uint)*(byte *)((int)piVar6 + 0x37);
    if (0xf < uVar4) {
      uVar4 = 0x10;
    }
    local_2c[1] = local_2c[1] + (short)((int)((uVar4 - *(byte *)((int)piVar6 + 0x36)) * 0x60) >> 4);
    iVar13 = 0;
    local_2c[2] = local_2c[2] +
                  *(short *)(&DAT_0218161c + (uint)*(ushort *)(*(int *)(param_1 + 0x20) + 0xa0) * 2)
    ;
    do {
      if (sVar3 < local_2c[iVar13]) {
        unaff_r8 = iVar13;
        sVar3 = local_2c[iVar13];
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
    if (unaff_r8 != 0) {
      if (unaff_r8 == 1) {
        local_30 = local_34;
      }
      else if (unaff_r8 == 2) {
        local_30 = iVar8;
      }
    }
    if (local_30 == 0) {
      *(undefined1 *)(param_1 + 0x105) = 1;
      FUN_02180be4(param_1);
    }
    else {
      bVar1 = *(byte *)(local_30 + 0xc3);
      iVar8 = *(int *)(param_1 + 0x18);
      *(ushort *)(iVar8 + 0xc) = (ushort)*(byte *)(local_30 + 0xc2);
      *(ushort *)(iVar8 + 0xe) = (ushort)bVar1;
      *(undefined1 *)(iVar8 + 0x10) = 1;
      *(undefined1 *)(iVar8 + 0x11) = 4;
      *(undefined1 *)(param_1 + 0xa8) = 4;
      *(undefined1 *)(param_1 + 0xa9) = 0;
    }
  }
  return;
}

