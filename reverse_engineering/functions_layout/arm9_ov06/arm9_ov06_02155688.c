
void FUN_02155688(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  ushort *puVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  
  pcVar7 = *(char **)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(pcVar7 + 0x88) != 0) {
    uStack_20 = param_4;
    iVar1 = FUN_0215594c();
    if (*(int *)(pcVar7 + 0x94) != iVar1) {
      uVar2 = FUN_0215594c(*(undefined4 *)(pcVar7 + 0x88));
      *(undefined4 *)(pcVar7 + 0x94) = uVar2;
      FUN_021554e0(pcVar7);
      FUN_02028330(*(undefined4 *)(*(int *)(pcVar7 + 0x88) + 4));
    }
    if ((*(uint *)(pcVar7 + 0x90) & 0x10000000) == 0) {
      pcVar7[0xa1] = '\0';
      iVar1 = -1;
      pcVar10 = pcVar7;
      for (iVar8 = 7; iVar8 != 0; iVar8 = iVar8 + -1) {
        if ((pcVar10[1] != -1) &&
           (iVar3 = (*(code *)(&PTR_LAB_02172040)[*pcVar10])(pcVar7,pcVar10), iVar3 != 0)) {
          iVar1 = (int)pcVar10[1];
          pcVar10[1] = -1;
          break;
        }
        pcVar10 = pcVar10 + 0x10;
      }
      pcVar7[0x61] = -1;
      if (iVar1 != -1) {
        piVar4 = *(int **)(*(int *)(*(int *)(pcVar7 + 0x88) + 4) + 0x68);
        (**(code **)(*piVar4 + 0xec))(piVar4,iVar1);
      }
      FUN_02155998(&local_24,*(undefined4 *)(pcVar7 + 0x88),0);
      if (*(int *)(pcVar7 + 0x98) * 0x1000 != local_24) {
        FUN_02155998(&local_28,*(undefined4 *)(pcVar7 + 0x88),0);
        *(int *)(pcVar7 + 0x98) = (int)(local_28 + ((uint)(local_28 >> 0xb) >> 0x14)) >> 0xc;
        for (uVar9 = 0;
            uVar6 = (**(code **)(**(int **)(*(int *)(*(int *)(pcVar7 + 0x88) + 4) + 0x68) + 0x144))
                              (), uVar9 < uVar6; uVar9 = uVar9 + 1) {
          piVar4 = *(int **)(*(int *)(*(int *)(pcVar7 + 0x88) + 4) + 0x68);
          puVar5 = (ushort *)(**(code **)(*piVar4 + 0x140))(piVar4,uVar9);
          (*(code *)(&PTR_FUN_0217200c)[(int)(*puVar5 & 0xff00) >> 8])(pcVar7);
        }
        if (*(int *)(pcVar7 + 0x7c) != 0) {
          uVar9 = *(uint *)(pcVar7 + 0x90);
          if ((uVar9 & 0x10000) != 0) {
            uVar6 = *(uint *)(*(int *)(*(int *)(pcVar7 + 0x7c) + 0x10) + 0x78);
            if (((uVar6 & 4) == 0) && ((uVar6 & 8) == 0)) {
              *(uint *)(pcVar7 + 0x90) = uVar9 & 0xfffdffff;
            }
            else if ((uVar9 & 0x20000) == 0) {
              *(uint *)(pcVar7 + 0x90) = *(uint *)(pcVar7 + 0x90) | 0x20000;
              FUN_021567e8(pcVar7);
            }
          }
          if ((*(uint *)(pcVar7 + 0x90) & 0x40000) != 0) {
            iVar1 = FUN_020838c4(*(undefined4 *)(pcVar7 + 0x7c),0x400);
            uVar9 = *(uint *)(pcVar7 + 0x90);
            if (iVar1 == 0) {
              *(uint *)(pcVar7 + 0x90) = uVar9 & 0xfff7ffff;
            }
            else if ((uVar9 & 0x80000) == 0) {
              *(uint *)(pcVar7 + 0x90) = uVar9 | 0x80000;
              FUN_021567e8(pcVar7);
            }
          }
          if (pcVar7[0xa0] != '\0') {
            pcVar7[0xa0] = pcVar7[0xa0] + -1;
            if (*(short *)(pcVar7 + 0x9c) != 0) {
              *(short *)(*(int *)(*(int *)(*(int *)(pcVar7 + 0x7c) + 0x10) + 0x5c) + 0x2c) =
                   *(short *)(pcVar7 + 0x9c);
            }
            if (*(short *)(pcVar7 + 0x9e) != 0) {
              *(short *)(*(int *)(*(int *)(*(int *)(pcVar7 + 0x7c) + 0x10) + 0x5c) + 0x2e) =
                   *(short *)(pcVar7 + 0x9e);
            }
          }
        }
      }
      iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(pcVar7 + 0x88) + 4) + 0x68) + 0x68))();
      if (iVar1 != 0) {
        *(uint *)(pcVar7 + 0x90) = *(uint *)(pcVar7 + 0x90) | 0x10000000;
      }
    }
  }
  return;
}

