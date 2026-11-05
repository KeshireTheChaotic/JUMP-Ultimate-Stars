
void FUN_021816f8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_18 [3];
  
  local_18[0] = param_2;
  uVar1 = FUN_0217fb7c();
  iVar2 = FUN_020014e4(uVar1,local_18);
  if (iVar2 == 0) {
    FUN_02002068(s_val____NULL_021a4d7c,s_sb_serverlist_c_021a4cf0,0,0xf4);
  }
  else {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + -1;
    if (*(int *)(iVar2 + 4) == 0) {
      uVar1 = FUN_0217fb7c(param_1);
      FUN_02001540(uVar1,local_18);
    }
  }
  return;
}

