
void FUN_02014080(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int iVar1;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  local_1c = *param_3;
  uStack_14 = param_4;
  FUN_02012520(param_1,param_2,auStack_18,&local_1c);
  iVar1 = jus_AllocDebug(0x44);
  if (iVar1 != 0) {
    jus_TagDLSE::jus_TagDLSE(iVar1,0,param_1,param_2,auStack_18,param_4,param_5);
  }
  return;
}

