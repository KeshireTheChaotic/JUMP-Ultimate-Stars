
undefined4 *
FUN_021b8504(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4,int *param_5)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  if (param_3 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0x134))(param_3,0,0x134,*(code **)(*param_3 + 0x134),param_4);
  }
  param_1[1] = uVar1;
  if (param_4 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_4 + 0x134))();
  }
  param_1[2] = uVar1;
  if (param_5 == (int *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_5 + 0x138))(param_5,0);
  }
  param_1[3] = uVar1;
  return param_1;
}

