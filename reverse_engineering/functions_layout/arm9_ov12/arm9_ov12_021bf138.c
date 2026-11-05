
void FUN_021bf138(uint *param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_2 < 0x4000) {
    param_2 = 0x4000;
  }
  if (0x8000 < param_3) {
    param_3 = 0x8000;
  }
  uVar1 = *param_1;
  if (param_2 < uVar1) {
    param_2 = uVar1;
  }
  if (uVar1 + param_1[3] < param_3) {
    param_3 = uVar1 + param_1[3];
  }
  if (param_2 < param_3) {
    if (param_4 != 0) {
      FUN_020517fc(param_1[2] + param_2,0,param_3 - param_2);
      return;
    }
    FUN_02051890(param_1[1] + param_2,param_1[2] + param_2,param_3 - param_2);
  }
  return;
}

