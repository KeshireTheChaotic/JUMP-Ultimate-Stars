
void FUN_02154efc(int param_1)

{
  *(undefined1 *)(param_1 + 0x459) =
       *(undefined1 *)((int)*(char *)(param_1 + 0x45a) + *(int *)(param_1 + 0x454) * 5 + 0x216d5e4);
  *(char *)(param_1 + 0x45a) = *(char *)(param_1 + 0x45a) + '\x01';
  if ((char)(&DAT_0216d5d8)[*(int *)(param_1 + 0x454)] < *(char *)(param_1 + 0x45a)) {
    *(undefined1 *)(param_1 + 0x45a) = 0;
  }
  *(undefined1 *)(param_1 + 0x458) =
       *(undefined1 *)((int)*(char *)(param_1 + 0x45a) + *(int *)(param_1 + 0x454) * 5 + 0x216d5e4);
  *(undefined1 *)(param_1 + 0x46a) = 1;
  return;
}

