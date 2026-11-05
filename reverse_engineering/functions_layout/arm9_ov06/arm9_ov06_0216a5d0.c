
undefined4 FUN_0216a5d0(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x48) == '\0') &&
     (cVar1 = *(char *)(param_1 + 0x47), *(char *)(param_1 + 0x47) = cVar1 + '\x01', '<' < cVar1)) {
    *(undefined1 *)(param_1 + 0x46) = 5;
    return 1;
  }
  return 0;
}

