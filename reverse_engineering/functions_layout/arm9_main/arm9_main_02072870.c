
void FUN_02072870(int param_1,int param_2)

{
  int iVar1;
  
                    /* JUS-TAG source_file_inferred="Record.cpp" */
  iVar1 = FUN_02072a60(0x20b02b8);
  if (param_2 != 0) {
    param_1 = param_1 * 4;
    *(int *)(&DAT_020b76c8 + param_1 + iVar1 * 0x28) =
         *(int *)(&DAT_020b76c8 + param_1 + iVar1 * 0x28) + param_2;
    if (*(int *)(&DAT_020b76c8 + param_1 + iVar1 * 0x28) < 0) {
      *(undefined4 *)(&DAT_020b76c8 + param_1 + iVar1 * 0x28) = 0;
    }
    if ((int)99999 < *(int *)(&DAT_020b76c8 + param_1 + iVar1 * 0x28)) {
      *(dword *)(&DAT_020b76c8 + param_1 + iVar1 * 0x28) = 99999;
    }
    DAT_020b02ac = 1;
    iVar1 = FUN_02072a60(0x20b02b8);
    FUN_02073114(iVar1 * 0x28 + 0x7410,0x18);
  }
  return;
}

