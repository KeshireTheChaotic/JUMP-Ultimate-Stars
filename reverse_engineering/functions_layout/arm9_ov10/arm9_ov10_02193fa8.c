
int FUN_02193fa8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0xc);
  if ((*(int *)(iVar2 + 0x824) != 0) && (*(char *)(iVar2 + 0x456) == '\0')) {
    iVar1 = FUN_02194c58(*(int *)(iVar2 + 0x824) + *(int *)(iVar2 + 0x82c),
                         *(int *)(iVar2 + 0x828) - *(int *)(iVar2 + 0x82c),param_2);
    if (iVar1 != 0) {
      (*DAT_021a8528)(*(undefined4 *)(iVar2 + 0x824));
      *(undefined4 *)(iVar2 + 0x824) = 0;
      *param_1 = 0;
      return 0;
    }
    FUN_02194a7c(iVar2,*(undefined4 *)(iVar2 + 0x824));
    if (*(char *)(iVar2 + 0x456) == '\0') {
      *(undefined4 *)(iVar2 + 0x824) = 0;
    }
  }
  iVar1 = *(int *)(iVar2 + 0x824);
  while( true ) {
    if (iVar1 != 0) {
      *param_1 = *(int *)(iVar2 + 0x828) - *(int *)(iVar2 + 0x82c);
      return *(int *)(iVar2 + 0x824) + *(int *)(iVar2 + 0x82c);
    }
    iVar1 = FUN_02194950(param_2);
    if (iVar1 == 9) break;
    iVar1 = *(int *)(iVar2 + 0x824);
  }
  *param_1 = 0;
  return 0;
}

