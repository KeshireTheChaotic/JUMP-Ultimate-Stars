
undefined4 FUN_0219b0e8(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uStack_5c;
  undefined1 auStack_5b [3];
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [84];
  
  if (DAT_0214ccf8 == 0) {
    uVar1 = 0;
  }
  else {
    if (param_2 == (undefined1 *)0x0) {
      param_2 = auStack_5b;
    }
    if (param_3 == (undefined1 *)0x0) {
      param_3 = auStack_54;
    }
    uVar1 = FUN_0217830c(param_1 * 0xc + *(int *)(DAT_0214ccf8 + 0x18),&uStack_5c,param_2,param_3,
                         auStack_58);
  }
  return uVar1;
}

