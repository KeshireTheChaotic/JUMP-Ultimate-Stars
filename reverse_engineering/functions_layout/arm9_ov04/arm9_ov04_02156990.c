
void FUN_02156990(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar3 = 1;
  uStack_18 = param_4;
  switch(*(undefined1 *)(param_1 + 0x14)) {
  case 0:
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),0x810035,0);
    break;
  case 1:
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),0x810003,0);
    iVar3 = (int)*(char *)(param_1 + 0x15);
    if (iVar3 < 10) {
      iVar2 = *(int *)(param_1 + 0xc);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),iVar3 + 4U | 0x810000,0);
      local_30 = 0;
      local_2c = 0;
      FUN_0214e1b8(iVar2,&local_2c,&local_30);
      iVar3 = 2;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x10);
      iVar3 = FUN_0200d12c(iVar3,10);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),iVar3 + 4U | 0x810000,0);
      local_20 = 0;
      local_1c = 0xffff8000;
      FUN_0214e1b8(iVar2,&local_1c,&local_20);
      iVar3 = *(int *)(param_1 + 0xc);
      FUN_0200d12c((int)*(char *)(param_1 + 0x15),10);
      FUN_02023894(*(undefined4 *)(iVar3 + 4),extraout_r1 + 4U | 0x810000,0);
      local_28 = 0;
      local_24 = 0x8000;
      FUN_0214e1b8(iVar3,&local_24,&local_28);
      iVar3 = 3;
    }
    break;
  case 2:
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),0x810036,0);
    break;
  case 3:
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 8) + 4),0x810037,0);
  }
  for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + iVar2 * 4 + 8) + 4) + 0x68) + 0x6c))();
    piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 8) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  }
  for (; iVar3 < 3; iVar3 = iVar3 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 8) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  return;
}

