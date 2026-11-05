
/* WARNING: Removing unreachable block (ram,0x0217590c) */

void FUN_0217583c(int *param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *unaff_r6;
  int unaff_r7;
  int *unaff_r8;
  int *unaff_r9;
  int unaff_r10;
  bool bVar11;
  
  do {
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
    FUN_02174fbc(param_1);
    param_1 = unaff_r9;
    do {
      *unaff_r8 = (int)param_1;
      unaff_r8[9] = unaff_r8[9] | 2;
      unaff_r8[0xb] = 0;
      while( true ) {
        do {
          unaff_r6 = (int *)*unaff_r6;
          if (unaff_r6 == (int *)0x0) {
            iVar9 = *(int *)(*(int *)(unaff_r10 + 4) + 0x10);
            iVar7 = *(int *)(*(int *)(iVar9 + 0xc) + 0x570);
            if (iVar7 != 0) {
              if (*(int *)(iVar9 + 4) != 0) goto LAB_02175a5c;
              puVar6 = *(undefined4 **)(iVar9 + 0x1c);
              goto LAB_02175a08;
            }
            if (*(int *)(iVar9 + 4) != 0) {
              *(uint *)(iVar9 + 0x24) = *(uint *)(iVar9 + 0x24) & 0xfffffffb;
              *(uint *)(*(int *)(iVar9 + 4) + 0xa8) =
                   *(uint *)(*(int *)(iVar9 + 4) + 0xa8) & 0xfffffeff;
              FUN_021760a4(*(undefined4 *)(iVar9 + 4));
              FUN_020282f4(*(undefined4 *)(*(int *)(*(int *)(iVar9 + 4) + 0x30) + 4));
            }
            *(undefined4 *)(iVar9 + 4) = 0;
            goto LAB_02175a5c;
          }
          param_1 = (int *)unaff_r6[2];
          sVar2 = *(short *)(*param_1 + 0x18);
          param_1[0x19] = (int)sVar2;
          if ((sVar2 < 1) || ((*(uint *)(*param_1 + 0x3c) & 0x1000) != 0)) {
            param_1[0x2a] = param_1[0x2a] & 0xfffff7ff;
          }
          else {
            *(char *)(unaff_r8 + 0xf) = (char)unaff_r8[0xf] + '\x01';
            param_1[0x2a] = param_1[0x2a] | 0x800;
          }
        } while (unaff_r7 != *param_1);
        piVar10 = (int *)*unaff_r8;
        if (piVar10 != param_1) break;
        iVar7 = *(int *)(param_1[0xc] + 4);
        uVar4 = (*(byte *)(iVar7 + 0x28) & 3) >> 1;
        bVar11 = uVar4 == 0;
        if (bVar11) {
          uVar4 = *(uint *)(*(int *)(iVar7 + 0x34) + 0x244);
        }
        if (!bVar11 || uVar4 != 0) {
          FUN_02028330(*(undefined4 *)(param_1[0xc] + 4));
        }
        if (param_1[7] == 0) {
          FUN_02174fbc(param_1);
        }
        if (param_1[10] == 0) {
          FUN_02174f7c(param_1);
        }
      }
      if (piVar10 != (int *)0x0) {
        FUN_020282f4(*(undefined4 *)(piVar10[0xc] + 4));
        FUN_02175aa4(*(undefined4 *)(*unaff_r8 + 8),0);
        FUN_02176d14(*(undefined4 *)(*unaff_r8 + 8));
        iVar7 = 0;
        iVar9 = *unaff_r8;
        do {
          if (*(int *)(iVar9 + iVar7 * 4 + 0x28) != 0) {
            iVar5 = FUN_02083ab8();
            FUN_0207b000(*(undefined4 *)(iVar5 + 0xec),*(undefined4 *)(iVar9 + iVar7 * 4 + 0x28));
            iVar5 = iVar9 + iVar7 * 4;
            *(undefined4 *)(iVar5 + 0x28) = 0;
            *(undefined4 *)(iVar5 + 0x7c) = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
        iVar7 = 0;
        iVar9 = *unaff_r8;
        do {
          if (*(int *)(iVar9 + iVar7 * 4 + 0x1c) != 0) {
            iVar5 = FUN_02083ab8();
            FUN_0207b000(*(undefined4 *)(iVar5 + 0xec),*(undefined4 *)(iVar9 + iVar7 * 4 + 0x1c));
            *(undefined4 *)(iVar9 + iVar7 * 4 + 0x1c) = 0;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
      }
      iVar7 = FUN_02175628();
    } while (*(char *)(*(int *)(*(int *)(iVar7 + 4) + 0x10) + 0x108) != '\x01');
    FUN_02028330(*(undefined4 *)(param_1[0xc] + 4));
    FUN_02175aa4(param_1[2],1);
    FUN_02176d14(param_1[2]);
    FUN_02174f7c(param_1);
    unaff_r9 = param_1;
  } while( true );
LAB_02175a08:
  if (puVar6 == (undefined4 *)0x0) goto LAB_02175a5c;
  piVar10 = (int *)puVar6[2];
  if (iVar7 == *piVar10) {
    *(int **)(iVar9 + 4) = piVar10;
    FUN_02028330(*(undefined4 *)(piVar10[0xc] + 4));
    piVar10[0x1e] = 0;
    if (piVar10[3] != 0) {
      uVar1 = *(undefined1 *)(piVar10[1] + 8);
      iVar7 = FUN_021751cc(piVar10,uVar1);
      piVar10[9] = iVar7;
      *(undefined1 *)(piVar10 + 0x31) = uVar1;
      iVar7 = FUN_021733b4();
      iVar7 = *(int *)(piVar10[3] + iVar7 * 4 + 8);
      if (-1 < iVar7) {
        iVar7 = piVar10[3] + iVar7;
        piVar10[4] = iVar7;
        if (iVar7 != 0) {
          bVar11 = false;
          iVar5 = 0;
          iVar7 = iVar7 + 0x9c;
          goto LAB_021759e0;
        }
      }
    }
    goto LAB_02175a5c;
  }
  puVar6 = (undefined4 *)*puVar6;
  goto LAB_02175a08;
LAB_021759e0:
  if ((int)(uint)*(byte *)(piVar10[4] + 0xc) <= iVar5) {
LAB_021759f0:
    if (bVar11) {
      *(uint *)(iVar9 + 0x24) = *(uint *)(iVar9 + 0x24) | 4;
    }
LAB_02175a5c:
    unaff_r8[0xc] = *(int *)(unaff_r8[3] + 0x5c8);
    *(undefined1 *)((int)unaff_r8 + 0x36) = *(undefined1 *)(unaff_r8[3] + 0x5cd);
    uVar3 = FUN_0200d12c((int)*(char *)(unaff_r8[3] + 0x5cd) << 8,
                         *(undefined1 *)((int)unaff_r8 + 0x37));
    *(undefined2 *)(unaff_r8 + 0xd) = uVar3;
    unaff_r8[0xb] = unaff_r8[0xb] + 1;
    return;
  }
  if (*(char *)(iVar7 + 0x1b) != '\0') {
    piVar10[0x2a] = piVar10[0x2a] | 0x100;
  }
  if ((-1 < *(char *)(iVar7 + 0x1a)) && (*(char *)(iVar7 + 0x18) == '\x01')) {
    iVar8 = *(int *)(iVar7 + 0x10);
    if (iVar8 < 1) {
      iVar8 = *(int *)(iVar7 + 0xc);
    }
    if (iVar8 < 1) {
      bVar11 = true;
      goto LAB_021759f0;
    }
  }
  iVar5 = iVar5 + 1;
  iVar7 = iVar7 + 0x20;
  goto LAB_021759e0;
}

