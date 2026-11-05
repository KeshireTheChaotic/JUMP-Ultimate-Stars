
undefined4 FUN_02179580(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0217fa50(param_1,s_numplayers_021a4b4c,0xffffffff);
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = FUN_0217fa50(param_1,s_maxplayers_021a4b58);
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = FUN_0217fa50(param_1,s_dwc_mtype_021a4b64);
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = FUN_0217fa50(param_1,s_dwc_mresv_021a4b70);
  if ((iVar1 == -1) && (iVar1 = FUN_0217fa50(param_1,s_dwc_mresv_021a4b70), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_0217fa50(param_1,s_dwc_mver_021a4b7c,0xffffffff);
  if (iVar1 == -1) {
    return 0;
  }
  uVar2 = FUN_0217fa50(param_1,s_dwc_pid_021a4b44);
  return uVar2;
}

