
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02051384(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                 code *param_5,undefined4 param_6)

{
  FUN_0205116c(param_1,param_2,param_4,0);
  if (param_4 != 0) {
    FUN_02051314(param_1);
    if (param_5 == (code *)0x0) {
      FUN_01ff8cd0(param_1,param_2,param_3,param_4 >> 2 | 0x84000000);
      return;
    }
    FUN_02051e14(param_1,param_5,param_6);
    FUN_01ff8cd0(param_1,param_2,param_3,param_4 >> 2 | 0xc4000000);
    return;
  }
  if (param_5 == (code *)0x0) {
    return;
  }
  (*param_5)(param_6);
  return;
}

