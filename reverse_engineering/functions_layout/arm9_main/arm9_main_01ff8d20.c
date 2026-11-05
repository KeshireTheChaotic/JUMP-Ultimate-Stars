
void FUN_01ff8d20(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  if (param_3 == 0) {
    return;
  }
  FUN_0205116c();
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  for (; param_3 != 0; param_3 = param_3 - uVar1) {
    if (param_3 < 0x1d9) {
      uVar1 = param_3;
    }
    else {
      uVar1 = 0x1d8;
    }
    FUN_01ff8cd0(param_1,param_2,0x4000400,uVar1 >> 2 | 0x84400000);
    param_2 = param_2 + uVar1;
  }
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  return;
}

