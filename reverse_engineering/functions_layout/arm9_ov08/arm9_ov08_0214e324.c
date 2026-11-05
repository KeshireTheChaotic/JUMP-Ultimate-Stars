
undefined4 FUN_0214e324(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0214cdb0(s_ESSID_AOSS_0216af90);
  *param_1 = uVar1;
  FUN_0214cf10(param_1 + 1,s_ESSID_AOSS_0216af90,*param_1);
  param_1[9] = 1;
  uVar1 = FUN_0214cdb0(s_MELCO_0216af88);
  param_1[10] = uVar1;
  if ((uint)param_1[10] < 0xe) {
    FUN_0214cf10(param_1 + 0xb,s_MELCO_0216af88);
    return 0;
  }
  return 0xffffffff;
}

