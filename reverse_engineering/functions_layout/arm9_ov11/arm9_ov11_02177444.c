
void FUN_02177444(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  undefined4 uStack_28;
  
  iVar12 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_28 = param_4;
  FUN_02175628(*(undefined4 *)(iVar12 + 0x10));
  FUN_02175628();
  iVar4 = FUN_02175628();
  iVar4 = *(int *)(*(int *)(iVar4 + 4) + 0x10);
  if ((*(uint *)(iVar4 + 0xd4) & 1) != 0) {
    uVar5 = FUN_02177c24();
    iVar6 = FUN_02177c00(uVar5,10);
    if (iVar6 == 0) {
      FUN_02175628(*(undefined4 *)(iVar12 + 0x10));
      FUN_02175628();
      uVar5 = FUN_02175628();
      iVar6 = FUN_02177c34();
      uVar7 = FUN_02177c48(uVar5);
      if ((uVar7 & 0xf) == iVar6 * 4) {
        for (puVar14 = *(undefined4 **)(iVar12 + 8); puVar14 != (undefined4 *)0x0;
            puVar14 = (undefined4 *)*puVar14) {
          cVar2 = *(char *)(puVar14[0x10] + 0x1e);
          FUN_02051890(puVar14[0x10] + 0xc,&local_38,0x10);
          bVar20 = cVar2 == '\f';
          piVar9 = puVar14 + 2;
          iVar6 = 0;
          if (bVar20) {
            do {
              iVar8 = *piVar9;
              while (iVar8 != 0) {
                FUN_02037c24(piVar9,iVar8);
                FUN_02037b98(DAT_02183a38 + 0x28,iVar8);
                iVar8 = *piVar9;
              }
              iVar6 = iVar6 + 1;
              piVar9 = piVar9 + 2;
            } while (iVar6 < 7);
          }
          else {
            do {
              piVar17 = (int *)*piVar9;
              while (piVar17 != (int *)0x0) {
                iVar8 = *piVar17;
                if (*(char *)(*(int *)(piVar17[2] + 0x40) + 0x1e) == '\f') {
                  FUN_02037c24(piVar9,piVar17);
                  FUN_02037b98(DAT_02183a38 + 0x28,piVar17);
                }
                piVar17 = (int *)iVar8;
              }
              iVar6 = iVar6 + 1;
              piVar9 = piVar9 + 2;
            } while (iVar6 < 7);
          }
          for (puVar16 = *(undefined4 **)(iVar12 + 8); puVar16 != (undefined4 *)0x0;
              puVar16 = (undefined4 *)*puVar16) {
            if (puVar14 != puVar16) {
              if ((bVar20) || (*(char *)(puVar16[0x10] + 0x1e) == '\f')) {
                FUN_02051890(puVar16[0x10] + 0xc,&local_48,0x10);
                iVar6 = 0;
                bVar11 = false;
                bVar3 = false;
                if (((local_48 < local_38) && (local_38 < local_48 + local_40)) ||
                   ((iVar8 = local_38 + local_30, local_48 < iVar8 && (iVar8 < local_48 + local_40))
                   )) {
                  bVar11 = true;
                }
                else if (local_48 + local_40 < local_38) {
                  iVar6 = local_38 - (local_48 + local_40);
                }
                else {
                  iVar6 = local_48 - iVar8;
                }
                if (local_44 < local_34) {
                  piVar9 = (int *)(iVar12 + 100);
                  for (iVar8 = 2; iVar8 < 7; iVar8 = iVar8 + 1) {
                    if (piVar9[1] < local_44 - local_34) {
                      if (bVar11) {
                        bVar3 = true;
                      }
                      else if (iVar6 < *piVar9) {
                        bVar3 = true;
                      }
                    }
                    if (bVar3) {
                      iVar6 = FUN_02178f1c(DAT_02183a38 + 0x28);
                      *(undefined4 **)(iVar6 + 8) = puVar16;
                      FUN_02037b98(puVar14 + 2 + iVar8 * 2);
                      break;
                    }
                    piVar9 = piVar9 + 10;
                  }
                }
                else if ((bVar11) || (iVar6 < 0x101)) {
                  iVar6 = FUN_02178f1c(DAT_02183a38 + 0x28);
                  *(undefined4 **)(iVar6 + 8) = puVar16;
                  if (local_34 == local_44) {
                    FUN_02037b98(puVar14 + 2);
                  }
                  else {
                    FUN_02037b98(puVar14 + 4);
                  }
                }
              }
            }
          }
        }
      }
      bVar20 = false;
      if ((*(uint *)(iVar12 + 0x180) & 0x20) != 0) {
        if ((-1 < *(short *)(iVar12 + 0x144)) &&
           ((*(uint *)(DAT_02183a38 + *(short *)(iVar12 + 0x144) * 0x20 + 0x44) & 1) == 0)) {
          bVar20 = true;
        }
        if (*(short *)(iVar12 + 0x160) < 0) {
          if ((-1 < *(short *)(iVar12 + 0x17c)) &&
             ((*(uint *)(DAT_02183a38 + *(short *)(iVar12 + 0x17c) * 0x20 + 0x44) & 1) == 0)) {
            bVar20 = true;
          }
        }
        else if ((*(uint *)(DAT_02183a38 + *(short *)(iVar12 + 0x160) * 0x20 + 0x44) & 1) == 0) {
          bVar20 = true;
        }
        if (bVar20) {
          FUN_02178f40(iVar12);
          bVar20 = true;
        }
        else {
          bVar20 = false;
        }
      }
      if (!bVar20) {
        FUN_02175628(*(undefined4 *)(iVar12 + 0x10));
        FUN_02175628();
        iVar6 = FUN_02175628();
        iVar13 = *(int *)(*(int *)(iVar6 + 4) + 0x10);
        iVar8 = FUN_02177c00(*(undefined4 *)(iVar13 + 0x2c),10);
        if (iVar8 == 0) {
          iVar15 = *(int *)(*(int *)(iVar13 + 0x20) + 0x1a8);
          iVar8 = **(int **)(iVar13 + 0x14);
          iVar6 = FUN_02178224(iVar6);
          if ((iVar6 == 0) &&
             (iVar6 = *(int *)(*(int *)(iVar15 + 0x10) + 0x5c),
             (*(uint *)(iVar12 + 0x180) & 0x20) != 0)) {
            if ((*(int *)(iVar12 + 0x150) < *(int *)(iVar6 + 0xc)) &&
               (*(int *)(iVar6 + 0xc) < *(int *)(iVar12 + 0x150) + *(int *)(iVar12 + 0x158))) {
              *(uint *)(iVar8 + 0xe4) = *(uint *)(iVar8 + 0xe4) & 0xfffffff3;
            }
            else if (*(char *)(*(int *)(iVar13 + 0x20) + 0x18) != '\x10') {
              *(uint *)(iVar8 + 0xe4) = *(uint *)(iVar8 + 0xe4) & 0xfffffff3;
              if ((*(int *)(iVar6 + 0xc) < *(int *)(iVar12 + 0x150)) &&
                 ((*(uint *)(*(int *)(iVar15 + 0x10) + 0x78) & 8) == 0)) {
                *(uint *)(iVar8 + 0xe4) = *(uint *)(iVar8 + 0xe4) | 4;
              }
              if ((*(int *)(iVar12 + 0x150) + *(int *)(iVar12 + 0x158) < *(int *)(iVar6 + 0xc)) &&
                 ((*(uint *)(*(int *)(iVar15 + 0x10) + 0x78) & 4) == 0)) {
                *(uint *)(iVar8 + 0xe4) = *(uint *)(iVar8 + 0xe4) | 8;
              }
            }
          }
        }
        FUN_02175628(*(undefined4 *)(iVar12 + 0x10));
        FUN_02175628();
        FUN_02175628();
        FUN_0217718c();
        piVar9 = (int *)FUN_021771a0();
        for (puVar14 = *(undefined4 **)(iVar12 + 8); puVar14 != (undefined4 *)0x0;
            puVar14 = (undefined4 *)*puVar14) {
          *(undefined2 *)(puVar14 + 0x11) = 0;
          if ((*(uint *)(puVar14[0x10] + 8) & 1) == 0) {
            *(short *)(puVar14 + 0x11) = *(short *)(puVar14 + 0x11) + -100;
          }
          else {
            FUN_02051890(puVar14[0x10] + 0xc,&local_58,0x10);
            iVar6 = *piVar9;
            if (iVar6 < local_58) {
              iVar6 = local_58 - iVar6;
            }
            else if (local_58 + local_50 < iVar6) {
              iVar6 = iVar6 - (local_58 + local_50);
            }
            else {
              iVar6 = 0;
            }
            iVar8 = piVar9[1];
            if (iVar8 < local_54) {
              iVar8 = local_54 - iVar8;
            }
            else if (local_54 + local_4c < iVar8) {
              iVar8 = iVar8 - (local_54 + local_4c);
            }
            else {
              iVar8 = 0;
            }
            iVar6 = iVar6 + iVar8 >> 8;
            if (0x400 < iVar6) {
              iVar6 = 0x400;
            }
            *(short *)(puVar14 + 0x11) =
                 *(short *)(puVar14 + 0x11) + (short)((uint)((0x400 - iVar6) * 0x1900) >> 0x10);
            if (*(char *)(puVar14[0x10] + 0x1e) == '\f') {
              *(short *)(puVar14 + 0x11) = (short)((uint)(*(short *)(puVar14 + 0x11) * 0xcc) >> 8);
            }
          }
        }
        (*(code *)(&PTR_FUN_02181864)[*(char *)(iVar12 + 0x18b)])(iVar12);
        FUN_02175628(*(undefined4 *)(iVar12 + 0x10));
        FUN_02175628();
        uVar5 = FUN_02175628();
        uVar10 = FUN_02177c24();
        iVar6 = FUN_02177c00(uVar10,10);
        if (iVar6 == 0) {
          iVar6 = FUN_0217718c(uVar5);
          iVar8 = FUN_02176d50(uVar5);
          iVar13 = FUN_020839a8(iVar6);
          if (iVar13 != 0) {
            iVar15 = *(int *)(*(int *)(iVar6 + 0x10) + 0x5c);
            iVar6 = 0x7fff;
            for (puVar14 = *(undefined4 **)(DAT_02183a38 + 8); puVar14 != (undefined4 *)0x0;
                puVar14 = (undefined4 *)*puVar14) {
              iVar1 = (int)(short)((uint)*(undefined4 *)(iVar15 + 0xc) >> 8);
              iVar19 = iVar1 - *(short *)(puVar14 + 4);
              if (iVar19 < 0) {
                iVar19 = -iVar19;
              }
              if (iVar19 <= (int)*(short *)(puVar14 + 5) +
                            ((*(short *)(iVar13 + 4) + 0x10) * 0x10000 >> 0x10)) {
                iVar19 = (int)(short)((uint)*(undefined4 *)(iVar15 + 0x10) >> 8) -
                         (int)*(short *)((int)puVar14 + 0x12);
                if (iVar19 < 0) {
                  iVar19 = -iVar19;
                }
                iVar18 = (int)*(short *)((int)puVar14 + 0x16) +
                         ((*(short *)(iVar13 + 6) + 0x10) * 0x10000 >> 0x10);
                if (iVar19 <= iVar18) {
                  if (iVar6 < 0) {
                    iVar18 = -iVar6;
                  }
                  iVar1 = (*(short *)(puVar14 + 4) - iVar1) * 0x10000 >> 0x10;
                  if (iVar6 >= 0) {
                    iVar18 = iVar6;
                  }
                  if (iVar1 < 0) {
                    iVar19 = -iVar1;
                  }
                  else {
                    iVar19 = iVar1;
                  }
                  if (iVar19 < iVar18) {
                    iVar6 = iVar1;
                  }
                }
              }
            }
            if (iVar6 != 0x7fff) {
              *(uint *)(iVar8 + 0xe4) = *(uint *)(iVar8 + 0xe4) & 0xfffffff3;
              if (iVar6 == 0) {
                uVar7 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
                if ((uVar7 & 1) == 0) {
                  *(uint *)(iVar8 + 0xe8) = *(uint *)(iVar8 + 0xe8) | 4;
                }
                else {
                  *(uint *)(iVar8 + 0xe8) = *(uint *)(iVar8 + 0xe8) | 8;
                }
              }
              else if (iVar6 < 1) {
                *(uint *)(iVar8 + 0xe8) = *(uint *)(iVar8 + 0xe8) | 4;
              }
              else {
                *(uint *)(iVar8 + 0xe8) = *(uint *)(iVar8 + 0xe8) | 8;
              }
            }
          }
        }
        if (((*(uint *)(iVar12 + 0x180) & 0x40) != 0) &&
           (iVar6 = *(int *)(iVar12 + 0x184) + -1, *(int *)(iVar12 + 0x184) = iVar6, iVar6 < 0)) {
          *(undefined4 *)(iVar12 + 0x184) = 0;
          *(uint *)(iVar12 + 0x180) = *(uint *)(iVar12 + 0x180) & 0xffffffbf;
          *(undefined1 *)(iVar4 + 0x10b) = *(undefined1 *)(iVar4 + 0x105);
          *(undefined1 *)(iVar4 + 0x105) = 1;
          *(undefined1 *)(iVar12 + 0x18b) = 0;
          *(uint *)(iVar12 + 0x180) = *(uint *)(iVar12 + 0x180) & 0xffffffdf;
        }
      }
    }
  }
  return;
}

