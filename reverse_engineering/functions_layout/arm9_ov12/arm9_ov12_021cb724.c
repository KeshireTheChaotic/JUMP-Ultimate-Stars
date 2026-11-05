
void FUN_021cb724(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [8];
  int *local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  (**(code **)(*param_2 + 8))();
  iVar1 = FUN_021cb830(param_1,param_3);
  if (iVar1 == -1) {
    uVar2 = FUN_02037f84(param_1);
    local_14 = (undefined2)param_3;
    local_12 = 0;
    local_18 = param_2;
    FUN_021cb780(uVar2,auStack_20);
  }
  else {
    iVar1 = *param_1 + iVar1 * param_1[1];
    FUN_020288a4(*(undefined4 *)(iVar1 + 8));
    *(int **)(iVar1 + 8) = param_2;
  }
  FUN_02027db0(param_2,DAT_020a0d84);
  return;
}

