
int FUN_021839b4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  int local_1c [2];
  
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_02002068(s_peer_>outputBuffer_buffer____NUL_021a5344,s_gpiBuffer_c_021a5248,0,0xfb);
  }
  iVar2 = 0;
  if (param_4 == 0) {
    return 0;
  }
  if ((*(int *)(param_2 + 0x30) == *(int *)(param_2 + 0x34)) &&
     (iVar1 = FUN_0200131c(*(undefined4 *)(param_2 + 0x38)), iVar1 == 0)) {
    do {
      iVar1 = FUN_02183acc(param_1,*(undefined4 *)(param_2 + 8),param_3 + iVar2,param_4,auStack_20,
                           local_1c,&DAT_021a5368);
      if (iVar1 != 0) {
        return iVar1;
      }
      if (local_1c[0] == 0) break;
      iVar2 = iVar2 + local_1c[0];
      param_4 = param_4 - local_1c[0];
    } while (param_4 != 0);
  }
  if ((param_4 == 0) ||
     (iVar2 = FUN_02183bb0(param_1,param_2 + 0x28,param_3 + iVar2,param_4), iVar2 == 0)) {
    iVar2 = 0;
  }
  return iVar2;
}

