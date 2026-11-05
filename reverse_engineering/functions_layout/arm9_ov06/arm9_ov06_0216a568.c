
undefined4 FUN_0216a568(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x47);
  if (*(char *)(param_1 + 0x48) == '\0') {
    *(char *)(param_1 + 0x47) = cVar1 + '\x01';
    if ('<' < cVar1) {
      *(undefined1 *)(param_1 + 0x46) = 5;
      return 1;
    }
  }
  else {
    *(char *)(param_1 + 0x47) = cVar1 + '\x01';
    if (('<' < cVar1) &&
       (*(undefined1 *)(param_1 + 0x47) = 0x3c, *(char *)(*(int *)(param_1 + 0x18) + 0x18) == '\b'))
    {
      *(undefined1 *)(param_1 + 0x46) = 5;
      return 1;
    }
  }
  return 0;
}

