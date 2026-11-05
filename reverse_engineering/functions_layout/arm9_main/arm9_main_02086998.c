
void FUN_02086998(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(*(undefined4 *)(param_1 + 0xc));
    }
  }
  else if (*(code **)(param_1 + 0x14) != (code *)0x0) {
    (**(code **)(param_1 + 0x14))(*(undefined4 *)(param_1 + 0xc));
    return;
  }
  return;
}

