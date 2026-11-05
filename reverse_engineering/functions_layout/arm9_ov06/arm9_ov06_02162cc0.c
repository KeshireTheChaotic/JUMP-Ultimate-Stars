
void FUN_02162cc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20) + param_2 * 8;
  *(char *)(iVar1 + 6) = (char)param_3;
  if (param_3 == 0) {
    FUN_02084cb8(*(undefined4 *)(param_1 + 0x28),0,*(undefined1 *)(iVar1 + 4),param_4,param_4);
    FUN_02084cb8(*(undefined4 *)(param_1 + 0x28),0,*(undefined1 *)(iVar1 + 5));
    return;
  }
  FUN_02084d0c();
  FUN_02084d0c(*(undefined4 *)(param_1 + 0x28),0,*(undefined1 *)(iVar1 + 5));
  return;
}

