
void FUN_02156d48(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_02156944(param_2);
  if (iVar1 != 0) {
    FUN_021568dc(param_2[1],1);
    param_2[10] = 0x50;
  }
  FUN_02156db4(param_2);
  if ((int)param_2[0xe] < (int)param_2[6]) {
    param_2[6] = param_2[0xe];
    param_2[10] = 0;
    *(undefined1 *)((int)param_2 + 0x31) = 1;
    *param_2 = FUN_02156984;
    *(undefined1 *)((int)param_2 + 0x35) = 1;
    return;
  }
  return;
}

