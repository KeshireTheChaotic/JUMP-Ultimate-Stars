
void FUN_020790f0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  char extraout_r1;
  char extraout_r1_00;
  uint uVar10;
  int extraout_r1_01;
  uint uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  char *pcVar16;
  int iVar17;
  int *piVar18;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  char local_38;
  char local_37;
  undefined1 local_36;
  undefined1 auStack_35 [5];
  undefined1 auStack_30 [3];
  undefined1 auStack_2d [9];
  
                    /* JUS-TAG strings=["koma/??_??.dtx","koma/dt_20.dtx","koma/koma.aar"] */
  piVar12 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *piVar12;
  FUN_0207974c(piVar12);
  puVar13 = *(undefined4 **)(iVar2 + 0x558);
  if (puVar13 == (undefined4 *)0x0) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02078f84);
  }
  else {
    piVar3 = (int *)FUN_020101f4(s_koma_koma_aar_0209f694,0);
    FUN_02078f54();
    DAT_020a0dd0 = *(undefined4 *)(piVar12[4] + 4);
    local_36 = 0;
    thunk_FUN_0207400c(auStack_35,s_koma_______dtx_0209f6a4);
    for (; puVar13 != (undefined4 *)0x0; puVar13 = (undefined4 *)*puVar13) {
      FUN_0200d12c(*(undefined1 *)(puVar13[0xd] + 5),10);
      local_37 = extraout_r1 + '0';
      uVar4 = FUN_0200d12c(*(undefined1 *)(puVar13[0xd] + 5),10);
      FUN_0200d12c(uVar4,10);
      local_38 = extraout_r1_00 + '0';
      thunk_FUN_02074258(auStack_30,(&PTR_DAT_0209e840)[*(byte *)(puVar13[0xd] + 4)]);
      thunk_FUN_02074258(auStack_2d,&local_38);
      local_58 = 0;
      pcVar16 = (char *)puVar13[0xe];
      uVar5 = *(byte *)((int)puVar13 + 0xe) & 0xf;
      iVar9 = (int)(*(byte *)((int)puVar13 + 0xe) & 0xf0) >> 4;
      piVar18 = (int *)(iVar9 * 0x14 + iVar2 + 8 + uVar5 * 4);
      piVar14 = piVar12 + uVar5 + iVar9 * 5 + 5;
      iVar15 = (short)uVar5 * 0x30;
      iVar9 = (short)iVar9 * 0x30;
      local_5c = 0;
      do {
        if ((*pcVar16 != '\0') && ((undefined4 *)*piVar18 == puVar13)) {
          if (*piVar14 == 0) {
            FUN_02032a1c(auStack_35);
            iVar6 = FUN_02011b38();
            *piVar14 = iVar6;
            if (piVar12[0x32] != 0) {
              FUN_0206c514(*piVar14);
            }
            if (*(int *)(DAT_0214bd80 + 0x18e4) == 0) {
              iVar6 = FUN_02079680(*piVar14,0);
              piVar7 = (int *)(**(code **)(**(int **)(iVar6 + 4) + 0x40))
                                        (*(int **)(iVar6 + 4),0,DAT_02093bf4);
              if (piVar7 == (int *)0x0) {
                iVar17 = 0;
              }
              else {
                if (piVar7[7] == 0) {
                  (**(code **)(*piVar7 + 0x14))();
                }
                iVar17 = piVar7[7];
              }
              if (iVar17 != 0) {
                (**(code **)(**(int **)(iVar17 + 4) + 0x20))();
                (**(code **)(**(int **)(iVar17 + 4) + 0x18))();
                piVar7 = (int *)(**(code **)(**(int **)(iVar17 + 4) + 100))();
                if (piVar7[6] == 0) {
                  (**(code **)(*piVar7 + 0x10))();
                }
                iVar8 = piVar7[6];
                if ((**(ushort **)(*(int *)(iVar8 + 4) + 0x10) & 0x7fff) == 0) {
                  (**(code **)(**(int **)(iVar6 + 4) + 0x4c))
                            (*(int **)(iVar6 + 4),*(undefined4 *)(iVar17 + 4));
                }
                else {
                  FUN_020790d4(iVar8,0,0);
                  FUN_020790d4(iVar8,1,0x8000);
                  uVar5 = (**(code **)(**(int **)(iVar17 + 4) + 0x5c))();
                  iVar8 = *(int *)(*(int *)(iVar17 + 4) + 0xc);
                  for (uVar11 = 0x20; uVar11 < uVar5; uVar11 = uVar11 + 1) {
                    bVar1 = *(byte *)(iVar8 + uVar11);
                    uVar10 = (uint)bVar1;
                    if ((bVar1 & 0xf) == 0) {
                      uVar10 = uVar10 & 0xf0 | 1;
                    }
                    else if ((uVar10 & 0xf) == 1) {
                      uVar10 = uVar10 & 0xf0;
                    }
                    if ((int)uVar10 >> 4 == 0) {
                      uVar10 = uVar10 & 0xf | 0x10;
                    }
                    else if ((int)uVar10 >> 4 == 1) {
                      uVar10 = uVar10 & 0xf;
                    }
                    *(char *)(iVar8 + uVar11) = (char)uVar10;
                  }
                  iVar8 = FUN_0203b3f4();
                  iVar8 = *(int *)(*(int *)(iVar8 + 0x88) + 4);
                  *(undefined2 *)(iVar8 + 0x8b8) = 0;
                  *(undefined1 *)(iVar8 + 0x8fc) = 1;
                  (**(code **)(**(int **)(iVar6 + 4) + 0x4c))
                            (*(int **)(iVar6 + 4),*(undefined4 *)(iVar17 + 4));
                }
              }
              iVar6 = FUN_02079680(*piVar14,0);
              (**(code **)(**(int **)(iVar6 + 4) + 0x50))(*(int **)(iVar6 + 4),1);
            }
            FUN_020796b8(*piVar14,local_5c);
            (**(code **)(**(int **)(*piVar14 + 4) + 0xd8))(*(int **)(*piVar14 + 4),1);
            if (*(int *)(DAT_0214bd80 + 0x18e4) == 0) {
              local_3c = (iVar15 + 8) * 0x1000;
              local_40 = iVar9 << 0xc;
              FUN_0206c9f8(*piVar14,&local_3c,&local_40);
              FUN_0202a5a4(*(undefined4 *)(*(int *)(*piVar14 + 4) + 0x50));
            }
            else {
              local_44 = iVar15 << 0xc;
              local_48 = iVar9 << 0xc;
              FUN_0206c9f8(*piVar14,&local_44,&local_48);
            }
          }
          local_5c = local_5c + 1;
        }
        if (iVar15 < 0xc0) {
          iVar15 = iVar15 + 0x30;
        }
        else {
          iVar15 = 0;
          iVar9 = iVar9 + 0x30;
        }
        local_58 = local_58 + 1;
        pcVar16 = pcVar16 + 1;
        piVar18 = piVar18 + 1;
        piVar14 = piVar14 + 1;
      } while (local_58 < 0x14);
    }
    if (*(int *)(DAT_0214bd80 + 0x18e4) == 0) {
      thunk_FUN_0207400c(auStack_35,s_koma_dt_20_dtx_0209f6b4);
      iVar2 = 0;
      do {
        if (piVar12[iVar2 + 5] == 0) {
          FUN_02032a1c(auStack_35);
          iVar9 = FUN_02011b38();
          piVar12[iVar2 + 5] = iVar9;
          if (piVar12[0x32] != 0) {
            FUN_0206c514(piVar12[iVar2 + 5]);
          }
          iVar9 = FUN_02079680(piVar12[iVar2 + 5],0);
          (**(code **)(**(int **)(iVar9 + 4) + 0x50))(*(int **)(iVar9 + 4),1);
          FUN_020796b8(piVar12[iVar2 + 5],0);
          local_50 = FUN_0200d12c(iVar2,5);
          local_50 = local_50 * 0x30000;
          FUN_0200d12c(iVar2,5);
          local_4c = extraout_r1_01 * 0x30000;
          FUN_0206c9f8(piVar12[iVar2 + 5],&local_4c,&local_50);
          (**(code **)(**(int **)(piVar12[iVar2 + 5] + 4) + 0xd8))
                    (*(int **)(piVar12[iVar2 + 5] + 4),1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x14);
    }
    FUN_0206c54c();
    (**(code **)(*piVar3 + 0xc))();
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02078f84);
  }
  return;
}

