
void FUN_02013bd4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 *puStack_14;
  
  local_1c = *param_4;
  puStack_14 = param_4;
  FUN_02012520(param_1,param_2,auStack_18,&local_1c);
  iVar1 = jus_AllocDebug(0x4c);
  if (iVar1 != 0) {
    jus_TagIPMV::jus_TagIPMV(iVar1,0,param_1,param_2,param_3,auStack_18,param_5,param_6,param_7);
  }
  return;
}

