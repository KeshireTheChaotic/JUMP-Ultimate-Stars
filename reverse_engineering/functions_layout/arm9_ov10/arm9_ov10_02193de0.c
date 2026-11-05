
int FUN_02193de0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((*(int *)(iVar1 + 0x824) == 0) || (*(char *)(iVar1 + 0x456) == '\0')) {
    FUN_02193e5c(param_1);
  }
  if ((*(int *)(iVar1 + 0x824) != 0) && (*(char *)(iVar1 + 0x456) != '\0')) {
    return *(int *)(iVar1 + 0x828) - *(int *)(iVar1 + 0x82c);
  }
  if ((*(int *)(iVar1 + 0x824) == 0) &&
     ((*(char *)(param_1 + 8) != '\x04' || (*(char *)(iVar1 + 0x455) == '\t')))) {
    return -1;
  }
  return 0;
}

