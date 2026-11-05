
void FUN_0205b460(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == *(byte *)(param_1 + 0x2e)) {
    return;
  }
  FUN_02056a14(*(undefined1 *)(param_1 + 0x3c));
  *(char *)(param_1 + 0x2e) = (char)param_2;
  return;
}

