
void FUN_021817dc(int param_1)

{
  int iVar1;
  int local_18 [2];
  
  local_18[0] = *(int *)(param_1 + 0x5d0);
  if (local_18[0] != 0) {
    while (local_18[0] != 0) {
      iVar1 = FUN_0217f9cc(local_18[0]);
      FUN_0217fb38(local_18);
      local_18[0] = iVar1;
    }
    *(undefined4 *)(param_1 + 0x5d0) = 0;
  }
  return;
}

