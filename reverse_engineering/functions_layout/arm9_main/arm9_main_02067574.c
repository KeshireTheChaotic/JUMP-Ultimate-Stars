
undefined4 FUN_02067574(void)

{
  char local_8 [8];
  
  local_8[0] = FUN_02067394();
  if ((local_8[0] == '\0') || (local_8[0] == '\x12')) {
    FUN_02067454();
    return 1;
  }
  FUN_02068188(local_8);
  FUN_020673a0(local_8[0]);
  return 0;
}

