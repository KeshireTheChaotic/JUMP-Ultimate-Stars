
void FUN_03800038(int param_1,int param_2)

{
  if (param_2 < 0x6d) {
    *(char *)(param_1 + 0x1c) = -1 - (char)param_2;
  }
  else {
    *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(0x3807e67 - param_2);
  }
  return;
}

