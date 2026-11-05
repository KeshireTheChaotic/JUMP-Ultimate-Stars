
void FUN_02155a84(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | 1;
  iVar1 = (uint)*(byte *)(param_2 + 4) * 4;
  iVar1 = FUN_021613c4(*(undefined4 *)(param_1 + 0x78),*(undefined2 *)(&DAT_02171098 + iVar1),
                       *(undefined1 *)(param_2 + 5),iVar1,param_4);
  if (iVar1 < (int)(uint)*(byte *)(param_2 + 6)) {
    FUN_021565a4(param_1,0,*(undefined1 *)(param_2 + 2));
    return;
  }
  *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | 2;
  FUN_021565a4(param_1,0,*(undefined1 *)(param_2 + 3));
  return;
}

