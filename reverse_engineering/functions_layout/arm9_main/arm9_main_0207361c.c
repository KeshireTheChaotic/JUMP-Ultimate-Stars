
void FUN_0207361c(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_02073674;
  if (*(int *)PTR_DAT_02073670 == param_1) {
    return;
  }
  *(int *)PTR_DAT_02073670 = param_1;
  FUN_0205db34(puVar1,param_1);
  puVar2 = PTR_DAT_02073678;
  FUN_0205b910(puVar1,*PTR_DAT_02073678);
  FUN_0205b8c4(puVar1,*puVar2,param_2);
  return;
}

