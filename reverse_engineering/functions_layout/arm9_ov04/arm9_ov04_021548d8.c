
void FUN_021548d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar6 + 0x41) != '\0') {
    uStack_18 = param_4;
    for (iVar7 = 0; iVar3 = FUN_0214f72c(), iVar7 < iVar3; iVar7 = iVar7 + 1) {
      if (*(int *)(iVar6 + iVar7 * 4 + 0x44) < 0) {
        if (*(char *)(iVar6 + 0x42) == '\0') {
          piVar1 = (int *)FUN_02028920(iVar7);
          iVar3 = FUN_020208ec(iVar7);
        }
        else {
          piVar1 = (int *)FUN_020875b0();
          iVar3 = FUN_020875d8(iVar7);
        }
        iVar4 = *piVar1;
        uVar2 = *(uint *)(iVar4 + *(int *)(iVar4 + 0x70) * 4 + 0x18) &
                ~*(uint *)(iVar4 + *(int *)(iVar4 + 0x74) * 4 + 0x18);
        if ((uVar2 & 0x40) == 0) {
          if ((uVar2 & 0x80) == 0) {
            if ((uVar2 & 0x10) == 0) {
              if ((uVar2 & 0x20) == 0) {
                iVar4 = (**(code **)(**(int **)(iVar3 + 4) + 0x130))();
                if (iVar4 != 0) {
                  iVar3 = *(int *)(*(int *)(iVar3 + 4) + 0x50);
                  iVar5 = *(int *)(iVar3 + 0x10);
                  iVar3 = *(int *)(iVar3 + 0xc);
                  iVar4 = (int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc;
                  iVar5 = (int)(iVar5 + ((uint)(iVar5 >> 0xb) >> 0x14)) >> 0xc;
                  for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
                    if ((((4 < iVar4) && (iVar4 < 0xfb)) && (iVar3 * 0x2f + 5 <= iVar5)) &&
                       (iVar5 <= iVar3 * 0x2f + 0x2a)) goto LAB_02154a20;
                  }
                }
                iVar3 = -1;
              }
              else {
                iVar3 = 3;
              }
            }
            else {
              iVar3 = 2;
            }
          }
          else {
            iVar3 = 1;
          }
        }
        else {
          iVar3 = 0;
        }
LAB_02154a20:
        *(int *)(iVar6 + iVar7 * 4 + 0x44) = iVar3;
        if ((-1 < iVar3) && (iVar3 = FUN_0214f704(), iVar7 == iVar3)) {
          FUN_0207342c(0x78,0xb);
          iVar3 = *(int *)(iVar6 + iVar7 * 4 + 0x44);
          FUN_02154750(iVar6,0);
          FUN_021545f8(*(undefined4 *)(iVar6 + 0x2c),0);
          iStack_1c = (iVar3 * 0x2f + 0x19) * 0x1000;
          uStack_20 = 0x80000;
          FUN_0214e1b8(*(undefined4 *)(iVar6 + 0x28),&uStack_20,&iStack_1c);
          piVar1 = *(int **)(*(int *)(iVar6 + 0x28) + 4);
          (**(code **)(*piVar1 + 0xd8))(piVar1,1);
        }
      }
    }
  }
  return;
}

