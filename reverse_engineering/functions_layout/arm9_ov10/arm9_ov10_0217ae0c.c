
undefined4 FUN_0217ae0c(undefined4 param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  
  if (param_2 != 0) {
LAB_0217ae2a:
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x1b4) = 1;
    iVar2 = FUN_02178448();
    uVar6 = OS_GetTick();
    *(undefined8 *)(iVar2 + 0x1b8) = uVar6;
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0xf4) = param_1;
    return 0;
  }
  iVar2 = FUN_02178448();
  if (*(int *)(iVar2 + 0x1c) == 0) {
    iVar2 = FUN_02178448();
    if (*(short *)(iVar2 + 0x1a) == 0) goto LAB_0217ae2a;
  }
  iVar2 = FUN_02178448();
  if (*(char *)(iVar2 + 0x15) == '\0') {
    iVar2 = FUN_02178448();
    uVar3 = FUN_0217fc04(*(undefined4 *)(iVar2 + 0xe4),0);
    iVar2 = FUN_02178448();
    uVar4 = FUN_0217fa50(uVar3,s_dwc_pid_021a4b44,0);
    *(undefined4 *)(iVar2 + 0xf4) = uVar4;
    iVar2 = FUN_02178448();
    uVar4 = FUN_0217fa28(uVar3);
    *(undefined4 *)(iVar2 + 0x24) = uVar4;
    iVar2 = FUN_02178448();
    uVar1 = FUN_0217fa0c(uVar3);
    *(undefined2 *)(iVar2 + 0xa4) = uVar1;
    iVar2 = FUN_02178448();
    iVar5 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x1fc) = *(undefined4 *)(iVar5 + 0xf4);
    uVar3 = 1;
  }
  else {
    iVar2 = FUN_02178448();
    if (*(char *)(iVar2 + 0x15) == '\x01') {
      iVar2 = FUN_02178448();
      *(undefined4 *)(iVar2 + 0xf4) = param_1;
    }
    iVar2 = FUN_02178448();
    *(undefined4 *)(iVar2 + 0x1fc) = param_1;
    iVar2 = FUN_02178448();
    local_1c = *(undefined4 *)(iVar2 + 0x1c);
    iVar2 = FUN_02178448();
    local_18 = (uint)*(ushort *)(iVar2 + 0x1a);
    uVar3 = 3;
  }
  iVar2 = FUN_02178448();
  *(undefined4 *)(iVar2 + 0x1c0) = 6000;
  iVar2 = FUN_02178448();
  uVar6 = OS_GetTick();
  *(undefined8 *)(iVar2 + 0x1c4) = uVar6;
  iVar2 = FUN_02178448();
  *(undefined4 *)(iVar2 + 0x1b4) = 0;
  iVar2 = FUN_02178448();
  if (*(int *)(iVar2 + 0x200) == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0xb;
  }
  iVar2 = FUN_02178448();
  local_20 = (uint)*(byte *)(iVar2 + 0x15);
  iVar2 = FUN_02178448();
  iVar5 = FUN_02178448();
  uVar3 = FUN_0217c024(uVar4,param_1,*(undefined4 *)(iVar2 + 0x24),*(undefined2 *)(iVar5 + 0xa4),
                       &local_20,uVar3);
  return uVar3;
}

