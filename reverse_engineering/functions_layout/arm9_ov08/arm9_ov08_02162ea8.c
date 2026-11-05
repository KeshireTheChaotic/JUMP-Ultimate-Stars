
void FUN_02162ea8(short *param_1)

{
  if (param_1[1] == 0) {
    if (*(char *)(DAT_0216e800 + 0x1b84) == '\0') {
      if (*param_1 == 0x26) {
        if (param_1[4] == 4) {
          FUN_02162fc4();
          return;
        }
        if (param_1[4] == 5) {
          if (*(char *)(DAT_0216e800 + 0x1b86) == '\0') {
            FUN_02162d9c();
          }
          else {
            FUN_02162cb8();
          }
          FUN_02162fc4();
          return;
        }
        FUN_02055684();
      }
    }
    else if (*param_1 == 2) {
      *(char *)(DAT_0216e800 + 0x1b84) = '\x02';
      return;
    }
  }
  return;
}

