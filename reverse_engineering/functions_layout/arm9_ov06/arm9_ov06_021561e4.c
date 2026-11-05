
undefined4 FUN_021561e4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iStack_10;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    return 1;
  }
  iStack_10 = param_4;
  iVar1 = FUN_02161440(*(int *)(param_1 + 0x78),
                       *(undefined2 *)(&DAT_0217109a + (uint)*(byte *)(param_2 + 2) * 4),&iStack_10)
  ;
  if (iVar1 == 0) {
    if (*(char *)(param_2 + 3) == '\0') {
      return 0;
    }
    if (iStack_10 <= (int)(uint)*(ushort *)(param_2 + 8)) {
      return 0;
    }
  }
  if ((*(ushort *)(param_2 + 0xe) == 0) || (iStack_10 <= (int)(uint)*(ushort *)(param_2 + 0xe))) {
    if ((*(ushort *)(param_2 + 0xc) == 0) || (iStack_10 <= (int)(uint)*(ushort *)(param_2 + 0xc))) {
      if ((*(ushort *)(param_2 + 10) != 0) && ((int)(uint)*(ushort *)(param_2 + 10) < iStack_10)) {
        *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | 8;
        *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_2 + 4);
      }
    }
    else {
      *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | 8;
      *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_2 + 5);
    }
  }
  else {
    *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | 8;
    *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_2 + 6);
  }
  return 1;
}

