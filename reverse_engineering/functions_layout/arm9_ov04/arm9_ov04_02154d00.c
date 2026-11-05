
void FUN_02154d00(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_0201b244(param_1);
  return;
}

