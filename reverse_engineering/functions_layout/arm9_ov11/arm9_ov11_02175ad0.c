
void FUN_02175ad0(int param_1)

{
  int iVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02175628(*(undefined4 *)(iVar7 + 0x30));
  iVar4 = FUN_02175628();
  iVar6 = 0;
  iVar4 = *(int *)(*(int *)(iVar4 + 4) + 0x10);
  iVar8 = 0;
  do {
    iVar1 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar7 + iVar1 + 0x6c) = 0;
  } while (iVar6 < 2);
  if (((*(uint *)(iVar4 + 0xd4) & 2) == 0) && ((*(uint *)(iVar7 + 0xa8) & 0x40) == 0)) {
    if ((*(uint *)(iVar7 + 0xa8) & 4) == 0) {
      do {
        iVar4 = *(int *)(iVar7 + iVar8 * 4 + 0x1c);
        if (iVar4 != 0) {
          FUN_0207b310(iVar4,1);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 2);
      iVar4 = 0;
      do {
        iVar6 = *(int *)(iVar7 + iVar4 * 4 + 0x14);
        if (iVar6 != 0) {
          FUN_0207b310(iVar6,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) & 0xfffffffd | 4;
    }
    else {
      iVar4 = FUN_0217bfe0();
      if (iVar4 == 0) {
        iVar4 = 0;
        do {
          iVar6 = *(int *)(iVar7 + iVar4 * 4 + 0x1c);
          if (iVar6 != 0) {
            FUN_0207b310(iVar6,1);
            FUN_021760e4(iVar7,iVar4,1);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 2);
      }
      else {
        iVar4 = 0;
        do {
          iVar6 = *(int *)(iVar7 + iVar4 * 4 + 0x1c);
          if (iVar6 != 0) {
            FUN_0207b310(iVar6,0);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 2);
      }
    }
  }
  else {
    iVar4 = 0;
    if ((*(uint *)(iVar7 + 0xa8) & 2) == 0) {
      do {
        iVar6 = *(int *)(iVar7 + iVar4 * 4 + 0x14);
        if (iVar6 != 0) {
          FUN_0207b310(iVar6,1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      iVar4 = 0;
      do {
        iVar6 = *(int *)(iVar7 + iVar4 * 4 + 0x1c);
        if (iVar6 != 0) {
          FUN_0207b310(iVar6,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) & 0xfffffffb | 2;
    }
    else {
      do {
        if (*(int *)(iVar7 + iVar4 * 4 + 0x14) != 0) {
          FUN_021760e4(iVar7,iVar4,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
    }
  }
  if ((*(uint *)(iVar7 + 0xa8) & 0x200) != 0) {
    if (*(int *)(iVar7 + 0x24) != 0) {
      FUN_021760e4(iVar7,0,2);
    }
    iVar4 = *(int *)(iVar7 + 0x10);
    if (iVar4 != 0) {
      iVar8 = iVar4 + 0x9c;
      bVar2 = true;
      for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(iVar4 + 0xc); iVar6 = iVar6 + 1) {
        uVar9 = (uint)*(ushort *)(iVar7 + 0xbe);
        if (((int)*(short *)(iVar8 + 0x14) <= (int)uVar9) &&
           ((int)uVar9 <= (int)*(short *)(iVar8 + 0x16))) {
          *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) | 8;
          break;
        }
        if ((int)uVar9 < (int)*(short *)(iVar8 + 0x14)) {
          bVar2 = false;
        }
        iVar8 = iVar8 + 0x20;
      }
      if (((*(uint *)(iVar7 + 0xa8) & 8) == 0) && (bVar2)) {
        *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) | 0x10;
      }
      else {
        *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) & 0xffffffef;
      }
    }
    *(short *)(iVar7 + 0xbe) = *(short *)(iVar7 + 0xbe) + 1;
    return;
  }
  *(undefined4 *)(iVar7 + 0x78) = 0;
  FUN_02175628(*(undefined4 *)(iVar7 + 0x30));
  iVar4 = FUN_02175628();
  iVar6 = *(int *)(*(int *)(iVar4 + 4) + 0x10);
  iVar4 = FUN_0217bfe0(iVar6);
  if (iVar4 == 0) {
    if (*(int *)(iVar7 + 0x24) != 0) {
      FUN_021760a4(iVar7);
      *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) & 0xfffffe7f;
    }
  }
  else {
    if (*(int *)(iVar7 + 0x24) == 0) {
      *(undefined1 *)(iVar7 + 0xc4) = *(undefined1 *)(*(int *)(iVar6 + 0x20) + 0xca);
      if ('\f' < *(char *)(iVar7 + 0xc4)) {
        *(char *)(iVar7 + 0xc4) =
             *(char *)(iVar7 + 0xc4) + (*(char *)(*(int *)(iVar7 + 4) + 8) + -3) * '\x02';
      }
      uVar5 = FUN_021751cc(iVar7,(int)*(char *)(iVar7 + 0xc4),0);
      *(undefined4 *)(iVar7 + 0x24) = uVar5;
      if (*(int *)(iVar7 + 0xc) == 0) {
        *(undefined4 *)(iVar7 + 0x10) = 0;
      }
      else {
        uVar5 = FUN_021733b4((int)*(char *)(iVar7 + 0xc4));
        uVar5 = FUN_02174f58(*(undefined4 *)(iVar7 + 0xc),uVar5);
        *(undefined4 *)(iVar7 + 0x10) = uVar5;
      }
    }
    else if (*(char *)(iVar7 + 0xc4) == *(char *)(*(int *)(iVar6 + 0x20) + 0xca)) {
      FUN_021760e4(iVar7,0,2);
    }
    else {
      iVar4 = FUN_02083ab8();
      FUN_0207b000(*(undefined4 *)(iVar4 + 0xec),*(undefined4 *)(iVar7 + 0x24));
      *(undefined1 *)(iVar7 + 0xc4) = *(undefined1 *)(*(int *)(iVar6 + 0x20) + 0xca);
      if ('\f' < *(char *)(iVar7 + 0xc4)) {
        *(char *)(iVar7 + 0xc4) =
             *(char *)(iVar7 + 0xc4) + (*(char *)(*(int *)(iVar7 + 4) + 8) + -3) * '\x02';
      }
      uVar5 = FUN_021751cc(iVar7,(int)*(char *)(iVar7 + 0xc4),0);
      *(undefined4 *)(iVar7 + 0x24) = uVar5;
      *(undefined2 *)(iVar7 + 0xbe) = 0;
    }
    *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) & 0xfffffff7;
    if (*(int *)(iVar7 + 0x10) != 0) {
      iVar6 = *(int *)(iVar7 + 0x10) + 0x9c;
      bVar2 = true;
      for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(*(int *)(iVar7 + 0x10) + 0xc); iVar4 = iVar4 + 1)
      {
        if (*(char *)(iVar6 + 0x1b) != '\0') {
          if (*(byte *)(iVar6 + 0x18) < 4) {
            *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) | 0x80;
          }
          else {
            *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) | 0x100;
          }
        }
        uVar9 = (uint)*(ushort *)(iVar7 + 0xbe);
        if (((int)*(short *)(iVar6 + 0x14) <= (int)uVar9) &&
           ((int)uVar9 <= (int)*(short *)(iVar6 + 0x16))) {
          *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) | 8;
          break;
        }
        if ((int)uVar9 < (int)*(short *)(iVar6 + 0x14)) {
          bVar2 = false;
        }
        iVar6 = iVar6 + 0x20;
      }
      if (((*(uint *)(iVar7 + 0xa8) & 8) == 0) && (bVar2)) {
        *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) | 0x10;
      }
      else {
        *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) & 0xffffffef;
      }
    }
    *(short *)(iVar7 + 0xbe) = *(short *)(iVar7 + 0xbe) + 1;
  }
  iVar4 = 0;
  do {
    iVar6 = iVar4 * 4;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(iVar7 + iVar6 + 0x7c) = 0;
  } while (iVar4 < 2);
  FUN_02175628(*(undefined4 *)(iVar7 + 0x30));
  iVar4 = FUN_02175628();
  iVar6 = *(int *)(*(int *)(iVar4 + 4) + 0x10);
  iVar4 = FUN_0217335c(iVar6,0);
  if ((iVar4 == 0) || ((*(uint *)(iVar6 + 0xd4) & 2) == 0)) {
    if ((*(uint *)(iVar7 + 0xa8) & 0x20) != 0) {
      iVar4 = 0;
      do {
        iVar6 = *(int *)(iVar7 + iVar4 * 4 + 0x28);
        if (iVar6 != 0) {
          FUN_0207b310(iVar6,0);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) & 0xffffffdf;
    }
  }
  else {
    if ((*(uint *)(iVar7 + 0xa8) & 0x20) == 0) {
      iVar4 = 0;
      do {
        iVar6 = *(int *)(iVar7 + iVar4 * 4 + 0x28);
        if (iVar6 != 0) {
          FUN_0207b310(iVar6,1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 2);
      *(uint *)(iVar7 + 0xa8) = *(uint *)(iVar7 + 0xa8) | 0x20;
    }
    iVar4 = 0;
    do {
      FUN_021760e4(iVar7,iVar4,3);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
  }
  uVar3 = FUN_0200d12c(*(int *)(iVar7 + 100) << 8,*(undefined4 *)(iVar7 + 0x60));
  *(undefined2 *)(iVar7 + 0xbc) = uVar3;
  return;
}

