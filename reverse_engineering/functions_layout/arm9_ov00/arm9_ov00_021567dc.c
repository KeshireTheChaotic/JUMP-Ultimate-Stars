
int FUN_021567dc(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined1 param_5,undefined1 param_6)

{
  int *piVar1;
  undefined4 local_c;
  
  local_c = *param_3;
  piVar1 = (int *)FUN_02013bd4(*param_1,param_1[1],param_2,&local_c,param_4,param_5,param_6);
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

