
void FUN_02051a5c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_020511dc(param_1,0xffffffff);
  FUN_0205116c(param_1,param_2,param_4,0x1000000);
  if (param_4 == 0) {
    return;
  }
  do {
  } while ((*(uint *)(&DAT_040000b0 + (param_1 * 3 + 2) * 4) & 0x80000000) != 0);
  FUN_01ff8cd0(param_1,param_2,param_3,0xaf000001);
  return;
}

