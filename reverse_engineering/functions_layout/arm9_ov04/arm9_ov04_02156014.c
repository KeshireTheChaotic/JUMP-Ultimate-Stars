
void FUN_02156014(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  iVar2 = 0;
  uStack_18 = param_4;
  if (-1 < *(char *)(param_1 + 0x18)) {
    FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),0x810026,0);
    iVar2 = (int)*(char *)(param_1 + 0x18);
    if (iVar2 < 10) {
      iVar3 = *(int *)(param_1 + 0x10);
      FUN_02023894(*(undefined4 *)(iVar3 + 4),iVar2 + 0x27U | 0x810000,0);
      local_30 = 0;
      local_2c = 0;
      FUN_0214e1b8(iVar3,&local_2c,&local_30);
      iVar2 = 2;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x14);
      iVar2 = FUN_0200d12c(iVar2,10);
      FUN_02023894(*(undefined4 *)(iVar3 + 4),iVar2 + 0x27U | 0x810000,0);
      local_20 = 0;
      local_1c = 0xffffa000;
      FUN_0214e1b8(iVar3,&local_1c,&local_20);
      iVar2 = *(int *)(param_1 + 0x10);
      FUN_0200d12c((int)*(char *)(param_1 + 0x18),10);
      FUN_02023894(*(undefined4 *)(iVar2 + 4),extraout_r1 + 0x27U | 0x810000,0);
      local_28 = 0;
      local_24 = 0x6000;
      FUN_0214e1b8(iVar2,&local_24,&local_28);
      iVar2 = 3;
    }
  }
  for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + iVar3 * 4 + 0xc) + 4) + 0x68) + 0x6c))();
    piVar1 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 0xc) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  }
  for (; iVar2 < 3; iVar2 = iVar2 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0xc) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  return;
}

