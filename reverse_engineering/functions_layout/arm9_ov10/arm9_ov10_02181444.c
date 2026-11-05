
undefined4 FUN_02181444(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 uStack_90;
  undefined1 local_8f;
  undefined2 local_8e;
  int local_8c;
  undefined1 auStack_88 [128];
  
  uVar1 = FUN_02181514(param_1 + 0xc,0x14);
  if (DAT_021a7d20 == 0) {
    FUN_02003ce0(auStack_88,s__s_ms_d_gs_nintendowifi_net_021a4d3c,param_1 + 0xc,uVar1);
  }
  else {
    FUN_02004b18(auStack_88);
  }
  local_8f = 2;
  local_8e = 0xee70;
  local_8c = FUN_020019ec(auStack_88);
  if (local_8c == -1) {
    iVar2 = FUN_02193970(auStack_88);
    if (iVar2 == 0) {
      return 2;
    }
    local_8c = *(int *)**(undefined4 **)(iVar2 + 0xc);
  }
  iVar2 = *(int *)(param_1 + 0x4b0);
  if (iVar2 == -1) {
    iVar2 = FUN_02001b94(2,1);
    *(int *)(param_1 + 0x4b0) = iVar2;
    iVar2 = *(int *)(param_1 + 0x4b0);
    if (iVar2 == -1) {
      return 1;
    }
  }
  iVar2 = FUN_02001b08(iVar2,&uStack_90,8);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_02001b80(*(undefined4 *)(param_1 + 0x4b0));
  *(undefined4 *)(param_1 + 0x4b0) = 0xffffffff;
  return 3;
}

