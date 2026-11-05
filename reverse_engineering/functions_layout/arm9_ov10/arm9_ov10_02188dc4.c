
int FUN_02188dc4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int local_14;
  
  *(int *)(*param_1 + 0x210) = *(int *)(*param_1 + 0x210) + 1;
  iVar1 = FUN_0218668c(param_1,3,param_2,&local_14,param_3,param_4,param_5);
  if (((iVar1 == 0) && (iVar1 = FUN_02188ea0(param_1,local_14), iVar1 == 0)) &&
     ((*(int *)(local_14 + 8) == 0 ||
      (iVar1 = FUN_0218241c(param_1,*(undefined4 *)(local_14 + 0x18)), iVar1 == 0)))) {
    iVar1 = 0;
  }
  return iVar1;
}

