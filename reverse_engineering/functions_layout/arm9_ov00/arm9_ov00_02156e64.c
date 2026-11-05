
void FUN_02156e64(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  uint local_30;
  int local_2c;
  int local_28;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_020208ec(0);
  iVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x128))();
  if (iVar3 == 0) {
    *(undefined4 *)(iVar7 + 0x120) = 0;
  }
  else {
    iVar3 = *(int *)(iVar7 + 0x120);
    cVar1 = '\0';
    if (iVar3 != 0) {
      cVar1 = *(char *)(iVar3 + 0x35);
    }
    if (iVar3 == 0 || cVar1 == '\0') {
      iVar4 = FUN_020208ec(0);
      uVar9 = 0xffffffff;
      iVar3 = 0;
      iVar5 = (**(code **)(**(int **)(iVar4 + 4) + 0x130))();
      if (iVar5 != 0) {
        for (iVar5 = 0; iVar5 < *(int *)(iVar7 + 0x214); iVar5 = iVar5 + 1) {
          iVar8 = iVar5 * 0x48 + iVar7;
          if (*(char *)(iVar8 + 0x35) != '\0') {
            iVar10 = *(int *)(*(int *)(iVar8 + 4) + 8);
            FUN_0214e27c(auStack_40,iVar4);
            iVar6 = FUN_02157110((int)*(short *)(iVar8 + 8),auStack_40);
            if (iVar6 != 0) {
              FUN_0214e27c(auStack_3c,iVar4);
              iVar6 = FUN_02157124(auStack_3c,
                                   (int)*(short *)(iVar8 + 8) + (int)*(short *)(iVar8 + 0xc));
              if (iVar6 != 0) {
                FUN_0214e290(auStack_38,iVar4);
                iVar6 = FUN_02157110((int)*(short *)(iVar8 + 10),auStack_38);
                if (iVar6 != 0) {
                  FUN_0214e290(auStack_34,iVar4);
                  iVar6 = FUN_02157124(auStack_34,
                                       (int)*(short *)(iVar8 + 10) + (int)*(short *)(iVar8 + 0xe));
                  if (iVar6 != 0) {
                    FUN_02156048(&local_30,*(undefined4 *)(*(int *)(iVar10 + 4) + 100));
                    if (local_30 >> 0xc <= uVar9) {
                      iVar3 = iVar8;
                      uVar9 = local_30 >> 0xc;
                    }
                  }
                }
              }
            }
          }
        }
      }
      *(int *)(iVar7 + 0x120) = iVar3;
    }
    iVar3 = *(int *)(iVar7 + 0x120);
    if (iVar3 != 0) {
      FUN_0214e27c(&local_28,iVar2);
      *(short *)(iVar3 + 0x2c) = (short)((int)(local_28 + ((uint)(local_28 >> 0xb) >> 0x14)) >> 0xc)
      ;
      FUN_0214e290(&local_2c,iVar2);
      *(short *)(iVar3 + 0x2e) = (short)((int)(local_2c + ((uint)(local_2c >> 0xb) >> 0x14)) >> 0xc)
      ;
      *(undefined1 *)(iVar3 + 0x32) = 1;
      iVar4 = *(int *)(iVar3 + 0x18);
      iVar7 = (int)*(short *)(iVar3 + 0x2c) - (iVar4 >> 3);
      iVar2 = ((int)*(short *)(iVar3 + 0x2e) - (*(int *)(iVar3 + 0x1c) >> 3)) + -0xb6;
      if (*(char *)(iVar3 + 0x33) == '\0') {
        if ((iVar7 < 9) || (0x4ff < iVar4)) {
          if ((iVar7 < -8) && (0x80 < iVar4)) {
            *(int *)(iVar3 + 0x28) = iVar7 + -6;
            *(undefined4 *)(iVar3 + 0x10) = 2;
          }
          else if (iVar2 < -0x28) {
            iVar2 = FUN_0200d12c(iVar2,3);
            *(int *)(iVar3 + 0x24) = iVar2 + -0x10;
            if (iVar2 + -0x10 < -0x50) {
              *(undefined4 *)(iVar3 + 0x24) = 0xffffffb0;
            }
            *(undefined4 *)(iVar3 + 0x10) = 3;
          }
        }
        else {
          *(int *)(iVar3 + 0x28) = iVar7 + 6;
          *(undefined4 *)(iVar3 + 0x10) = 2;
        }
      }
      else if ((iVar7 < 9) || (0x4ff < iVar4)) {
        if ((iVar7 < -8) && (0x80 < iVar4)) {
          *(int *)(iVar3 + 0x28) = iVar7 >> 2;
          *(undefined4 *)(iVar3 + 0x10) = 2;
        }
      }
      else {
        *(int *)(iVar3 + 0x28) = iVar7 >> 2;
        *(undefined4 *)(iVar3 + 0x10) = 2;
      }
    }
  }
  return;
}

