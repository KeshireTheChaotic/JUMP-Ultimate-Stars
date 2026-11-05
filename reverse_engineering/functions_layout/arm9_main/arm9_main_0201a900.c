
void FUN_0201a900(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if ((&DAT_020a1680)[uVar1] == param_1) {
      (&DAT_020a1680)[uVar1] = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  uVar1 = 0;
  do {
    if ((&DAT_020a1680)[uVar1] != 0) {
      DAT_020a0e50 = uVar1 + 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}

