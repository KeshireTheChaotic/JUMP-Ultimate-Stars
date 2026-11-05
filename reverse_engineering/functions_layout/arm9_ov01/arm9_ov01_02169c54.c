
void FUN_02169c54(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar1 + 0x5c) != '\0') {
    FUN_02028384(*(int *)(param_1 + 4),0x2169c79);
    *(undefined4 *)(iVar1 + 0x58) = 4;
    *(undefined1 *)(iVar1 + 0x5c) = 0;
  }
  return;
}

