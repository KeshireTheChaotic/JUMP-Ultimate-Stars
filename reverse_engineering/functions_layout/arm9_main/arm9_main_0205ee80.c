
int FUN_0205ee80(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_28 [2];
  
  pcVar4 = (code *)param_1[1];
  iVar5 = 0;
  local_28[0] = param_3;
  iVar1 = (*pcVar4)(local_28);
  while ((iVar1 != 0 && (iVar1 != 10))) {
    uVar2 = FUN_0205ef9c(param_1);
    if (uVar2 == 0xffff) {
      uVar2 = (uint)*(ushort *)(*param_1 + 2);
    }
    pcVar3 = (char *)FUN_0205ef40(param_1,uVar2);
    if ((short)param_1[2] == 0) {
      iVar1 = (int)pcVar3[2];
    }
    else {
      iVar1 = (int)*pcVar3 + (uint)(byte)pcVar3[1];
    }
    iVar5 = iVar5 + param_2 + iVar1;
    iVar1 = (*pcVar4)(local_28);
  }
  if (param_4 != (undefined4 *)0x0) {
    if (iVar1 != 10) {
      local_28[0] = 0;
    }
    *param_4 = local_28[0];
  }
  if (0 < iVar5) {
    iVar5 = iVar5 - param_2;
  }
  return iVar5;
}

