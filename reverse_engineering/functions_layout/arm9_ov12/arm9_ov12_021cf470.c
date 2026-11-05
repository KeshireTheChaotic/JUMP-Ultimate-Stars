
void FUN_021cf470(int param_1,int param_2)

{
  if (*(char *)(param_2 + 10) == '\x01') {
    *(undefined1 *)(param_2 + 0xb) = *(undefined1 *)(param_1 + 4);
    *(undefined4 *)(param_2 + 0xc) = DAT_021d66d8;
  }
  return;
}

