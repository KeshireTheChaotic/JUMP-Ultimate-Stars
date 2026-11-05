
int FUN_02045bd0(int param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  short sVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  short *psVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  
  uVar6 = FUN_02045bbc();
  uVar7 = (**(code **)(*param_2 + 4))();
  iVar8 = FUN_0200d338(uVar7,*(undefined4 *)(param_1 + 0x18));
  (**(code **)*param_2)(param_2,0xffffffff);
  uVar14 = iVar8 + uVar6;
  *(int *)(param_2[2] + 4) = param_2[1];
  *(int *)(param_2[1] + 8) = param_2[2];
  bVar4 = true;
  psVar11 = (short *)0x0;
  if (uVar14 < *(uint *)(param_1 + 8)) {
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x10) + uVar14 * 4 + 2);
    if ((short)uVar1 < 0) {
      uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x10) + uVar14 * 4);
      bVar4 = false;
      *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - (uVar1 & 0x7fff);
      iVar13 = *(int *)(param_1 + 0x10);
      psVar12 = *(short **)(param_1 + 0x14);
      psVar9 = (short *)(iVar13 + uVar14 * 4);
      bVar16 = psVar12 == psVar9;
      if (bVar16) {
        psVar9 = (short *)(iVar13 + iVar8 * 4);
      }
      uVar6 = uVar6 + (uVar1 & 0x7fff);
      if (bVar16) {
        *(short **)(param_1 + 0x14) = psVar9;
      }
      else {
        sVar3 = *psVar12;
        psVar11 = psVar12;
        while (uVar5 = (uint)sVar3, uVar5 != uVar14) {
          psVar11 = (short *)(iVar13 + uVar5 * 4);
          sVar3 = *(short *)(iVar13 + uVar5 * 4);
        }
        *psVar11 = (short)iVar8;
      }
      *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar8 * 4) = uVar2;
    }
  }
  if (iVar8 == 0) goto LAB_02045dc8;
  iVar13 = *(int *)(param_1 + 0x10);
  iVar15 = iVar8 + -1;
  if (-1 < *(short *)(iVar13 + iVar15 * 4 + 2)) goto LAB_02045dc8;
  iVar10 = (int)*(short *)(iVar13 + iVar15 * 4);
  if (iVar10 < 0) {
    iVar15 = iVar8 + iVar10 + -1;
  }
  uVar14 = (uint)*(ushort *)(iVar13 + iVar15 * 4 + 2);
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - (uVar14 & 0x7fff);
  uVar6 = uVar6 + (uVar14 & 0x7fff);
  if (!bVar4) {
    iVar13 = *(int *)(param_1 + 0x10);
    psVar9 = *(short **)(param_1 + 0x14);
    if (psVar9 == (short *)(iVar13 + iVar8 * 4)) {
      sVar3 = *psVar9;
      while (iVar10 = (int)sVar3, iVar10 != iVar15) {
        psVar9 = (short *)(iVar13 + iVar10 * 4);
        sVar3 = *(short *)(iVar13 + iVar10 * 4);
      }
      *psVar9 = *(short *)(iVar13 + iVar15 * 4);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + iVar15 * 4;
    }
    if (psVar11 != (short *)0x0) {
      if (iVar8 != *(short *)(*(int *)(param_1 + 0x10) + iVar15 * 4)) {
        *psVar11 = *(short *)(*(int *)(param_1 + 0x10) + iVar8 * 4);
        *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar8 * 4) =
             *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar15 * 4);
        goto LAB_02045dc4;
      }
    }
    *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar15 * 4) =
         *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar8 * 4);
  }
LAB_02045dc4:
  bVar4 = false;
  iVar8 = iVar15;
LAB_02045dc8:
  iVar13 = *(int *)(param_1 + 0x10) + iVar8 * 4;
  *(ushort *)(iVar13 + 2) = *(ushort *)(iVar13 + 2) | 0x8000;
  if (1 < uVar6) {
    iVar13 = iVar8 + uVar6 + -1;
    iVar15 = *(int *)(param_1 + 0x10) + iVar13 * 4;
    *(ushort *)(iVar15 + 2) = *(ushort *)(iVar15 + 2) | 0x8000;
    *(ushort *)(*(int *)(param_1 + 0x10) + iVar13 * 4) = 1 - (ushort)uVar6;
  }
  iVar13 = *(int *)(param_1 + 0x10) + iVar8 * 4;
  *(ushort *)(iVar13 + 2) = *(ushort *)(iVar13 + 2) & 0x8000 | (ushort)uVar6 & 0x7fff;
  if (bVar4) {
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x10) + iVar8 * 4) = 0x7fff;
    }
    else {
      *(short *)(*(int *)(param_1 + 0x10) + iVar8 * 4) =
           (short)((uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10)) >> 2);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + iVar8 * 4;
  }
  *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + uVar6;
  return *(int *)(param_1 + 0x10) + iVar8 * 4;
}

