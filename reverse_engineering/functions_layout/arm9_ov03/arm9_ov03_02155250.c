
void FUN_02155250(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int local_54;
  undefined1 auStack_50 [20];
  undefined2 local_3c;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (1 < uVar1) {
    iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    iVar2 = FUN_0214fb7c(*(undefined4 *)(iVar7 + 4));
    iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
    if (*(int *)(*(int *)(param_1 + 4) + 0x124) == 0) {
      if (0x9f < *(uint *)(iVar7 + 0x56c)) {
        uVar1 = *(uint *)(iVar7 + 0x56c) - 0xa0 >> 8;
        if (*(char *)(iVar7 + 0x58b) == '\x05') {
          iVar6 = 0;
          do {
            iVar3 = FUN_02154a7c(param_1,iVar6 + 3);
            iVar5 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
            iVar8 = *(int *)(iVar7 + 0x56c);
            FUN_0215523c(&iStack_5c,iVar3);
            iVar8 = iStack_5c + iVar8 * 0x1000 + -0xa0000;
            if ((int)(iVar8 + ((uint)(iVar8 >> 0xb) >> 0x14)) >> 0xc < iVar5 * 0x100 + 0xe0) {
              for (iVar8 = iVar6 + uVar1 * -8 + 0x14; iVar8 < 0; iVar8 = iVar8 + 0x14) {
              }
              for (; 0x13 < iVar8; iVar8 = iVar8 + -8) {
              }
              uVar4 = FUN_0214d784(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar2 + iVar8 + 0x74))
              ;
              FUN_02051890(uVar4,auStack_50,0x14);
              local_3c = 0;
              piVar9 = *(int **)(iVar3 + 4);
              (**(code **)(*(int *)piVar9[0x19] + 0x70))();
              (**(code **)(*piVar9 + 0xc4))();
              piVar9 = *(int **)(*(int *)(iVar3 + 4) + 100);
              (**(code **)(*piVar9 + 0x6c))(piVar9,auStack_50,0xffffffff);
              if (iVar5 != 0) {
                (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),iVar5 + -1);
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 8);
        }
        else {
          iVar6 = 0;
          do {
            iVar3 = FUN_02154a7c(param_1,iVar6 + 3);
            iVar8 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
            FUN_0215523c(&iStack_60,iVar3);
            if (iVar8 * 0x100 + 0x200U <
                (uint)(*(int *)(iVar7 + 0x56c) +
                      ((int)(iStack_60 + ((uint)(iStack_60 >> 0xb) >> 0x14)) >> 0xc) + -0x80)) {
              for (iVar5 = iVar6 + (uVar1 + 1) * -8 + 0x14; iVar5 < 0; iVar5 = iVar5 + 0x14) {
              }
              uVar4 = FUN_0214d784(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar2 + iVar5 + 0x74))
              ;
              FUN_02051890(uVar4,auStack_50,0x14);
              local_3c = 0;
              piVar9 = *(int **)(iVar3 + 4);
              (**(code **)(*(int *)piVar9[0x19] + 0x70))();
              (**(code **)(*piVar9 + 0xc4))();
              piVar9 = *(int **)(*(int *)(iVar3 + 4) + 100);
              (**(code **)(*piVar9 + 0x6c))(piVar9,auStack_50,0xffffffff);
              (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),iVar8 + 1);
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 8);
        }
      }
    }
    else {
      uVar1 = *(uint *)(iVar7 + 0x56c);
      if (*(char *)(iVar7 + 0x58b) == '\x05') {
        iVar6 = 0;
        do {
          iVar3 = FUN_02154a7c(param_1,iVar6 + 3);
          iVar5 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
          iVar8 = *(int *)(iVar7 + 0x56c);
          FUN_0215523c(&local_54,iVar3);
          iVar8 = local_54 + iVar8 * 0x1000;
          if ((int)(iVar8 + ((uint)(iVar8 >> 0xb) >> 0x14)) >> 0xc < iVar5 * 0x100 + 0xe0) {
            for (iVar8 = iVar6 + iVar5 * -8 + 0x14; iVar8 < 0; iVar8 = iVar8 + 0x14) {
            }
            uVar4 = FUN_0214d784(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar2 + iVar8 + 0x74));
            FUN_02051890(uVar4,auStack_50,0x14);
            local_3c = 0;
            piVar9 = *(int **)(iVar3 + 4);
            (**(code **)(*(int *)piVar9[0x19] + 0x70))();
            (**(code **)(*piVar9 + 0xc4))();
            piVar9 = *(int **)(*(int *)(iVar3 + 4) + 100);
            (**(code **)(*piVar9 + 0x6c))(piVar9,auStack_50,0xffffffff);
            if (iVar5 != 0) {
              (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),iVar5 + -1);
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 8);
      }
      else {
        iVar6 = 0;
        do {
          iVar3 = FUN_02154a7c(param_1,iVar6 + 3);
          iVar8 = *(int *)(*(int *)(iVar3 + 4) + 0x10);
          FUN_0215523c(&local_58,iVar3);
          if (iVar8 * 0x100 + 0x200U <
              (uint)(*(int *)(iVar7 + 0x56c) +
                    ((int)(local_58 + ((uint)(local_58 >> 0xb) >> 0x14)) >> 0xc) + 0x20)) {
            for (iVar5 = iVar6 + ((uVar1 >> 8) + 1) * -8 + 0x14; iVar5 < 0; iVar5 = iVar5 + 0x14) {
            }
            uVar4 = FUN_0214d784(*(undefined1 *)(iVar7 + 2),*(undefined1 *)(iVar2 + iVar5 + 0x74));
            FUN_02051890(uVar4,auStack_50,0x14);
            local_3c = 0;
            piVar9 = *(int **)(iVar3 + 4);
            (**(code **)(*(int *)piVar9[0x19] + 0x70))();
            (**(code **)(*piVar9 + 0xc4))();
            piVar9 = *(int **)(*(int *)(iVar3 + 4) + 100);
            (**(code **)(*piVar9 + 0x6c))(piVar9,auStack_50,0xffffffff);
            (**(code **)(**(int **)(iVar3 + 4) + 0x24))(*(int **)(iVar3 + 4),iVar8 + 1);
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 8);
      }
    }
  }
  return;
}

