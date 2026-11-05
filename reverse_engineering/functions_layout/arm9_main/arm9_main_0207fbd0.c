
void FUN_0207fbd0(int param_1)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  for (puVar8 = *(undefined4 **)(param_1 + 0x58); puVar8 != (undefined4 *)0x0;
      puVar8 = (undefined4 *)*puVar8) {
    if ((*(uint *)(puVar8[2] + 0x34) & 0x80800) == 0) {
      for (puVar11 = *(undefined4 **)(*(int *)(puVar8[2] + 0x60) + 0x10);
          puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)*puVar11) {
        if ((*(byte *)(puVar11 + 4) & 4) == 0) {
          iVar9 = *(int *)(puVar11[3] + 0x1c);
          iVar7 = *(int *)(puVar11[2] + 0x1c);
          uVar14 = *(uint *)(iVar9 + 0x14);
          if (((((uVar14 & 0x80800) == 0) &&
               (uVar13 = *(uint *)(iVar7 + 0x14), (uVar13 & 0x10000000) != 0)) &&
              ((uVar13 & 0x40000000) == 0)) &&
             (((*(uint *)(iVar9 + 0x1c) & 0x10000000) == 0 &&
              (uVar5 = *(uint *)(*(int *)(iVar9 + 0xc) + 0x40), (uVar5 & 0x80) == 0)))) {
            uVar3 = (ushort)uVar14;
            if ((uVar13 & 0x8000000) == 0) {
              if (**(byte **)(iVar7 + 0x10) == **(byte **)(iVar9 + 0x10)) {
                if (((uVar14 & 0x40000000) == 0) && ((uVar13 & 0x80000) == 0)) {
                  if (((uint)*(ushort *)(iVar7 + 0x24) & uVar14 & 0xffffff) == 0) {
                    *(ushort *)(iVar7 + 0x24) =
                         *(ushort *)(iVar7 + 0x24) | (ushort)(uVar14 & 0xffffff);
                    iVar10 = FUN_020808a4(*(undefined4 *)(iVar7 + 0x14),
                                          *(undefined4 *)(iVar7 + 0x18));
                    if (iVar10 == 0) {
                      if ((((uint)*(ushort *)(iVar9 + 0x24) & *(uint *)(iVar9 + 0x14) & 0xffffff) ==
                           0) || (iVar9 = FUN_020808a4(*(uint *)(iVar9 + 0x14),
                                                       *(undefined4 *)(iVar9 + 0x18)), iVar9 != 0))
                      {
                        iVar9 = *(int *)(param_1 + 0xd8);
                        FUN_02037c24(param_1 + 0xd8,iVar9);
                        *(undefined4 **)(iVar9 + 8) = puVar11;
                        FUN_02037b98(param_1 + 0x60,iVar9);
                      }
                      if ((*(uint *)(iVar7 + 0x18) & 1) != 0) {
                        *(byte *)(puVar11[2] + 0x18) = *(byte *)(puVar11[2] + 0x18) | 2;
                      }
                    }
                  }
                }
              }
              else if ((uVar14 & 0x40000000) == 0) {
                if (**(byte **)(iVar9 + 0x10) < **(byte **)(iVar7 + 0x10)) {
                  *(ushort *)(iVar7 + 0x22) = *(ushort *)(iVar7 + 0x22) | uVar3;
                  *(ushort *)(iVar9 + 0x20) =
                       *(ushort *)(iVar9 + 0x20) | (ushort)*(undefined4 *)(iVar7 + 0x14);
                }
              }
              else if (((uVar5 & 0x4000) == 0) && ((uVar13 & 0x4000000) == 0)) {
                *(ushort *)(iVar7 + 0x20) = *(ushort *)(iVar7 + 0x20) | uVar3;
              }
              else {
                *(ushort *)(iVar7 + 0x22) = *(ushort *)(iVar7 + 0x22) | uVar3;
                *(byte *)(iVar7 + 0x2a) = *(byte *)(iVar7 + 0x2a) | 2;
              }
            }
            else if ((uVar14 & 0x1000) == 0) {
              if (**(byte **)(iVar9 + 0x10) <= **(byte **)(iVar7 + 0x10)) {
                *(uint *)(*(int *)(iVar7 + 0xc) + 0x40) =
                     *(uint *)(*(int *)(iVar7 + 0xc) + 0x40) | 0x20000;
                *(ushort *)(iVar7 + 0x22) =
                     *(ushort *)(iVar7 + 0x22) | (ushort)*(undefined4 *)(iVar9 + 0x14);
                *(ushort *)(iVar9 + 0x20) =
                     *(ushort *)(iVar9 + 0x20) | (ushort)*(undefined4 *)(iVar7 + 0x14);
              }
            }
            else {
              *(ushort *)(iVar7 + 0x20) = *(ushort *)(iVar7 + 0x20) | uVar3;
              *(ushort *)(iVar9 + 0x22) =
                   *(ushort *)(iVar9 + 0x22) | (ushort)*(undefined4 *)(iVar7 + 0x14);
            }
          }
        }
      }
    }
  }
  puVar8 = *(undefined4 **)(param_1 + 0x58);
  do {
    if (puVar8 == (undefined4 *)0x0) {
      return;
    }
    iVar7 = puVar8[2];
    bVar15 = (*(uint *)(*(int *)(iVar7 + 0x5c) + 0x34) & 0x10) != 0;
    for (puVar11 = *(undefined4 **)(*(int *)(iVar7 + 0x60) + 0x10); puVar11 != (undefined4 *)0x0;
        puVar11 = (undefined4 *)*puVar11) {
      bVar1 = *(byte *)(puVar11 + 4);
      iVar9 = *(int *)(puVar11[2] + 0x1c);
      iVar10 = *(int *)(puVar11[3] + 0x1c);
      if ((bVar1 & 0x20) == 0) {
        if ((((*(uint *)(iVar9 + 0x18) & 0x10) == 0) || ((*(uint *)(iVar10 + 0x14) & 0x800) == 0))
           || (bVar15)) {
          if ((((*(uint *)(iVar9 + 0x14) & 0x20000000) == 0) ||
              ((*(uint *)(iVar10 + 0x14) & 0x800) == 0)) || (bVar15)) goto LAB_0207ff1c;
          if ((bVar1 & 4) != 0) {
            FUN_02080660(param_1,iVar7,puVar11);
          }
        }
        else {
          FUN_02080660(param_1,iVar7,puVar11);
        }
      }
      else {
LAB_0207ff1c:
        if (((*(uint *)(iVar7 + 0x40) & 0x20000000) == 0) &&
           (uVar14 = *(uint *)(iVar10 + 0x14), (uVar14 & 0x800) == 0)) {
          uVar13 = *(uint *)(iVar9 + 0x14);
          if (((uVar13 & 0x20000000) == 0) || ((uVar14 & 0x20000000) == 0)) {
            if ((((bVar1 & 4) == 0) && ((*(uint *)(iVar7 + 0x40) & 0x8000000) == 0)) &&
               (iVar12 = *(int *)(iVar9 + 0xc), (*(uint *)(iVar12 + 0x40) & 0x80) == 0)) {
              if ((*(uint *)(iVar12 + 0x44) & 2) != 0) {
                for (puVar6 = *(undefined4 **)(iVar12 + 0x28); puVar6 != (undefined4 *)0x0;
                    puVar6 = (undefined4 *)*puVar6) {
                  if (*(int *)(puVar6[2] + 8) == *(int *)(iVar10 + 0xc)) {
                    bVar4 = false;
                    goto LAB_02080080;
                  }
                }
                bVar4 = true;
LAB_02080080:
                if (bVar4) goto LAB_020801d4;
              }
              if ((((uVar13 & 0x800000) == 0) || ((*(uint *)(iVar10 + 0x1c) & 0x10000000) != 0)) ||
                 (((*(uint *)(*(int *)(iVar10 + 0xc) + 0x40) & 0x18000000) != 0 ||
                  ((*(ushort *)(iVar9 + 0x20) & uVar14) != 0)))) {
                if ((bVar1 & 1) == 0) {
                  if (((uVar13 & 0x20000) == 0) || ((uVar14 & 0x10000) == 0)) {
                    bVar1 = **(byte **)(iVar10 + 0x10);
                    bVar2 = **(byte **)(iVar9 + 0x10);
                    if ((bVar2 != bVar1) && ((uVar14 & 0x40000000) == 0)) {
                      if ((*(uint *)(iVar12 + 0x44) & 4) == 0) {
                        if (((uVar13 & 0x40000000) == 0) || ((uVar14 & 0x20000000) != 0)) {
                          if (bVar2 < bVar1) {
                            FUN_020809c8(param_1,iVar7,puVar11);
                          }
                        }
                        else {
                          FUN_020808c0(param_1,iVar7,puVar11);
                        }
                      }
                      else if ((uVar14 & 0x24000100) == 0) {
                        FUN_020808c0(param_1,iVar7,puVar11);
                      }
                      else if (bVar2 < bVar1) {
                        FUN_020809c8(param_1,iVar7,puVar11);
                      }
                    }
                  }
                  else {
                    iVar9 = *(int *)(param_1 + 0xd8);
                    FUN_02037c24(param_1 + 0xd8,iVar9);
                    *(undefined4 **)(iVar9 + 8) = puVar11;
                    FUN_02037b98(param_1 + 0xa0,iVar9);
                  }
                }
              }
              else {
                iVar9 = *(int *)(*(int *)(iVar10 + 0xc) + 0x5c);
                *(short *)(iVar9 + 0x30) =
                     *(short *)(iVar9 + 0x30) +
                     (short)((uint)(*(short *)(*(int *)(iVar12 + 0x5c) + 0x24) * 0x5000) >> 0x10);
              }
            }
          }
          else if (((bVar1 & 4) == 0) && ((*(uint *)(iVar10 + 0x1c) & 0x20000000) == 0)) {
            if (((uVar13 & 0xff) != 0) &&
               (((uVar14 & 0xff) != 0 && ((*(uint *)(*(int *)(iVar9 + 0xc) + 0x78) & 0x20) != 0))))
            {
              iVar12 = *(int *)(param_1 + 0xd8);
              FUN_02037c24(param_1 + 0xd8,iVar12);
              *(undefined4 **)(iVar12 + 8) = puVar11;
              FUN_02037b98(param_1 + 0x50,iVar12);
            }
            if ((((((*(uint *)(iVar9 + 0x14) & 0x500) != 0) &&
                  ((*(uint *)(iVar10 + 0x14) & 0x500) != 0)) &&
                 ((*(uint *)(iVar9 + 0x1c) & 0x10000000) == 0)) &&
                (((*(uint *)(iVar10 + 0x1c) & 0x10000000) == 0 &&
                 ((*(uint *)(*(int *)(iVar9 + 0xc) + 0x38) & 0x800) == 0)))) &&
               ((*(uint *)(*(int *)(iVar10 + 0xc) + 0x38) & 0x800) == 0)) {
              iVar9 = *(int *)(param_1 + 0xd8);
              FUN_02037c24(param_1 + 0xd8,iVar9);
              *(undefined4 **)(iVar9 + 8) = puVar11;
              FUN_02037b98(param_1 + 0xa8,iVar9);
            }
          }
        }
      }
LAB_020801d4:
    }
    puVar8 = (undefined4 *)*puVar8;
  } while( true );
}

