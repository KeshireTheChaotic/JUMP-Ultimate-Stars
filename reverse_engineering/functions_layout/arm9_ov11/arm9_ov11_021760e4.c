
void FUN_021760e4(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  
                    /* JUS-TAG source_file_inferred="BattleAI_Deck.cpp" */
  uVar5 = 0;
  FUN_02175628(*(undefined4 *)(param_1 + 0x30));
  iVar2 = FUN_02175628();
  iVar6 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  iVar2 = FUN_02175628(*(undefined4 *)(iVar6 + 0x1c));
  uVar3 = *(uint *)(iVar6 + 0xd4);
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  switch(param_3) {
  case 0:
    iVar6 = *(int *)(param_1 + param_2 * 4 + 0x14);
    break;
  case 1:
    iVar6 = *(int *)(param_1 + param_2 * 4 + 0x1c);
    break;
  case 2:
    iVar6 = *(int *)(param_1 + 0x24);
    break;
  case 3:
    iVar6 = *(int *)(param_1 + param_2 * 4 + 0x28);
    break;
  default:
    return;
  }
  if (iVar6 == 0) {
    return;
  }
  for (puVar7 = *(undefined4 **)(iVar6 + 8); puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)*puVar7) {
    *(byte *)(puVar7[7] + 0x20) = *(byte *)(puVar7[7] + 0x20) & 0xfe;
  }
  puVar7 = *(undefined4 **)(iVar6 + 0x10);
  do {
    if (puVar7 == (undefined4 *)0x0) {
      if (param_3 == 2) {
        *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | uVar5;
        return;
      }
      if (param_3 == 3) {
        *(uint *)(param_1 + 0x7c + param_2 * 4) = *(uint *)(param_1 + 0x7c + param_2 * 4) | uVar5;
      }
      else {
        *(uint *)(param_1 + 0x6c + param_2 * 4) = *(uint *)(param_1 + 0x6c + param_2 * 4) | uVar5;
      }
      return;
    }
    if ((*(byte *)(puVar7 + 4) & 4) == 0) {
      uVar4 = *(uint *)(puVar7[3] + 0x10);
      if ((uVar4 & 0x20000000) != 0) {
        iVar6 = *(int *)(puVar7[2] + 0x1c);
        if (param_3 == 3) {
          bVar1 = false;
          for (puVar9 = *(undefined4 **)(iVar2 + 4); puVar9 != (undefined4 *)0x0;
              puVar9 = (undefined4 *)*puVar9) {
            if (((*(char *)(puVar9 + 5) != '\x01') ||
                (*(short *)((int)puVar9 + (uVar3 >> 0x1c) * 2 + 0xc) < 1)) &&
               (*(int *)(puVar9[2] + 0x10) == *(int *)(*(int *)(puVar7[3] + 0x1c) + 0xc))) {
              bVar1 = true;
              break;
            }
          }
          if (!bVar1) goto LAB_021762b8;
          uVar5 = uVar5 | uVar4 & 0x700;
        }
        else if (param_3 == 2) {
          bVar1 = false;
          iVar11 = 0;
          do {
            iVar10 = *(int *)(iVar6 + iVar11 * 4 + 8);
            if (iVar10 != 0) {
              iVar8 = *(int *)(iVar10 + 0xc);
              if (iVar8 < 1) {
                iVar8 = *(int *)(iVar10 + 0x10);
              }
              if (((iVar8 < 1) && (-1 < *(char *)(iVar10 + 0x1a))) &&
                 (*(char *)(iVar10 + 0x1b) != '\0')) {
                bVar1 = true;
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < 5);
          if (bVar1) goto LAB_021762b8;
          uVar5 = uVar5 | uVar4 & 0xff;
        }
        else {
          uVar5 = uVar5 | uVar4 & 0xff;
        }
        *(byte *)(iVar6 + 0x20) = *(byte *)(iVar6 + 0x20) | 1;
      }
    }
LAB_021762b8:
    puVar7 = (undefined4 *)*puVar7;
  } while( true );
}

