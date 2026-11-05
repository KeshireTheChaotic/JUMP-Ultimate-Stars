
void FUN_0201582c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  for (uVar6 = 1; iVar4 = (**(code **)(*param_1 + 0xac))(), (int)uVar6 < iVar4; uVar6 = uVar6 + 1) {
    uVar5 = uVar6;
    while( true ) {
      uVar5 = uVar5 + 1;
      uVar3 = (**(code **)(*param_1 + 0xac))();
      if (uVar3 <= uVar5) break;
      iVar4 = (**(code **)(*param_1 + 0xc0))(param_1,uVar5);
      FUN_02011990(&local_28,*(undefined4 *)(iVar4 + 100));
      iVar4 = (**(code **)(*param_1 + 0xc0))(param_1,uVar6);
      FUN_02011990(&local_24,*(undefined4 *)(iVar4 + 100));
      if (local_24 < local_28) {
        uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,uVar6);
        uVar2 = (**(code **)(*param_1 + 0xc0))(param_1,uVar5);
        (**(code **)(*param_1 + 0xd0))(param_1,uVar6,uVar2);
        (**(code **)(*param_1 + 0xd0))(param_1,uVar5,uVar1);
      }
    }
  }
  return;
}

