
int FUN_0214ffdc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 200) != '\0') && (*(int *)(param_1 + 0xac) == 1)) {
    param_2 = param_2 * 4;
    iVar2 = param_1 + 0x1c;
    iVar1 = *(int *)(iVar2 + param_2);
    if (iVar1 != 0) {
      if (param_3 == 0) {
        *(int *)(iVar2 + param_2) = iVar1 + -1;
        *(int *)(param_1 + 0x3c + param_2) = *(int *)(param_1 + 0x3c + param_2) + -1;
        return 1;
      }
      *(undefined4 *)(iVar2 + param_2) = 0;
      *(int *)(param_1 + 0x3c + param_2) = *(int *)(param_1 + 0x3c + param_2) - iVar1;
      return iVar1;
    }
  }
  return 0;
}

