
void FUN_02161850(short *param_1)

{
  if (((param_1[1] == 0) && (*(char *)(DAT_0216e7ec + 0x1e4c) == '\0')) && (*param_1 == 0x26)) {
    if (param_1[4] == 4) {
      FUN_02161954();
      return;
    }
    if (param_1[4] == 5) {
      FUN_02161704();
      FUN_02161954();
      return;
    }
    FUN_02055684();
  }
  return;
}

