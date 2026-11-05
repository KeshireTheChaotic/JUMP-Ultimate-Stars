
void FUN_0215570c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  undefined4 uStack_c;
  
  if (param_1 != (undefined4 *)0x0) {
    uStack_c = param_4;
    if (param_2 < 0) {
      FUN_0214e6e4(auStack_1c,0,0,0,0);
      FUN_021554e8(*param_1,0,auStack_1c);
    }
    else {
      FUN_0214e6e4(auStack_14,0,param_2 * 0x30,0xff,(param_2 + 1) * 0x30 + -1);
      FUN_021554e8(*param_1,0,auStack_14);
    }
  }
  return;
}

