
int FUN_021876b8(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_021893dc(param_1,param_3,1);
  if (iVar1 != 0) {
    return 4;
  }
  iVar1 = FUN_02004cec(param_3,s__npr__021a5f04,5);
  if (iVar1 != 0) {
    FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5f0c);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar1 = FUN_02189328(param_3,s__profileid__021a5f3c,auStack_20,0x10);
  if (iVar1 == 0) {
    FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a5f0c);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  uVar2 = FUN_02005f14(auStack_20);
  iVar1 = *(int *)(param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)FUN_0217583c(8);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a5f48);
      return 1;
    }
    puVar4[1] = uVar2;
    *puVar4 = 0;
    iVar1 = FUN_02183ec4(param_1,iVar1,uVar3,puVar4,param_2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  FUN_021865e4(param_1,param_2);
  return 0;
}

