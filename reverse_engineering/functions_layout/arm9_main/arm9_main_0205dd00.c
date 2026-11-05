
void FUN_0205dd00(int param_1)

{
  if (-1 < *(int *)(param_1 + 0x110) << 0x1f) {
    return;
  }
  FUN_0205dcc4();
  (**(code **)(param_1 + 0x164))(param_1);
  FUN_0205dc54(&DAT_020ae580,param_1);
  if (DAT_020ae090 != 0) {
    FUN_0205dc54(DAT_020ae090 + 0x4e0,param_1);
  }
  FUN_0205de58(param_1);
  return;
}

