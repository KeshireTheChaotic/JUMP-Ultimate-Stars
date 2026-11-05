
bool FUN_020775a0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  if (param_2 == 0) {
    return false;
  }
  if (*(char *)(param_2 + 0x40) != '\x02') {
    return false;
  }
  if (*(char *)(*(int *)(DAT_0214bd80 + 0x50) + (uint)*(byte *)(param_2 + 0x41) * 4) != '\x02') {
    return true;
  }
  cVar1 = *(char *)(*(int *)(DAT_0214bd80 + 0x50) + (uint)*(byte *)(param_2 + 0x41) * 4 + 1);
  if (cVar1 == '\x03') {
    return true;
  }
  if (cVar1 == '\x05') {
    return true;
  }
  return cVar1 == '\x06';
}

