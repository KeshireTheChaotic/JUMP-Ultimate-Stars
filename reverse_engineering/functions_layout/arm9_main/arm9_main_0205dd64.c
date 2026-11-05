
void FUN_0205dd64(int param_1)

{
  FUN_02053ed0(&DAT_020ae568);
  if (DAT_020ae090 != 0) {
    FUN_02053ed0(DAT_020ae090 + 0x4c8);
  }
  if (*(int *)(param_1 + 0x110) << 0x1e < 0) {
    FUN_0205bdac(param_1);
  }
  if (*(int *)(param_1 + 0x110) << 0x1f < 0) {
    (**(code **)(param_1 + 0x16c))(param_1);
  }
  FUN_0205dd00(param_1);
  FUN_02053e60(&DAT_020ae568);
  if (DAT_020ae090 == 0) {
    return;
  }
  FUN_02053e60(DAT_020ae090 + 0x4c8);
  return;
}

