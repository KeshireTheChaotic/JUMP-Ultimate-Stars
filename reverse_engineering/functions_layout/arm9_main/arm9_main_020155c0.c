
undefined4 FUN_020155c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  uVar1 = jus_TagNDGR_0209c0b4::vfunc_45();
  (**(code **)(**(int **)(param_2 + 100) + 0x28))(*(int **)(param_2 + 100),1);
  uVar2 = (**(code **)(*param_1 + 0xac))();
  uVar9 = 0;
  uVar3 = (**(code **)(*param_1 + 0xac))();
  uVar7 = 1;
  while( true ) {
    uVar8 = uVar7;
    if (uVar3 <= uVar7) break;
    while (uVar8 = uVar8 + 1, uVar8 < uVar3) {
      iVar6 = (**(code **)(*param_1 + 0xc0))(param_1,uVar8);
      FUN_02011990(&local_30,*(undefined4 *)(iVar6 + 100));
      iVar6 = (**(code **)(*param_1 + 0xc0))(param_1,uVar7);
      FUN_02011990(&local_2c,*(undefined4 *)(iVar6 + 100));
      if (local_2c < local_30) {
        uVar4 = (**(code **)(*param_1 + 0xc0))(param_1,uVar7);
        uVar5 = (**(code **)(*param_1 + 0xc0))(param_1,uVar8);
        (**(code **)(*param_1 + 0xd0))(param_1,uVar7,uVar5);
        (**(code **)(*param_1 + 0xd0))(param_1,uVar8,uVar4);
        if (uVar7 <= uVar2) {
          uVar2 = uVar7;
        }
        if (uVar9 <= uVar8) {
          uVar9 = uVar8;
        }
      }
    }
    uVar7 = uVar7 + 1;
  }
  uVar3 = uVar2;
  for (; uVar2 <= uVar9; uVar2 = uVar2 + 1) {
    iVar6 = (**(code **)(*param_1 + 0xc0))(param_1,uVar2);
    iVar6 = FUN_02014d6c(*(undefined4 *)(iVar6 + 100));
    if (iVar6 != 0) break;
    uVar3 = uVar3 + 1;
  }
  while( true ) {
    if (uVar9 < uVar3) {
      return uVar1;
    }
    iVar6 = (**(code **)(*param_1 + 0xc0))(param_1,uVar9);
    iVar6 = FUN_02014d6c(*(undefined4 *)(iVar6 + 100));
    if (iVar6 != 0) break;
    uVar9 = uVar9 - 1;
  }
  return uVar1;
}

