
void FUN_02068dcc(int param_1)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(byte *)(param_1 + 0xd0d) < 6) {
    iVar1 = FUN_02067348();
    param_1 = param_1 + iVar1 * 0x100;
    if ((*(char *)(param_1 + 0xc0) == '\0') &&
       ((uint)*(byte *)(param_1 + 0xcb) +
        (uint)*(byte *)(param_1 + 0xca) +
        (uint)*(byte *)(param_1 + 200) + (uint)*(byte *)(param_1 + 0xc9) != 0)) {
      local_10 = FUN_02068e7c(param_1 + 200);
      local_c = FUN_02068e7c(param_1 + 0xcc);
      func_0x02193864(&local_10,&local_c);
    }
  }
  return;
}

