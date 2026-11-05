
void FUN_021b70f8(undefined4 *param_1)

{
  if (DAT_021d5164 != param_1) {
    if (DAT_021d5164 != (undefined4 *)0x0) {
      FUN_02029500(*DAT_021d5164,DAT_021d5140);
    }
    DAT_021d5164 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      FUN_020292e0(*param_1,DAT_021d5140,0xffffffff,0xffffffff);
    }
  }
  return;
}

