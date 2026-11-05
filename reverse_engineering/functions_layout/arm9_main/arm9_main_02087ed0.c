
void FUN_02087ed0(void)

{
  undefined4 in_r3;
  
  if (DAT_0214be20 != (int *)0x0) {
    FUN_020428dc(DAT_020a0f64,FUN_02087ff0 + 1,DAT_0214be20,in_r3,in_r3);
    if ((int *)DAT_0214be20[1] != (int *)0x0) {
      (**(code **)(*(int *)DAT_0214be20[1] + 8))();
    }
    if ((int *)*DAT_0214be20 != (int *)0x0) {
      (**(code **)(*(int *)*DAT_0214be20 + 0xc))();
    }
    FUN_0201b244(DAT_0214be20);
    DAT_0214be20 = (int *)0x0;
  }
  return;
}

