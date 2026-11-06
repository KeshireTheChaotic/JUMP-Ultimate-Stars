
void FUN_0217626c(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    *(undefined4 *)(DAT_021a7410 + 100) = param_2;
    FUN_0217643c(3);
    FUN_02177f18();
  }
  else {
    FUN_0217643c(0);
  }
  if (*(code **)(DAT_021a7410 + 0x70) != (code *)0x0) {
    (**(code **)(DAT_021a7410 + 0x70))(param_1,param_2,*(undefined4 *)(DAT_021a7410 + 0x74));
  }
  return;
}

