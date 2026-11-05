
int FUN_02183a48(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_24 [4];
  int local_20;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_02002068(s_peer_>outputBuffer_buffer____NUL_021a5344,s_gpiBuffer_c_021a5248,0,0xde);
  }
  if ((*(int *)(param_2 + 0x30) == *(int *)(param_2 + 0x34)) &&
     (iVar1 = FUN_0200131c(*(undefined4 *)(param_2 + 0x38)), iVar1 == 0)) {
    iVar1 = FUN_02183acc(param_1,*(undefined4 *)(param_2 + 8),&uStack_8,1,auStack_24,&local_20,
                         &DAT_021a5368);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (local_20 != 0) {
      return 0;
    }
  }
  iVar1 = FUN_02183c68(param_1,param_2 + 0x28,(int)(char)uStack_8);
  return iVar1;
}

