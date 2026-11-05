
void FUN_0207b414(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  int local_34;
  int local_30;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  FUN_0201899c(&local_34);
  FUN_020517fc(param_1 + 0x10,0,0x80);
  *(undefined2 *)(param_1 + 0x90) = 0;
  for (puVar5 = *(undefined4 **)(param_1 + 8); puVar5 != (undefined4 *)0x0;
      puVar5 = (undefined4 *)*puVar5) {
    puVar6 = (undefined4 *)puVar5[2];
    if (puVar6 != (undefined4 *)0x0) {
      FUN_0207afdc(puVar5[6],&local_34);
      *(undefined2 *)(puVar5 + 0xf) = *(undefined2 *)((int)puVar5 + 0x3a);
      *(undefined2 *)(puVar5 + 0xe) = *(undefined2 *)(puVar5 + 0xd);
      *(undefined2 *)((int)puVar5 + 0x3a) = *(undefined2 *)((int)puVar5 + 0x36);
      *(short *)(puVar5 + 0xd) = (short)((int)(local_34 + ((uint)(local_34 >> 0xb) >> 0x14)) >> 0xc)
      ;
      *(short *)((int)puVar5 + 0x36) =
           (short)((int)(local_30 + ((uint)(local_30 >> 0xb) >> 0x14)) >> 0xc);
      while (puVar6 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)*puVar6;
        bVar1 = *(byte *)(puVar6 + 6);
        if ((bVar1 & 0x10) == 0) {
          uVar2 = bVar1 & 0xfffb;
          *(char *)(puVar6 + 6) = (char)uVar2;
          bVar18 = (bVar1 & 1) != 0;
          if (bVar18) {
            uVar2 = *(ushort *)(puVar6 + 3);
          }
          if ((bVar18 && uVar2 != 0) && ((bVar1 & 2) == 0)) {
            FUN_02051890(puVar6 + 0xb,puVar6 + 0xd,8);
            if (*(ushort *)(puVar6 + 3) == 1) {
              FUN_02051890(puVar6 + 0xf,puVar6 + 0xb,8);
            }
            else {
              iVar12 = (int)*(short *)(puVar6 + 0xf) - (int)*(short *)(puVar6 + 0x10);
              iVar8 = (int)*(short *)(puVar6 + 0xf) + (int)*(short *)(puVar6 + 0x10);
              iVar15 = (int)*(short *)((int)puVar6 + 0x3e) - (int)*(short *)((int)puVar6 + 0x42);
              iVar10 = (int)*(short *)((int)puVar6 + 0x3e) + (int)*(short *)((int)puVar6 + 0x42);
              psVar7 = (short *)(puVar6 + 0x11);
              for (uVar9 = 1; uVar9 < *(ushort *)(puVar6 + 3); uVar9 = uVar9 + 1) {
                iVar13 = (int)*psVar7 - (int)psVar7[2];
                iVar4 = (int)psVar7[1] - (int)psVar7[3];
                if (iVar13 < iVar12) {
                  iVar12 = iVar13;
                }
                iVar13 = (int)*psVar7 + (int)psVar7[2];
                if (iVar4 < iVar15) {
                  iVar15 = iVar4;
                }
                iVar4 = (int)psVar7[1] + (int)psVar7[3];
                if (iVar8 < iVar13) {
                  iVar8 = iVar13;
                }
                if (iVar10 < iVar4) {
                  iVar10 = iVar4;
                }
                psVar7 = psVar7 + 4;
              }
              *(short *)(puVar6 + 0xc) = (short)(iVar8 - iVar12 >> 1);
              *(short *)((int)puVar6 + 0x32) = (short)(iVar10 - iVar15 >> 1);
              *(short *)(puVar6 + 0xb) = (short)iVar12 + *(short *)(puVar6 + 0xc);
              *(short *)((int)puVar6 + 0x2e) = (short)iVar15 + *(short *)((int)puVar6 + 0x32);
            }
            iVar12 = (int)((local_34 + ((uint)(local_34 >> 0xb) >> 0x14)) * 0x10) >> 0x10;
            iVar8 = (*(short *)(puVar6 + 0xb) + iVar12) - (int)*(short *)(puVar6 + 0xc);
            iVar13 = (int)*(short *)(puVar6 + 0xc) + *(short *)(puVar6 + 0xb) + iVar12;
            uVar9 = local_30 >> 0xb;
            iVar15 = (int)((local_30 + (uVar9 >> 0x14)) * 0x10) >> 0x10;
            iVar4 = *(short *)((int)puVar6 + 0x2e) + iVar15;
            iVar10 = iVar4 - *(short *)((int)puVar6 + 0x32);
            iVar4 = *(short *)((int)puVar6 + 0x32) + iVar4;
            if ((*(byte *)(puVar6 + 6) & 0x40) == 0) {
              if (iVar12 < iVar8) {
                iVar8 = iVar12;
              }
              if (iVar15 < iVar10) {
                iVar10 = iVar15;
              }
              if (iVar13 < iVar12) {
                iVar13 = iVar12;
              }
              if (iVar4 < iVar15) {
                *(short *)((int)puVar6 + 0x32) = (short)(iVar15 - iVar10 >> 1);
                *(short *)((int)puVar6 + 0x2e) = (short)iVar10 + *(short *)((int)puVar6 + 0x32);
                *(short *)((int)puVar6 + 0x2e) =
                     *(short *)((int)puVar6 + 0x2e) -
                     (short)((local_30 + (uVar9 >> 0x14)) * 0x10 >> 0x10);
                *(short *)((int)puVar6 + 0x32) = -*(short *)((int)puVar6 + 0x2e);
                iVar4 = iVar15;
              }
              else {
                *(short *)((int)puVar6 + 0x32) = (short)(iVar4 - iVar10 >> 1);
                *(short *)((int)puVar6 + 0x2e) = (short)iVar10 + *(short *)((int)puVar6 + 0x32);
                *(short *)((int)puVar6 + 0x2e) =
                     *(short *)((int)puVar6 + 0x2e) -
                     (short)((local_30 + (uVar9 >> 0x14)) * 0x10 >> 0x10);
              }
              *(short *)(puVar6 + 0xc) = (short)((iVar13 - iVar8) + 1 >> 1);
              *(short *)(puVar6 + 0xb) = (short)iVar8 + *(short *)(puVar6 + 0xc);
              *(short *)(puVar6 + 0xb) =
                   *(short *)(puVar6 + 0xb) -
                   (short)((local_34 + ((uint)(local_34 >> 0xb) >> 0x14)) * 0x10 >> 0x10);
            }
            uVar9 = iVar8 >> 8;
            uVar11 = iVar10 >> 8;
            if (3 < (int)uVar9) {
              uVar9 = 3;
            }
            uVar14 = iVar13 >> 8;
            if (3 < (int)uVar11) {
              uVar11 = 3;
            }
            uVar16 = iVar4 >> 8;
            if (3 < (int)uVar14) {
              uVar14 = 3;
            }
            if (3 < (int)uVar16) {
              uVar16 = 3;
            }
            if ((int)uVar9 < 0) {
              uVar9 = 0;
            }
            if ((int)uVar11 < 0) {
              uVar11 = 0;
            }
            if ((int)uVar14 < 0) {
              uVar14 = 0;
            }
            if ((int)uVar16 < 0) {
              uVar16 = 0;
            }
            for (; uVar11 <= uVar16; uVar11 = uVar11 + 1) {
              for (uVar17 = uVar9; uVar17 <= uVar14; uVar17 = uVar17 + 1) {
                uVar2 = *(ushort *)(param_1 + 0x90);
                if (uVar2 < 0x180) {
                  *(ushort *)(param_1 + 0x90) = uVar2 + 1;
                  *(undefined4 **)((uint)uVar2 * 0xc + param_1 + 0xfa4) = puVar6;
                  FUN_02037b98(param_1 + 0x10 + (uVar17 + uVar11 * 4 & 0xffff) * 8);
                }
              }
            }
          }
        }
        else {
          FUN_0207b1c0(puVar5,puVar6);
          FUN_0201b244(puVar6);
        }
        puVar6 = puVar3;
      }
    }
  }
  return;
}

