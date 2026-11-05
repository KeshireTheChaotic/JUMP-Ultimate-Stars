
void FUN_021bd730(int param_1,int param_2,int param_3)

{
  if (*(int *)(param_1 + 0x48) != param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    if (param_3 != 0) {
      thunk_FUN_0207400c(param_1 + 0x8e,param_3);
      *(undefined1 *)(param_1 + 0xa0) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  return;
}

