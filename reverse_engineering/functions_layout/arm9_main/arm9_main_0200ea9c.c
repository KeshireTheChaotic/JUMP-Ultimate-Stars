
void FUN_0200ea9c(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  FUN_0200df68(param_1,param_2,param_4,param_4,param_4);
  iVar1 = param_1[6] + *(int *)(param_3 + 8);
  *(undefined4 *)(param_1[6] + *(int *)(param_3 + 8)) = param_1[1];
  *(undefined4 *)(iVar1 + 4) = *param_1;
  *(undefined4 *)(iVar1 + 8) = param_1[2];
  *(undefined4 *)(iVar1 + 0x14) = param_4;
  FUN_0200f5cc(param_1,param_2,*param_2 + *(int *)(param_3 + 4));
  return;
}

