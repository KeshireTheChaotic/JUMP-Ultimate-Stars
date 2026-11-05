
void FUN_02177c60(int *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  
  FUN_02175628(param_1[4]);
  FUN_02175628();
  uVar4 = FUN_02175628();
  uVar5 = FUN_02177c24();
  iVar6 = FUN_02177c00(uVar5,10);
  if (iVar6 == 0) {
    FUN_0217718c(uVar4);
    FUN_02176d50(uVar4);
    param_1[0x60] = param_1[0x60] & 0xfffffffe;
    uVar7 = FUN_02177c34(uVar4);
    uVar8 = FUN_02177c48(uVar4);
    if (((uVar7 == (uVar8 & 7)) && (iVar6 = FUN_02178224(uVar4), iVar6 != 0)) &&
       (iVar6 = FUN_02178240(uVar4), *(char *)(iVar6 + 0x18) != '\x17')) {
      iVar6 = 0;
      while( true ) {
        if (1 < iVar6) goto LAB_02178204;
        iVar9 = FUN_0217718c(uVar4);
        sVar11 = *(short *)(*(int *)(iVar9 + 0x10) + iVar6 * 2 + 0x90);
        uVar7 = (uint)sVar11;
        if (-1 < (int)uVar7) break;
        iVar6 = iVar6 + 1;
      }
      if (uVar7 == (int)(short)param_1[0x51]) {
        *(undefined2 *)(param_1 + 0x58) = 0xffff;
        param_1[0x52] = param_1[0x4b];
        param_1[0x53] = param_1[0x4c];
        iVar6 = DAT_02183a38 + 0x3c + uVar7 * 0x20;
        FUN_02051890(iVar6 + 0xc,param_1 + 0x5b,0x10);
        *(undefined1 *)((int)param_1 + 0x17e) = *(undefined1 *)(iVar6 + 0x1e);
        *(short *)(param_1 + 0x5f) = sVar11;
        *(undefined1 *)((int)param_1 + 0x18b) = 7;
        return;
      }
      iVar6 = *param_1;
      while (iVar6 != 0) {
        FUN_02037c24(param_1,iVar6);
        FUN_020517fc(iVar6,0,0x10);
        FUN_02037b98(DAT_02183a38 + 0x20,iVar6);
        iVar6 = *param_1;
      }
      puVar15 = (undefined4 *)0x0;
      for (puVar12 = (undefined4 *)param_1[2]; puVar12 != (undefined4 *)0x0;
          puVar12 = (undefined4 *)*puVar12) {
        *(byte *)((int)puVar12 + 0x46) = *(byte *)((int)puVar12 + 0x46) & 0xf0;
        if ((short)param_1[0x51] == *(short *)(puVar12[0x10] + 0x1c)) {
          puVar15 = puVar12;
        }
      }
      if ((*(uint *)(puVar15[0x10] + 8) & 1) == 0 || puVar15 == (undefined4 *)0x0) {
        FUN_02178f40(param_1);
      }
      else {
        iVar6 = FUN_02178f1c(DAT_02183a38 + 0x20);
        *(undefined4 **)(iVar6 + 8) = puVar15;
        FUN_02037b54(param_1);
        *(byte *)((int)puVar15 + 0x46) = *(byte *)((int)puVar15 + 0x46) | 8;
        FUN_020517fc(DAT_02183a38 + 0x27b7c,0,0xc00);
        iVar6 = 0;
        do {
          puVar12 = (undefined4 *)0x0;
          iVar10 = DAT_02183a38 + 0x27b7c;
          iVar14 = iVar10 + iVar6 * 0xc0;
          sVar11 = -0x8000;
          iVar9 = 0;
          for (puVar13 = (undefined4 *)param_1[2]; puVar13 != (undefined4 *)0x0;
              puVar13 = (undefined4 *)*puVar13) {
            if (((*(uint *)(puVar13[0x10] + 8) & 1) != 0) &&
               ((*(byte *)((int)puVar13 + 0x46) & 0xf) == 0)) {
              puVar17 = puVar13;
              for (iVar16 = 0; puVar17 = puVar17 + 2, iVar16 < 7;
                  iVar16 = (iVar16 + 1) * 0x10000 >> 0x10) {
                if (((iVar16 != 1) || ((1 << (uint)*(byte *)(puVar13[0x10] + 0x1e) & 3U) == 0)) ||
                   ((*(uint *)(puVar13[0x10] + 8) & 6) != 6)) {
                  if (((param_1[0x60] & 2U) == 0) && (4 < iVar16)) break;
                  for (puVar18 = (undefined4 *)*puVar17; puVar18 != (undefined4 *)0x0;
                      puVar18 = (undefined4 *)*puVar18) {
                    sVar3 = sVar11;
                    if ((((iVar16 < 2) || ((1 << (uint)*(byte *)(puVar13[0x10] + 0x1e) & 3U) == 0))
                        || ((*(uint *)(puVar13[0x10] + 8) & 6) != 6)) &&
                       (((*(uint *)(*(int *)(puVar18[2] + 0x40) + 8) & 1) != 0 &&
                        (*(short *)(*(int *)(puVar18[2] + 0x40) + 0x1c) ==
                         *(short *)(puVar15[0x10] + 0x1c))))) {
                      sVar2 = *(short *)(puVar13 + 0x11);
                      if (sVar11 < sVar2) {
                        sVar3 = sVar2;
                      }
                      iVar1 = iVar9 * 8;
                      if (sVar11 < sVar2) {
                        puVar12 = puVar13;
                      }
                      *(byte *)((int)puVar13 + 0x46) = *(byte *)((int)puVar13 + 0x46) | 2;
                      *(undefined4 **)(iVar14 + iVar9 * 8) = puVar13;
                      iVar9 = (iVar9 + 1) * 0x10000 >> 0x10;
                      *(undefined2 *)(iVar14 + iVar1 + 4) = *(undefined2 *)(puVar13 + 0x11);
                    }
                    sVar11 = sVar3;
                  }
                }
              }
            }
          }
          if (puVar12 == (undefined4 *)0x0) {
            for (puVar13 = (undefined4 *)param_1[2]; puVar13 != (undefined4 *)0x0;
                puVar13 = (undefined4 *)*puVar13) {
              if ((*(byte *)((int)puVar13 + 0x46) & 2) != 0) {
                *(byte *)((int)puVar13 + 0x46) = *(byte *)((int)puVar13 + 0x46) & 0xfd;
              }
            }
            uVar8 = *(byte *)((int)puVar15 + 0x46) | 4;
            *(char *)((int)puVar15 + 0x46) = (char)uVar8;
            do {
              iVar6 = iVar6 + -1;
              if (iVar6 < 0) {
                puVar12 = (undefined4 *)0x0;
                goto LAB_021781a8;
              }
              sVar11 = -0x8000;
              iVar14 = iVar10 + iVar6 * 0xc0;
              for (iVar9 = 0;
                  (iVar9 < 0x18 &&
                  (puVar15 = *(undefined4 **)(iVar14 + iVar9 * 8), puVar15 != (undefined4 *)0x0));
                  iVar9 = (iVar9 + 1) * 0x10000 >> 0x10) {
                if (((*(byte *)((int)puVar15 + 0x46) & 4) == 0) &&
                   (sVar3 = *(short *)(iVar14 + iVar9 * 8 + 4), sVar11 < sVar3)) {
                  puVar12 = puVar15;
                  sVar11 = sVar3;
                }
              }
              iVar9 = *param_1;
              FUN_02037c24(param_1,iVar9);
              FUN_020517fc(iVar9,0,0x10);
              uVar8 = FUN_02037b98(DAT_02183a38 + 0x20,iVar9);
            } while (puVar12 == (undefined4 *)0x0);
            iVar9 = FUN_02178f1c(DAT_02183a38 + 0x20);
            *(undefined4 **)(iVar9 + 8) = puVar12;
            FUN_02037b54(param_1);
            uVar8 = *(byte *)((int)puVar12 + 0x46) & 0xfffffffe | 8;
            *(char *)((int)puVar12 + 0x46) = (char)uVar8;
          }
          else {
            for (puVar15 = (undefined4 *)param_1[2]; puVar15 != (undefined4 *)0x0;
                puVar15 = (undefined4 *)*puVar15) {
              if ((*(byte *)((int)puVar15 + 0x46) & 2) != 0) {
                *(byte *)((int)puVar15 + 0x46) = *(byte *)((int)puVar15 + 0x46) & 0xfd | 1;
              }
            }
            iVar9 = FUN_02178f1c(DAT_02183a38 + 0x20);
            *(undefined4 **)(iVar9 + 8) = puVar12;
            FUN_02037b54(param_1);
            uVar8 = *(byte *)((int)puVar12 + 0x46) & 0xfffffffe | 8;
            *(char *)((int)puVar12 + 0x46) = (char)uVar8;
          }
LAB_021781a8:
          if (puVar12 != (undefined4 *)0x0) {
            uVar8 = (uint)*(short *)(puVar12[0x10] + 0x1c);
          }
          if (puVar12 == (undefined4 *)0x0 || uVar8 == uVar7) {
            if (puVar12 == (undefined4 *)0x0) {
              param_1[0x60] = param_1[0x60] | 0x80;
              FUN_02178f40(param_1);
            }
            goto LAB_02178204;
          }
          iVar6 = iVar6 + 1;
          puVar15 = puVar12;
        } while (iVar6 < 0x10);
        FUN_02178f40(param_1);
      }
LAB_02178204:
      *(undefined2 *)(param_1 + 0x58) = 0xffff;
      *(undefined1 *)((int)param_1 + 0x18b) = 2;
    }
  }
  else {
    FUN_02178f40(param_1);
  }
  return;
}

