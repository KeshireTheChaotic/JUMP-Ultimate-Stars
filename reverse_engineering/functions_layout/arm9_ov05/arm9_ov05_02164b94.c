
void FUN_02164b94(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  
  iVar4 = 0;
  uStack_28 = param_4;
  do {
    iVar5 = iVar4 * 0xc + param_1;
    iVar6 = 0;
    do {
      uVar1 = FUN_021653ac(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x104),iVar4,
                           iVar6);
      iVar2 = FUN_02164234();
      if (iVar2 == 0) {
        iVar2 = FUN_02164458(uVar1,auStack_40);
        iVar3 = *(int *)(iVar5 + iVar6 * 4 + 0x2c);
        if (iVar2 == 0) {
          FUN_02023894(*(undefined4 *)(iVar3 + 4),0xb00013,0);
          func_0x021b6760(*(undefined4 *)(*(int *)(iVar5 + iVar6 * 4 + 200) + 4),4,FUN_02164e18);
        }
        else {
          FUN_02023894(*(undefined4 *)(iVar3 + 4),0xb00012,0);
          func_0x021b6760(*(undefined4 *)(*(int *)(iVar5 + iVar6 * 4 + 200) + 4),4,FUN_02164ebc);
        }
      }
      else {
        FUN_02023894(*(undefined4 *)(*(int *)(iVar5 + iVar6 * 4 + 0x2c) + 4),0xb00014,0);
        func_0x021b6760(*(undefined4 *)(*(int *)(iVar5 + iVar6 * 4 + 200) + 4),4,FUN_0216524c);
      }
      (**(code **)(**(int **)(*(int *)(*(int *)(iVar5 + iVar6 * 4 + 0x2c) + 4) + 0x68) + 0x6c))();
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  return;
}

