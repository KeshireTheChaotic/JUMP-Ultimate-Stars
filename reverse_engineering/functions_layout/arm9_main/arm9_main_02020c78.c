
void FUN_02020c78(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (DAT_020a0df8 <= uVar1) {
      return;
    }
    if ((&DAT_020a1ebc)[uVar1] == param_1) break;
    uVar1 = uVar1 + 1;
  }
  DAT_020a0df8 = DAT_020a0df8 - 1;
  (&DAT_020a1ebc)[uVar1] = (&DAT_020a1ebc)[DAT_020a0df8];
  return;
}

