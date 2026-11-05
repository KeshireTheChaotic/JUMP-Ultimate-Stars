
void FUN_021cb798(int *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined2 local_18;
  undefined1 local_16;
  
  (**(code **)(*param_2 + 8))();
  iVar1 = FUN_021cb830(param_1,param_3);
  if (iVar1 == -1) {
    uVar2 = FUN_02037f84(param_1);
    local_18 = (undefined2)param_3;
    local_16 = 1;
    local_24 = *param_4;
    local_20 = param_4[1];
    local_1c = param_2;
    FUN_021cb780(uVar2,&local_24);
  }
  else {
    iVar3 = param_1[1];
    iVar5 = *param_1;
    iVar4 = iVar5 + iVar1 * iVar3;
    FUN_020288a4(*(undefined4 *)(iVar4 + 8));
    *(int **)(iVar4 + 8) = param_2;
    *(undefined4 *)(iVar5 + iVar1 * iVar3) = *param_4;
    *(undefined4 *)(iVar4 + 4) = param_4[1];
  }
  FUN_02027db0(param_2,DAT_020a0d84);
  return;
}

