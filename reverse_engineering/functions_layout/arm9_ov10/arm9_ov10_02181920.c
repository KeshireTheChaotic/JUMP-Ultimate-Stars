
void FUN_02181920(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_020012a4(*(undefined4 *)(param_1 + 4),&local_c);
  (**(code **)(param_1 + 0x488))(param_1,0,local_c,*(undefined4 *)(param_1 + 0x494));
  return;
}

