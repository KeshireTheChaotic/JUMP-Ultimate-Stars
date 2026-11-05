
void FUN_021631bc(undefined4 param_1)

{
  undefined1 auStack_10 [4];
  int local_c;
  
  FUN_02165b60(*DAT_0216e804,0,auStack_10,&local_c);
  local_c = local_c + 0xc;
  FUN_02163300();
  if (0xbf < local_c) {
    if (*(char *)((int)DAT_0216e804 + 0x1e) != '\0') {
      FUN_021677b8(param_1,0x2163181);
      return;
    }
    FUN_021677b8(param_1,0x2163109);
  }
  return;
}

