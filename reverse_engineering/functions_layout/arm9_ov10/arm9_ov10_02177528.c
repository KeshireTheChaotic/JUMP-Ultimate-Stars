
void FUN_02177528(int param_1)

{
  if ((DAT_021a759c != 0) && (param_1 != 0)) {
    FUN_02175744();
    if (*(code **)(DAT_021a759c + 0x14) != (code *)0x0) {
      (**(code **)(DAT_021a759c + 0x14))(param_1,0,*(undefined4 *)(DAT_021a759c + 0x18));
    }
    FUN_021774d4();
  }
  return;
}

