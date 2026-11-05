
void FUN_0202cb88(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0xa0))();
  if (iVar1 == 0) {
    FUN_020380d0(param_2,param_3,*param_4);
    return;
  }
  *param_2 = 0x24;
  uVar2 = (**(code **)(*param_1 + 0xa0))();
  FUN_020381e4(param_2 + 1,param_3 + -1,*param_4,uVar2,0);
  return;
}

