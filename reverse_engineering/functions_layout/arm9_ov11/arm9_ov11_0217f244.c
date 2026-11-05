
void FUN_0217f244(int param_1)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_2c;
  
  iVar11 = *(int *)(param_1 + 4);
  while (iVar11 != 0) {
    FUN_02037c24(param_1 + 4,iVar11);
    FUN_020517fc(iVar11,0,0x38);
    FUN_02037b98(param_1 + 0xc,iVar11);
    iVar11 = *(int *)(param_1 + 4);
  }
  uVar9 = 0;
  do {
    if ((char)(&DAT_021814d8)[uVar9] < '\0') {
      for (puVar10 = *(undefined4 **)(param_1 + 4); puVar10 != (undefined4 *)0x0;
          puVar10 = (undefined4 *)*puVar10) {
        piVar4 = (int *)FUN_0217f5a8(puVar10[2]);
        for (puVar13 = *(undefined4 **)(param_1 + 4); puVar13 != (undefined4 *)0x0;
            puVar13 = (undefined4 *)*puVar13) {
          if (puVar10 != puVar13) {
            piVar5 = (int *)FUN_0217f5a8(puVar13[2]);
            iVar11 = piVar5[1] - piVar4[1];
            if (iVar11 < 0) {
              iVar11 = -iVar11;
            }
            iVar6 = *piVar5 - *piVar4;
            if (iVar6 < 0) {
              iVar6 = -iVar6;
            }
            if (iVar6 + iVar11 < 0x8000) {
              iVar12 = 0;
              do {
                iVar7 = iVar12 + 1;
                iVar14 = (0x8000 - (iVar6 + iVar11)) *
                         (int)*(short *)((int)puVar10 + iVar12 * 2 + 0xc);
                *(short *)((int)puVar13 + iVar12 * 2 + 0xc) =
                     *(short *)((int)puVar13 + iVar12 * 2 + 0xc) +
                     (short)((int)(iVar14 + ((uint)(iVar14 >> 0xe) >> 0x11)) >> 0xf);
                iVar12 = iVar7;
              } while (iVar7 < 4);
            }
          }
        }
      }
      return;
    }
    puVar10 = (undefined4 *)FUN_0208369c();
    local_2c = -1;
    for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)*puVar10) {
      iVar11 = puVar10[2];
      if ((iVar11 != 0) && ((*(uint *)(iVar11 + 0x2c) & 9) == 0)) {
        iVar6 = *(int *)(param_1 + 0xc);
        FUN_02037c24(param_1 + 0xc,iVar6);
        FUN_02037b98(param_1 + 4,iVar6);
        *(int *)(iVar6 + 8) = iVar11;
        *(undefined1 *)(iVar6 + 0x14) = (&DAT_021814d8)[uVar9];
        *(undefined1 *)(iVar6 + 0x15) = *(undefined1 *)(*(int *)(iVar11 + 0x30) + 0x22);
        sVar2 = FUN_0217f8a4(*(undefined1 *)(iVar6 + 0x14));
        if (*(char *)(iVar6 + 0x14) == '\x02') {
          iVar11 = 8;
        }
        else {
          for (iVar11 = 0; iVar11 < 8; iVar11 = (iVar11 + 1) * 0x1000000 >> 0x18) {
            for (iVar12 = 0; (&DAT_021814f0)[iVar12 + iVar11 * 10] != -1;
                iVar12 = (iVar12 + 1) * 0x1000000 >> 0x18) {
              if (*(char *)(iVar6 + 0x15) == (&DAT_021814f0)[iVar12 + iVar11 * 10])
              goto LAB_0217f380;
            }
          }
          iVar11 = local_2c;
        }
LAB_0217f380:
        if (*(char *)(iVar6 + 0x14) == '\x03') {
          sVar1 = *(short *)(*(int *)(*(int *)(iVar6 + 8) + 0x30) + 0x20);
          if (sVar1 < 0x3c) {
            sVar2 = sVar2 + -0x3c;
          }
          else if (sVar1 < 0xb4) {
            sVar2 = sVar2 + -0x14;
          }
        }
        piVar4 = (int *)FUN_0217f5a8(*(undefined4 *)(iVar6 + 8));
        iVar12 = param_1 + 0xa8;
        iVar7 = 0;
        do {
          *(short *)(iVar6 + iVar7 * 2 + 0xc) = sVar2;
          if (*(int *)(iVar12 + 0x20) != 0) {
            piVar5 = (int *)FUN_0217f5a8(*(undefined4 *)(*(int *)(iVar12 + 0x20) + 0x1a8));
            iVar8 = iVar6 + iVar7 * 8;
            *(int *)(iVar8 + 0x18) = *piVar4 - *piVar5;
            iVar14 = piVar4[1] - piVar5[1];
            *(int *)(iVar8 + 0x1c) = iVar14;
            iVar8 = *(int *)(iVar6 + iVar7 * 8 + 0x18);
            if (iVar14 < 0) {
              iVar14 = -iVar14;
            }
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            iVar8 = iVar8 + iVar14;
            iVar14 = iVar6 + iVar7 * 2;
            if (0x400 < iVar8) {
              iVar8 = 0x400;
            }
            *(short *)(iVar14 + 0xc) = (short)(iVar8 * *(short *)(iVar14 + 0xc) >> 10);
            if (iVar11 == 0) {
              if (**(int **)(iVar12 + 0x24) == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = (uint)*(ushort *)(**(int **)(iVar12 + 0x24) + 0xbc);
              }
              uVar3 = ((int)(0x100 - uVar3) >> 1) + 0x100U & 0xffff;
            }
            else if (iVar11 == 1) {
              uVar3 = ((int)(0x100 - (uint)*(ushort *)(*(int *)(iVar12 + 0x24) + 0x34)) >> 1) +
                      0x100U & 0xffff;
            }
            else {
              uVar3 = 0x100;
            }
            iVar14 = iVar6 + iVar7 * 2;
            *(short *)(iVar14 + 0xc) = (short)(uVar3 * (int)*(short *)(iVar14 + 0xc) >> 8);
          }
          iVar7 = iVar7 + 1;
          iVar12 = iVar12 + 0x10c;
        } while (iVar7 < 4);
      }
    }
    uVar9 = uVar9 + 1 & 0xff;
  } while( true );
}

