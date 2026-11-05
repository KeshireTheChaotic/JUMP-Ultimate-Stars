
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02060678(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 local_28;
  
  iVar4 = param_1[2];
  iVar3 = param_1[1];
  local_28 = param_5;
  pcVar2 = *(code **)(iVar3 + 4);
  iVar1 = (*pcVar2)(&local_28);
  if (iVar1 != 0) {
    do {
      if (iVar1 == 10) break;
      iVar1 = FUN_0205f684(*param_1,iVar3,param_2,param_3,param_4,iVar1);
      param_2 = param_2 + iVar1 + iVar4;
      iVar1 = (*pcVar2)(&local_28);
    } while (iVar1 != 0);
  }
  if (param_6 == (undefined4 *)0x0) {
    return;
  }
  if (iVar1 != 10) {
    local_28 = 0;
  }
  *param_6 = local_28;
  return;
}

