
void FUN_0202894c(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (DAT_020a0cc4 <= uVar1) {
      (&DAT_020a1efc)[DAT_020a0cc4] = param_1;
      DAT_020a0cc4 = DAT_020a0cc4 + 1;
      return;
    }
    if ((&DAT_020a1efc)[uVar1] == param_1) break;
    uVar1 = uVar1 + 1;
  }
  return;
}

