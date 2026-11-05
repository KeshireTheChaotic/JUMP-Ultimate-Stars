
void FUN_02016e44(int *param_1,int param_2,int param_3,int *param_4,undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  short local_2c;
  short local_2a;
  short local_28;
  short local_26;
  int *piStack_24;
  
  piStack_24 = param_4;
  FUN_02016ff0(&local_2c,param_5);
  FUN_02016d90(param_1,param_2,param_3,param_4,&local_2c);
  iVar1 = (**(code **)(*param_1 + 100))();
  if ((iVar1 == 0) || (iVar1 = (**(code **)(*param_4 + 0x60))(), iVar1 == 0)) {
    for (iVar1 = 0; iVar1 < (int)local_26 - (int)local_2a; iVar1 = iVar1 + 1) {
      for (iVar4 = 0; iVar4 < (int)local_28 - (int)local_2c; iVar4 = iVar4 + 1) {
        uVar3 = (**(code **)(*param_4 + 0x24))(param_4,iVar4 + local_2c,iVar1 + local_2a);
        (**(code **)(*param_1 + 0x28))(param_1,iVar4 + param_2,iVar1 + param_3,uVar3);
      }
    }
  }
  else {
    for (iVar1 = 0; iVar1 < (int)local_26 - (int)local_2a; iVar1 = iVar1 + 1) {
      for (iVar4 = 0; iVar4 < (int)local_28 - (int)local_2c; iVar4 = iVar4 + 1) {
        uVar3 = (**(code **)(*param_4 + 0x2c))(param_4,iVar4 + local_2c,iVar1 + local_2a);
        (**(code **)(*param_1 + 0x30))(param_1,iVar4 + param_2,iVar1 + param_3,uVar3);
      }
    }
    piVar2 = (int *)(**(code **)(*param_1 + 100))();
    uVar3 = (**(code **)(*param_4 + 0x60))();
    (**(code **)(*piVar2 + 0x14))(piVar2,uVar3);
  }
  return;
}

