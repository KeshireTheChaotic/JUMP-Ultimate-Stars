
undefined4 FUN_021cf368(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(char *)(param_2 + 4) == -1) && (*(char *)(param_2 + 6) == '\x04')) {
    FUN_021cf3f0();
  }
  else {
    iVar1 = func_0x0217ee90(*(undefined1 *)(param_1 + 4),param_2,0x10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

