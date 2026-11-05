
void FUN_0218a8bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if (*(int *)(param_1 + 0xc) == 5) {
    local_c = param_2;
    local_8 = param_3;
    uStack_4 = param_4;
    FUN_0218c2e0(&local_c,&local_8);
    iVar1 = FUN_0200131c(*(undefined4 *)(param_1 + 0x98));
    if (iVar1 != 0) {
      FUN_0218a0e8(param_1,0,local_c,local_8,param_4);
      return;
    }
    FUN_0218aa60(param_1,local_c,local_8,param_4);
  }
  return;
}

