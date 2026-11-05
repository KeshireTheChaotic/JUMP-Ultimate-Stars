
void FUN_0218d80c(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [72];
  
  if (((0 < param_4) && (param_4 < 0x42)) && (*(char *)(param_3 + param_4 + -1) == '\0')) {
    FUN_02004b18(auStack_58,param_3);
    uVar1 = FUN_02004b04(param_1 + 0x44);
    FUN_0218d890(param_1 + 0x44,uVar1,auStack_58,param_4 + -1);
    FUN_0218d964(auStack_58,param_4 + -1,param_2 + *(int *)(param_2 + 0x800));
    iVar2 = FUN_02004b04(param_2 + *(int *)(param_2 + 0x800));
    *(int *)(param_2 + 0x800) = *(int *)(param_2 + 0x800) + iVar2 + 1;
  }
  return;
}

