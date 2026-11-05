
void FUN_02177bf8(int param_1,int param_2,undefined4 param_3)

{
  if (DAT_021a75a4 != 0) {
    FUN_020517fc(param_1 + param_2 * 0xc,0);
    if (*(code **)(DAT_021a75a4 + 0x3c) != (code *)0x0) {
      (**(code **)(DAT_021a75a4 + 0x3c))(param_2,param_3,*(undefined4 *)(DAT_021a75a4 + 0x40));
    }
  }
  return;
}

