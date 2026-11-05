
int FUN_0214da4c(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = param_4;
  iVar1 = ALWidgetImp::Create(param_1,param_3,param_2 + 4,param_2 + 7);
  iVar2 = FUN_0214d53c(0,param_2[3],param_5,iVar1,param_4,uVar3);
  func_0x021b3f78(*(undefined4 *)(iVar1 + 4),*param_2);
  func_0x021b3fc4(*(undefined4 *)(iVar1 + 4),param_2[1]);
  func_0x021b3fb0(*(undefined4 *)(iVar1 + 4),*param_2);
  func_0x021b400c(*(undefined4 *)(iVar1 + 4),param_2[2]);
  if (*param_2 == 0) {
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
  }
  else {
    FUN_02023894(*(undefined4 *)(iVar1 + 4),*param_2,0);
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  return iVar1;
}

