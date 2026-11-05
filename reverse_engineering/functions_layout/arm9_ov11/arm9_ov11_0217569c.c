
/* WARNING: Removing unreachable block (ram,0x0217590c) */

void FUN_0217569c(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  bool bVar13;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  piVar12 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  piVar12[9] = piVar12[9] & 0xfffffffd;
  *(undefined1 *)(piVar12 + 0xf) = 0;
  iVar11 = *(int *)(piVar12[3] + 0x56c);
  for (puVar10 = (undefined4 *)piVar12[5]; puVar10 != (undefined4 *)0x0;
      puVar10 = (undefined4 *)*puVar10) {
    piVar9 = (int *)puVar10[2];
    sVar2 = *(short *)(*piVar9 + 0x18);
    piVar9[0x19] = (int)sVar2;
    if ((sVar2 < 1) || ((*(uint *)(*piVar9 + 0x3c) & 0x1000) != 0)) {
      piVar9[0x2a] = piVar9[0x2a] & 0xfffff7ff;
    }
    else {
      *(char *)(piVar12 + 0xf) = (char)piVar12[0xf] + '\x01';
      piVar9[0x2a] = piVar9[0x2a] | 0x800;
    }
    if (iVar11 == *piVar9) {
      piVar4 = (int *)*piVar12;
      if (piVar4 == piVar9) {
        iVar8 = *(int *)(piVar9[0xc] + 4);
        uVar5 = (*(byte *)(iVar8 + 0x28) & 3) >> 1;
        bVar13 = uVar5 == 0;
        if (bVar13) {
          uVar5 = *(uint *)(*(int *)(iVar8 + 0x34) + 0x244);
        }
        if (!bVar13 || uVar5 != 0) {
          FUN_02028330(*(undefined4 *)(piVar9[0xc] + 4));
        }
        if (piVar9[7] == 0) {
          FUN_02174fbc(piVar9);
        }
        if (piVar9[10] == 0) {
          FUN_02174f7c(piVar9);
        }
      }
      else {
        if (piVar4 != (int *)0x0) {
          FUN_020282f4(*(undefined4 *)(piVar4[0xc] + 4));
          FUN_02175aa4(*(undefined4 *)(*piVar12 + 8),0);
          FUN_02176d14(*(undefined4 *)(*piVar12 + 8));
          iVar8 = 0;
          iVar6 = *piVar12;
          do {
            if (*(int *)(iVar6 + iVar8 * 4 + 0x28) != 0) {
              iVar7 = FUN_02083ab8();
              FUN_0207b000(*(undefined4 *)(iVar7 + 0xec),*(undefined4 *)(iVar6 + iVar8 * 4 + 0x28));
              iVar7 = iVar6 + iVar8 * 4;
              *(undefined4 *)(iVar7 + 0x28) = 0;
              *(undefined4 *)(iVar7 + 0x7c) = 0;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
          iVar8 = 0;
          iVar6 = *piVar12;
          do {
            if (*(int *)(iVar6 + iVar8 * 4 + 0x1c) != 0) {
              iVar7 = FUN_02083ab8();
              FUN_0207b000(*(undefined4 *)(iVar7 + 0xec),*(undefined4 *)(iVar6 + iVar8 * 4 + 0x1c));
              *(undefined4 *)(iVar6 + iVar8 * 4 + 0x1c) = 0;
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < 2);
        }
        iVar8 = FUN_02175628(param_1);
        if (*(char *)(*(int *)(*(int *)(iVar8 + 4) + 0x10) + 0x108) == '\x01') {
          FUN_02028330(*(undefined4 *)(piVar9[0xc] + 4));
          FUN_02175aa4(piVar9[2],1);
          FUN_02176d14(piVar9[2]);
          FUN_02174f7c(piVar9);
          FUN_02174fbc(piVar9);
        }
        *piVar12 = (int)piVar9;
        piVar12[9] = piVar12[9] | 2;
        piVar12[0xb] = 0;
      }
    }
  }
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar11 = *(int *)(*(int *)(iVar8 + 0xc) + 0x570);
  if (iVar11 == 0) {
    if (*(int *)(iVar8 + 4) != 0) {
      *(uint *)(iVar8 + 0x24) = *(uint *)(iVar8 + 0x24) & 0xfffffffb;
      *(uint *)(*(int *)(iVar8 + 4) + 0xa8) = *(uint *)(*(int *)(iVar8 + 4) + 0xa8) & 0xfffffeff;
      FUN_021760a4(*(undefined4 *)(iVar8 + 4));
      FUN_020282f4(*(undefined4 *)(*(int *)(*(int *)(iVar8 + 4) + 0x30) + 4));
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  else if (*(int *)(iVar8 + 4) == 0) {
    for (puVar10 = *(undefined4 **)(iVar8 + 0x1c); puVar10 != (undefined4 *)0x0;
        puVar10 = (undefined4 *)*puVar10) {
      piVar9 = (int *)puVar10[2];
      if (iVar11 == *piVar9) {
        *(int **)(iVar8 + 4) = piVar9;
        FUN_02028330(*(undefined4 *)(piVar9[0xc] + 4));
        piVar9[0x1e] = 0;
        if (piVar9[3] != 0) {
          uVar1 = *(undefined1 *)(piVar9[1] + 8);
          iVar11 = FUN_021751cc(piVar9,uVar1);
          piVar9[9] = iVar11;
          *(undefined1 *)(piVar9 + 0x31) = uVar1;
          iVar11 = FUN_021733b4();
          iVar11 = *(int *)(piVar9[3] + iVar11 * 4 + 8);
          if (-1 < iVar11) {
            iVar11 = piVar9[3] + iVar11;
            piVar9[4] = iVar11;
            if (iVar11 != 0) {
              bVar13 = false;
              iVar6 = 0;
              iVar11 = iVar11 + 0x9c;
              goto LAB_021759e0;
            }
          }
        }
        break;
      }
    }
  }
LAB_02175a5c:
  piVar12[0xc] = *(int *)(piVar12[3] + 0x5c8);
  *(undefined1 *)((int)piVar12 + 0x36) = *(undefined1 *)(piVar12[3] + 0x5cd);
  uVar3 = FUN_0200d12c((int)*(char *)(piVar12[3] + 0x5cd) << 8,*(undefined1 *)((int)piVar12 + 0x37))
  ;
  *(undefined2 *)(piVar12 + 0xd) = uVar3;
  piVar12[0xb] = piVar12[0xb] + 1;
  return;
LAB_021759e0:
  if ((int)(uint)*(byte *)(piVar9[4] + 0xc) <= iVar6) goto LAB_021759f0;
  if (*(char *)(iVar11 + 0x1b) != '\0') {
    piVar9[0x2a] = piVar9[0x2a] | 0x100;
  }
  if ((-1 < *(char *)(iVar11 + 0x1a)) && (*(char *)(iVar11 + 0x18) == '\x01')) {
    iVar7 = *(int *)(iVar11 + 0x10);
    if (iVar7 < 1) {
      iVar7 = *(int *)(iVar11 + 0xc);
    }
    if (iVar7 < 1) {
      bVar13 = true;
      goto LAB_021759f0;
    }
  }
  iVar6 = iVar6 + 1;
  iVar11 = iVar11 + 0x20;
  goto LAB_021759e0;
LAB_021759f0:
  if (bVar13) {
    *(uint *)(iVar8 + 0x24) = *(uint *)(iVar8 + 0x24) | 4;
  }
  goto LAB_02175a5c;
}

