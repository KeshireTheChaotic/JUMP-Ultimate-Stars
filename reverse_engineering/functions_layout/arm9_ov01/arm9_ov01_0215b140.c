
void FUN_0215b140(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined1 param_6)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_020742b4(param_2,param_3,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 4) + 0xb4))(*(int **)(param_1 + 4),*(undefined4 *)(param_4 + 4))
  ;
  FUN_0214f7c0(param_4,param_1);
  piVar2 = *(int **)(param_4 + 4);
  (**(code **)(*(int *)piVar2[0x19] + 0x70))();
  (**(code **)(*piVar2 + 0xc4))();
  FUN_0215b20c(param_4,param_5);
  piVar2 = *(int **)(*(int *)(param_4 + 4) + 100);
  (**(code **)(*piVar2 + 0xa8))(piVar2,param_6);
  piVar2 = *(int **)(*(int *)(param_4 + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,param_2);
  (**(code **)(**(int **)(param_4 + 4) + 0xd8))(*(int **)(param_4 + 4),1);
  thunk_FUN_0207400c(param_3,param_2);
  return;
}

