
void FUN_020345d4(int param_1)

{
  DAT_020a0e18 = (code *)DAT_020a1060;
  DAT_020a0fc8 = *(int *)(*(int *)(param_1 + 8) + 0xc);
  FUN_01ff8000(DAT_020a0f00);
  while (DAT_020a0e30 != 0) {
    if (*(int *)(DAT_020a0fc8 + 0x2c) == 0) {
      FUN_02027d84(DAT_020a0fc8,DAT_020a0f00);
      DAT_020a0fc8 = *(int *)(DAT_020a0fc8 + 0xc);
      DAT_020a0e30 = *(int *)(DAT_020a0fc8 + 0xc);
      DAT_020a0f00 = (**(code **)*DAT_020a0df4)(DAT_020a0df4,FUN_02034500,0);
      FUN_01ff8000();
    }
    else {
      FUN_02027d44();
      FUN_01ff8000(DAT_020a0f00);
    }
  }
  DAT_020a0e18 = FUN_02015b98;
  return;
}

