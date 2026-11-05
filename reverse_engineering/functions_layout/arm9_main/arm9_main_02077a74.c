
undefined4 FUN_02077a74(int param_1,int param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = *(char *)(param_1 + 0x1a);
    if (cVar1 < 0xf) {
      *(char *)(param_1 + 0x1a) = cVar1 + '\x01';
      *(char *)(param_1 + cVar1 + 0x1b) = (char)param_2;
      return 1;
    }
  }
  return 0;
}

