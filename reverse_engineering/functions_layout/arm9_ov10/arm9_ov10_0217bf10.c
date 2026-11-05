
void FUN_0217bf10(undefined4 param_1,undefined1 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_214 [512];
  
  iVar1 = FUN_02052c44(auStack_214,0x200,s__s_dv_s_021a4b98,&DAT_021a4ba0,3,&DAT_021a4ba8);
  auStack_214[iVar1] = param_2;
  auStack_214[iVar1 + 1] = 0;
  if (param_4 != 0) {
    iVar2 = FUN_02004b04(param_4);
    FUN_02051890(param_4,auStack_214 + iVar1 + 1,iVar2);
    (auStack_214 + iVar1 + 1)[iVar2] = 0;
  }
  FUN_02181b3c(param_1,param_3,auStack_214);
  return;
}

