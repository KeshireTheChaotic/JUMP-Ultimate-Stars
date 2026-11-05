
int FUN_0205ee0c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_24 = 0;
  local_20 = 0;
  pcVar3 = (code *)param_1[1];
  iVar2 = 1;
  local_28 = param_3;
  iVar1 = (*pcVar3)(&local_28);
  while (iVar1 != 0) {
    if (iVar1 == 10) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = (*pcVar3)(&local_28);
  }
  return iVar2 * (param_2 + *(char *)(*param_1 + 1)) - param_2;
}

