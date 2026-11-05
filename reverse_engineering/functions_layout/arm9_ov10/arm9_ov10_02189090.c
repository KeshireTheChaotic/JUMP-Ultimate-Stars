
int FUN_02189090(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_021893dc(param_1,param_3,1);
  if (iVar1 != 0) {
    return 4;
  }
  iVar1 = FUN_02004cec(param_3,&DAT_021a6364,4);
  if (iVar1 != 0) {
    FUN_0218913c(param_1,1,s_Unexpected_data_was_received_fro_021a636c);
    FUN_02183f3c(param_1,3,1);
    return 3;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  uVar2 = *(undefined4 *)(param_2 + 0x10);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)FUN_0217583c(4);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0218912c(param_1,s_Out_of_memory__021a639c);
      return 1;
    }
    *puVar3 = 0;
    iVar1 = FUN_02183ec4(param_1,iVar1,uVar2,puVar3,param_2,0);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  FUN_021865e4(param_1,param_2);
  return 0;
}

