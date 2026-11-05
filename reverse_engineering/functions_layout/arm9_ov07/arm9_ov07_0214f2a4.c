
void FUN_0214f2a4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  piVar2 = *(int **)(param_2 + 4);
  uStack_14 = param_4;
  uVar1 = FUN_020326b0(param_3);
  uVar1 = (**(code **)(*piVar2 + 0x40))(piVar2,param_3,&local_18,uVar1);
  FUN_0202c4a4(param_1,uVar1,local_18);
  return;
}

