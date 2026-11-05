
void FUN_021556d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (2 < uVar1) {
    iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    iVar2 = FUN_0214fb7c(*(undefined4 *)(iVar8 + 4));
    iVar9 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
    FUN_0215523c(&local_2c,*(undefined4 *)(iVar8 + 0x194));
    iVar2 = (int)(local_2c + ((uint)(local_2c >> 0xb) >> 0x14)) >> 0xc;
    if (0x9f < *(uint *)(iVar8 + 0x56c)) {
      if (*(char *)(iVar8 + 0x58b) == '\x05') {
        iVar7 = 0;
        do {
          iVar3 = FUN_02154a7c(param_1,iVar7 + 3);
          FUN_0215523c(&local_30,iVar3);
          iVar6 = local_30 + iVar2 * 0x1000;
          if ((int)(iVar6 + ((uint)(iVar6 >> 0xb) >> 0x14)) >> 0xc < -0x20) {
            FUN_0215523c(&local_38,iVar3);
            local_34 = local_38 + 0x100000;
            FUN_021550c4(iVar3,&local_34);
            piVar4 = *(int **)(iVar3 + 4);
            iVar6 = piVar4[4] + 8;
            if (0x13 < iVar6) {
              iVar6 = piVar4[4] + -0xc;
            }
            (**(code **)(*piVar4 + 0x24))(piVar4,iVar6);
            piVar4 = *(int **)(iVar3 + 4);
            (**(code **)(*(int *)piVar4[0x19] + 0x70))();
            (**(code **)(*piVar4 + 0xc4))();
            uVar5 = FUN_0214d79c(*(undefined4 *)(iVar8 + 0x564),*(undefined1 *)(iVar8 + 2),
                                 *(undefined1 *)(iVar9 + iVar6 + 0x74));
            piVar4 = *(int **)(*(int *)(iVar3 + 4) + 100);
            (**(code **)(*piVar4 + 0x68))(piVar4,uVar5);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
      }
      else {
        uVar1 = 0;
        do {
          iVar7 = FUN_02154a7c(param_1,uVar1 + 3);
          if ((*(uint *)(iVar8 + 0x57c) & 1 << (uVar1 & 0xff)) != 0) {
            (**(code **)(**(int **)(iVar7 + 4) + 0xd8))(*(int **)(iVar7 + 4),1);
          }
          FUN_0215523c(&local_3c,iVar7);
          iVar3 = local_3c + iVar2 * 0x1000;
          if (0xe0 < (int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc) {
            FUN_0215523c(&local_44,iVar7);
            local_40 = local_44 + -0x100000;
            FUN_021550c4(iVar7,&local_40);
            piVar4 = *(int **)(iVar7 + 4);
            iVar3 = piVar4[4] + -8;
            if (iVar3 < 0) {
              iVar3 = piVar4[4] + 0xc;
            }
            (**(code **)(*piVar4 + 0x24))(piVar4,iVar3);
            piVar4 = *(int **)(iVar7 + 4);
            (**(code **)(*(int *)piVar4[0x19] + 0x70))();
            (**(code **)(*piVar4 + 0xc4))();
            uVar5 = FUN_0214d79c(*(undefined4 *)(iVar8 + 0x564),*(undefined1 *)(iVar8 + 2),
                                 *(undefined1 *)(iVar9 + iVar3 + 0x74));
            piVar4 = *(int **)(*(int *)(iVar7 + 4) + 100);
            (**(code **)(*piVar4 + 0x68))(piVar4,uVar5);
          }
          uVar1 = uVar1 + 1;
        } while ((int)uVar1 < 8);
      }
    }
  }
  return;
}

