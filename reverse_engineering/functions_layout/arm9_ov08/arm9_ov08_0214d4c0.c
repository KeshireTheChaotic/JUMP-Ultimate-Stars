
void FUN_0214d4c0(int param_1,undefined2 *param_2,undefined4 param_3,short *param_4,
                 undefined2 *param_5,undefined4 param_6)

{
  undefined2 uVar1;
  
  if (param_1 == 1) {
    *param_5 = 1;
    FUN_0214d374(param_3,param_2 + 2,(int)*param_4,param_6,param_2 + 1,&DAT_0216c1d8,8);
    uVar1 = FUN_0214ce14(*param_4);
    *param_2 = uVar1;
    *param_4 = *param_4 + 4;
    return;
  }
  FUN_0214cf10(param_2,param_3,(int)*param_4);
  return;
}

