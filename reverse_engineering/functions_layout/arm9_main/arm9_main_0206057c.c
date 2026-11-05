
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0206057c(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,uint param_6,
                 int param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  cVar1 = *(char *)(**(int **)(param_1 + 4) + 1);
  if (param_7 == 0) {
    return;
  }
  do {
    if ((param_6 & 0x800) == 0) {
      iVar2 = param_2;
      if ((param_6 & 0x400) != 0) {
        iVar2 = FUN_0205ee80(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_7,0);
        iVar2 = param_2 + ((param_4 + 1) / 2 - (iVar2 + 1) / 2);
      }
    }
    else {
      iVar2 = FUN_0205ee80(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),param_7,0);
      iVar2 = param_2 + (param_4 - iVar2);
    }
    FUN_02060678(param_1,iVar2,param_3,param_5);
    param_3 = param_3 + iVar3 + cVar1;
  } while (param_7 != 0);
  return;
}

