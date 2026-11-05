
void FUN_02015008(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uVar2 = (uint)*(byte *)((int)param_1 + 0x11);
  uVar1 = param_2 | (uVar2 & 3) >> 1;
  if (((uVar2 & 7) >> 2 | (uVar2 & 3) >> 1) != uVar1) {
    uStack_10 = param_4;
    if (((uVar1 == 0) || (FUN_02011990(&local_14,param_1), local_14 < 0xc1000)) ||
       (FUN_02011990(&local_18,param_1), 0xc7000 < local_18)) {
      if (((param_2 == 0 && (*(byte *)((int)param_1 + 0x11) & 3) >> 1 == 0) &&
          (FUN_02011990(&local_24,param_1), local_24 < 0xbf001)) &&
         (FUN_02011990(&local_28,param_1), 0xb8fff < local_28)) {
        FUN_02011990(&local_30,param_1);
        local_2c = local_30 + 0x8000;
        (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
      }
    }
    else {
      FUN_02011990(&local_20,param_1);
      local_1c = local_20 + -0x8000;
      (**(code **)(*param_1 + 0x10))(param_1,&local_1c);
    }
    *(byte *)((int)param_1 + 0x11) =
         *(byte *)((int)param_1 + 0x11) & 0xfb | (byte)((param_2 & 1) << 2);
  }
  return;
}

